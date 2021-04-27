#include <iostream>
#include <iomanip>
#include <chrono>
#include <string>
#include <vector>
#include <map>

#include "goBaseVisitor.h"
#include "antlr4-runtime.h"

#include "../../Object.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/type/Typespec.h"
#include "StackFrame.h"
#include "Executor.h"

namespace backend { namespace interpreter {

using namespace std;
using namespace std::chrono;

Object Executor::visitProgram(goParser::ProgramContext *ctx)
{
    auto start = steady_clock::now();

    StackFrame *programFrame = new StackFrame(programId);
    runtimeStack.push(programFrame);

    visit(ctx->block()->compoundStatement());

    auto end = steady_clock::now();
    long elapsedTime = duration_cast<milliseconds>(end - start).count();
    cout << setfill(' ') << endl;
    cout << setw(20) << executionCount   << " statements executed." << endl;
    cout << setw(20) << error.getCount() << " runtime errors." << endl;
    cout << setw(20) << elapsedTime      << " milliseconds execution time."
                                         << endl;

    return nullptr;
}

Object Executor::visitStatement(goParser::StatementContext *ctx)
{
    executionCount++;
    visitChildren(ctx);

    return nullptr;
}

Object Executor::visitAssignmentStatement(
                                goParser::AssignmentStatementContext *ctx)
{
    goParser::ExpressionContext*exprCtx = ctx->rhs()->expression();
    Object value = visit(exprCtx);
    assignValue(ctx->lhs()->variable(), value, exprCtx->type);

    return nullptr;
}

Cell *Executor::assignValue(goParser::VariableContext *varCtx,
                            const Object& value, Typespec *valueType)
{
    Typespec *targetType = varCtx->type;
    Cell *targetCell = visit(varCtx).as<Cell *>();

    assignValue(targetCell, targetType, value, valueType);

    return targetCell;
}

void Executor::assignValue(Cell *targetCell, Typespec *targetType,
                           const Object& value, Typespec *valueType)
{
    // Assign with any necessary type conversions.
    if (   (targetType == Predefined::integerType)
        && (valueType  == Predefined::charType))
    {
        int charValue = value.as<char>();
        targetCell->setValue(charValue);
    }
    else if (targetType == Predefined::realType)
    {
        double doubleValue =
                (valueType == Predefined::integerType) ? value.as<int>()
              : (valueType == Predefined::charType)    ? value.as<char>()
              :                                          value.as<double>();
        targetCell->setValue(doubleValue);
    }
    else if (targetType == Predefined::stringType)
    {
        string stringValue = value.as<string>();
        targetCell->setValue(new string(stringValue));
    }
    else
    {
        targetCell->setValue(value);
    }
}

Object Executor::visitIfStatement(goParser::IfStatementContext *ctx)
{
    goParser::TrueStatementContext  *trueCtx  = ctx->trueStatement();
    goParser::FalseStatementContext *falseCtx = ctx->falseStatement();
    bool value = visit(ctx->expression()).as<bool>();

    if      (value)               visit(trueCtx);
    else if (falseCtx != nullptr) visit(falseCtx);

    return nullptr;
}

Object Executor::visitCaseStatement(goParser::CaseStatementContext *ctx)
{
    /*goParser::ExpressionContext *exprCtx = ctx->expression();
    goParser::CaseBranchListContext *branchListCtx = ctx->caseBranchList();

    // First time: Create the jump table.
    if (ctx->jumpTable == nullptr)
    {
        ctx->jumpTable = createJumpTable(branchListCtx);
    }

    Object value = visit(exprCtx);
    int intValue =
            (exprCtx->type == Predefined::integerType) ? value.as<int>()
                                                       : value.as<char>();

    // From the jump table obtain the statement corresponding to the value.
    auto *jumpTable = ctx->jumpTable;
    if (jumpTable->find(intValue) != jumpTable->end())
    {
        goParser::StatementContext *stmtCtx = (*jumpTable)[intValue];
        visit(stmtCtx);
    }

    return nullptr;
}

/**
 * Create the jump table for a CASE statement.
 * @param branchListCtx the CaseBranchListContext.
 * @return the jump table.
 */
/*map<int, goParser::StatementContext*> *Executor::createJumpTable(
                            goParser::CaseBranchListContext *branchListCtx)
{
    auto *table = new map<int, goParser::StatementContext*>();
    
    // Loop over the CASE branches.
    for (goParser::CaseBranchContext *branchCtx :
                                                branchListCtx->caseBranch())
    {
        goParser::CaseConstantListContext *constListCtx =
                                                branchCtx->caseConstantList();
        goParser::StatementContext *stmtCtx = branchCtx->statement();
    
        if (constListCtx != nullptr)
        {
            // Loop over the CASE constants of each CASE branch.
            for (goParser::CaseConstantContext *caseConstCtx :
                                                constListCtx->caseConstant())
            {
                (*table)[caseConstCtx->value] = stmtCtx;
            }
        }
    }

    return table;*/
}

/*Object Executor::visitRepeatStatement(goParser::RepeatStatementContext *ctx)
{
    goParser::StatementListContext *listCtx = ctx->statementList();
    Object objValue;
    bool value;

    do
    {
        visit(listCtx);
        value = visit(ctx->expression()).as<bool>();
    } while (!value);

    return nullptr;
}*/

Object Executor::visitWhileStatement(goParser::WhileStatementContext *ctx)
{
    goParser::StatementContext *stmtCtx = ctx->statement();
    bool value = visit(ctx->expression()).as<bool>();

    while (value)
    {
        visit(stmtCtx);
        value = visit(ctx->expression()).as<bool>();
    }

    return nullptr;
}

Object Executor::visitForStatement(goParser::ForStatementContext *ctx)
{
    bool like_while = ctx->whileStatement() == nullptr;
    if (!like_while)
    {
    	visit(ctx->whileStatement());
    	return nullptr;
    }
	goParser::VariableContext *controlCtx = ctx->variable();
    goParser::ExpressionContext *startExprCtx = ctx->expression()[0];
    goParser::ExpressionContext *stopExprCtx  = ctx->expression()[1];

    // Initial value.
    Object startValue = visit(startExprCtx);
    assignValue(controlCtx, startValue, startExprCtx->type);

    // Terminal value.
    //bool to = ctx->TO() != nullptr;
    Object stopValue = visit(stopExprCtx);
    bool value = visit(ctx->expression()[1]).as<bool>();
    goParser::StatementContext *stmtCtx = ctx->statement();
    while (value)
    {
    	visit(stmtCtx);
    	visit(ctx->assignmentStatement());
    	value = visit(ctx->expression()[1]).as<bool>();
    }
    // Integer control values.
    /*if (controlCtx->type->baseType() == Predefined::integerType)
    {
        int control = startValue.as<int>();
        int stop    = stopValue.as<int>();
        
        if (to)
        {
            while (control <= stop)
            {
                visit(ctx->statement());
                Object nextValue = ++control;
                assignValue(controlCtx, nextValue, Predefined::integerType);
            }
        }
        else  // downto
        {
            while (control >= stop)
            {
                visit(ctx->statement());
                Object nextValue = --control;
                assignValue(controlCtx, nextValue, Predefined::integerType);
            }
        }
    }
    
    // Character control values.
    else
    {
        char control = startValue.as<char>();
        char stop    = stopValue.as<char>();
        
        if (to)
        {
            while (control <= stop)
            {
                visit(ctx->statement());
                Object nextValue = ++control;
                assignValue(controlCtx, nextValue, Predefined::charType);
            }
        }
        else  // downto
        {
            while (control >= stop)
            {
                visit(ctx->statement());
                Object nextValue = --control;
                assignValue(controlCtx, nextValue, Predefined::charType);
            }
        }
    }*/

    return nullptr;
}

/*Object Executor::visitProcedureCallStatement(
                            goParser::ProcedureCallStatementContext *ctx)
{
    SymtabEntry *routineId = ctx->procedureName()->entry;
    goParser::ArgumentListContext *argListCtx = ctx->argumentList();
    StackFrame *newFrame = new StackFrame(routineId);

    // Execute any actual parameters and initialize
    // the formal parameters in the routine's new stack frame.
    if (argListCtx != nullptr)
    {
        vector<SymtabEntry*> *parameters = routineId->getRoutineParameters();
        executeCallArguments(argListCtx, parameters, newFrame);
    }

    // Push the routine's stack frame onto the runtime stack
    // and execute the procedure.
    runtimeStack.push(newFrame);

    // Execute the routine.
//    Object *stmtObj = routineId->getExecutable();
//    goParser::CompoundStatementContext *stmtCtx =
//    				(*stmtObj).as<goParser::CompoundStatementContext *>();
    Object stmtObj = routineId->getExecutable();
    goParser::CompoundStatementContext *stmtCtx =
                    stmtObj.as<goParser::CompoundStatementContext *>();
    visit(stmtCtx);

    // Pop off the routine's stack frame.
    runtimeStack.pop();

    return nullptr;
}*/

void Executor::executeCallArguments(goParser::ArgumentListContext *argListCtx,
                                    vector<SymtabEntry*> *parameters,
                                    StackFrame *frame)
{
    // Loop over the parameters.
    for (int i = 0; i < parameters->size(); i++)
    {
        SymtabEntry *parmId = (*parameters)[i];
        string parmName = parmId->getName();
        Kind parmKind = parmId->getKind();
        Cell *parmCell = frame->getCell(parmName);
        goParser::ArgumentContext *argCtx = argListCtx->argument()[i];
        Object value = visit(argCtx);
        
        // Value parameter: Copy the argument's value.
        if (parmKind == VALUE_PARAMETER)
        {
            assignValue(parmCell, parmId->getType(),
                        value, argCtx->expression()->type);
        }
        
        // Reference parameter: Copy the argument's cell.
        else
        {
            goParser::FactorContext *factorCtx =
                    argCtx->expression()->simpleExpression()[0]
                                                       ->term()[0]->factor()[0];
            goParser::VariableContext *varCtx =
                ((goParser::VariableFactorContext *) factorCtx)->variable();
            
            Cell *argCell = visitVariable(varCtx).as<Cell*>();
            frame->replaceCell(parmName, argCell);
        }
    }
}

Object Executor::visitExpression(goParser::ExpressionContext *ctx)
{
    goParser::SimpleExpressionContext *simpleCtx1 =
                                                    ctx->simpleExpression()[0];
    goParser::RelOpContext *relOpCtx = ctx->relOp();
    Object operand1 = visit(simpleCtx1);
    Typespec *type1 = simpleCtx1->type;

    // More than one simple expression?
    if (relOpCtx != nullptr)
    {
        string op = relOpCtx->getText();
        goParser::SimpleExpressionContext *simpleCtx2 =
                                                    ctx->simpleExpression()[1];
        Object operand2 = visit(simpleCtx2);
        Typespec *type2 = simpleCtx2->type;

        bool integerMode   = false;
        bool realMode      = false;
        bool characterMode = false;

        if (   (type1 == Predefined::integerType)
            && (type2 == Predefined::integerType))
        {
            integerMode = true;
        }
        else if (   (type1 == Predefined::realType)
                 || (type2 == Predefined::realType))
        {
            realMode = true;
        }
        else if (   (type1 == Predefined::charType)
                 && (type2 == Predefined::charType))
        {
            characterMode = true;
        }

        if (integerMode || characterMode)
        {
            int value1 = type1 == Predefined::integerType
                    ? operand1.as<int>() : operand1.as<char>();
            int value2 = type2 == Predefined::integerType
                    ? operand2.as<int>() : operand2.as<char>();
            bool result = false;

            if      (op == "=" ) result = value1 == value2;
            else if (op == "<>") result = value1 != value2;
            else if (op == "<" ) result = value1 <  value2;
            else if (op == "<=") result = value1 <= value2;
            else if (op == ">" ) result = value1 >  value2;
            else if (op == ">=") result = value1 >= value2;

            return result;
        }
        else if (realMode)
        {
            double value1 = type1 == Predefined::integerType
                    ? operand1.as<int>() : operand1.as<double>();
            double value2 = type2 == Predefined::integerType
                    ? operand2.as<int>() : operand2.as<double>();
            bool result = false;

            if      (op == "=" ) result = value1 == value2;
            else if (op == "<>") result = value1 != value2;
            else if (op == "<" ) result = value1 <  value2;
            else if (op == "<=") result = value1 <= value2;
            else if (op == ">" ) result = value1 >  value2;
            else if (op == ">=") result = value1 >= value2;

            return result;
        }
        else  // stringMode)
        {
            string value1 = operand1.as<string>();
            string value2 = operand2.as<string>();
            bool result = false;

            if      (op == "=" ) result = value1 == value2;
            else if (op == "<>") result = value1 != value2;
            else if (op == "<" ) result = value1 <  value2;
            else if (op == "<=") result = value1 <= value2;
            else if (op == ">" ) result = value1 >  value2;
            else if (op == ">=") result = value1 >= value2;

            return result;
        }
    }

    return operand1;
}

Object Executor::visitSimpleExpression(goParser::SimpleExpressionContext *ctx)
{
    {
        int count = ctx->term().size();
        bool negate =    (ctx->sign() != nullptr)
                      && (ctx->sign()->getText() == "-");

        // First term.
        goParser::TermContext *termCtx1 = ctx->term()[0];
        Object operand1 = visit(termCtx1);
        Typespec *type1 = termCtx1->type;

        if (negate)
        {
            if (type1 == Predefined::charType)
            {
                int value = operand1.as<int>();
                operand1 = -value;
            }
            else if (type1 == Predefined::realType)
            {
                double value = operand1.as<double>();
                operand1 = -value;
            }
        }
        
        // Loop over the subsequent terms.
        for (int i = 1; i < count; i++)
        {
            string op = toLowerCase(ctx->addOp()[i-1]->getText());
            goParser::TermContext *termCtx2 = ctx->term()[i];
            Object operand2 = visit(termCtx2);
            Typespec *type2 = termCtx2->type;

            bool integerMode = false;
            bool realMode    = false;
            bool booleanMode = false;

            if (   (type1 == Predefined::integerType)
                && (type2 == Predefined::integerType))
            {
                integerMode = true;
            }
            else if (   (type1 == Predefined::realType)
                     || (type2 == Predefined::realType))
            {
                realMode = true;
            }
            else if (   (type1 == Predefined::booleanType)
                     && (type2 == Predefined::booleanType))
            {
                booleanMode = true;
            }

            if (integerMode)
            {
                int value1 = operand1.as<int>();
                int value2 = operand2.as<int>();
                operand1 = (op == "+") ? value1 + value2
                                       : value1 - value2;
            }
            else if (realMode)
            {
                double value1 = type1 == Predefined::integerType
                        ? operand1.as<int>() : operand1.as<double>();
                double value2 = type2 == Predefined::integerType
                        ? operand2.as<int>() : operand2.as<double>();
                operand1 = (op == "+") ? value1 + value2
                                       : value1 - value2;
            }
            else if (booleanMode)
            {
                operand1 = operand1.as<bool>() || operand2.as<bool>();
            }
            else  // stringMode
            {
                operand1 = operand1.as<string>() + operand2.as<string>();
            }
        }
        
        return operand1;
    }
}

Object Executor::visitTerm(goParser::TermContext *ctx)
{
    int count = ctx->factor().size();

    // First factor.
    goParser::FactorContext *factorCtx1 = ctx->factor()[0];
    Object operand1 = visit(factorCtx1);
    Typespec *type1 = factorCtx1->type;

    // Loop over the subsequent factors.
    for (int i = 1; i < count; i++)
    {
        string op = toLowerCase(ctx->mulOp()[i-1]->getText());
        goParser::FactorContext *factorCtx2 = ctx->factor()[i];
        Object operand2 = visit(factorCtx2);
        Typespec *type2 = factorCtx2->type;

        bool integerMode = false;
        bool realMode    = false;

        if (   (type1 == Predefined::integerType)
            && (type2 == Predefined::integerType))
        {
            integerMode = true;
        }
        else if (   (type1 == Predefined::realType)
                 || (type2 == Predefined::realType))
        {
            realMode = true;
        }
            
        if (integerMode)
        {
            int value1 = operand1.as<int>();
            int value2 = operand2.as<int>();
            
            if (op == "*") operand1 = value1*value2;
            
            else if ((op == "div") || (op == "/") || (op == ("mod")))
            {
                // Check for division by zero.
                if (value2 == 0)
                {
                    error.flag(DIVISION_BY_ZERO, factorCtx2);
                    operand1 = 0;
                }

                if (op == "div")
                {
                    operand1 = value1/value2;
                }
                else if (op == "/")
                {
                    double doubleValue = value1;
                    operand1 = doubleValue/value2;
                }
                else  // mod
                {
                    operand1 = value1 % value2;
                }
            }
        }
        else if (realMode)
        {
            double value1 = type1 == Predefined::integerType
                    ? operand1.as<int>() : operand1.as<double>();
            double value2 = type2 == Predefined::integerType
                    ? operand2.as<int>() : operand2.as<double>();

            if (op == "*") operand1 = value1*value2;

            else if (op == "/")
            {
                // Check for division by zero.
                if (value2 == 0)
                {
                    error.flag(DIVISION_BY_ZERO, factorCtx2);
                    operand1 = 0;
                }
                else operand1 = value1/value2;
            }
        }
        else  // booleanMode
        {
           operand1 = operand1.as<bool>() && operand2.as<bool>();
        }
    }

    return operand1;
}

Object Executor::visitVariableFactor(goParser::VariableFactorContext *ctx)
{
    goParser::VariableContext *varCtx = ctx->variable();
    Kind kind = varCtx->entry->getKind();

    // Obtain a constant's value from its symbol table entry.
    if ((kind == CONSTANT) || (kind == ENUMERATION_CONSTANT))
    {
        Object value = varCtx->entry->getValue();

        if (varCtx->type == Predefined::booleanType)
        {
            value = value.as<int>() != 0;
        }

        return value;
    }

    // Obtain a variable's value from its memory cell.
    else
    {
        Cell *variableCell = visit(varCtx).as<Cell *>();

        Object value = variableCell->getValue();

        if (ctx->type == Predefined::stringType) return *(value.as<string *>());
        else                                     return value;
    }
}

Object Executor::visitVariable(goParser::VariableContext *ctx)
{
    SymtabEntry *variableId = ctx->entry;
    string variableName = variableId->getName();
    Typespec *variableType = variableId->getType();
    int nestingLevel = variableId->getSymtab()->getNestingLevel();

    // Get the variable reference from the appropriate activation record.
    StackFrame *frame = runtimeStack.getTopmost(nestingLevel);
    Cell *variableCell = frame->getCell(variableName);

    // Execute any array subscripts or record fields.
    for (goParser::ModifierContext *modCtx : ctx->modifier())
    {
        // Subscripts.
        if (modCtx->indexList() != nullptr)
        {
            // Compute a new reference for each subscript.
            for (goParser::IndexContext *indexCtx :
                                                modCtx->indexList()->index())
            {
                Typespec *indexType = variableType->getArrayIndexType();
                int minIndex = 0;

                if (indexType->getForm() == SUBRANGE)
                {
                    minIndex = indexType->getSubrangeMinValue();
                }

                int value = visit(indexCtx->expression()).as<int>();
                int index = value - minIndex;

                vector<Cell *> *array =
                                variableCell->getValue().as<vector<Cell *>*>();
                variableCell = (*array)[index];
                variableType = variableType->getArrayElementType();
            }
        }

        // Record field.
        else
        {
            SymtabEntry *fieldId = modCtx->field()->entry;
            string fieldName = fieldId->getName();

            // Compute a new reference for the field.
            Object cellValue = variableCell->getValue();
            MemoryMap *mmap = cellValue.as<MemoryMap *>();
            variableCell = mmap->getCell(fieldName);
            variableType = fieldId->getType();
        }
    }

    return variableCell;
}

Object Executor::visitNumberFactor(goParser::NumberFactorContext *ctx)
{
    Typespec *type = ctx->type;

    if (type == Predefined::integerType)
    {
        return stoi(ctx->getText());
    }
    else  // double
    {
        return stod(ctx->getText());
    }
}

Object Executor::visitCharacterFactor(goParser::CharacterFactorContext *ctx)
{
    return ctx->getText()[1];
}

Object Executor::visitStringFactor(goParser::StringFactorContext *ctx)
{
    string goString = ctx->stringConstant()->STRING()->getText();
    return convertString(goString, false);
}

Object Executor::visitFunctionCallFactor(
                                goParser::FunctionCallFactorContext *ctx)
{
    goParser::FunctionCallContext *callCtx = ctx->functionCall();
    SymtabEntry *routineId = callCtx->functionName()->entry;
    goParser::ArgumentListContext *argListCtx = callCtx->argumentList();
    StackFrame *newFrame = new StackFrame(routineId);
    
    // Execute any call arguments and initialize
    // the parameters in the routine's new stack frame.
    if (argListCtx != nullptr)
    {
        vector<SymtabEntry *> *parms = routineId->getRoutineParameters();
        executeCallArguments(argListCtx, parms, newFrame);
    }

    // Push the routine's stack frame onto the runtime stack
    // and execute the procedure.
    runtimeStack.push(newFrame);

    // Execute the routine.
//    Object *stmtObj = routineId->getExecutable();
//    goParser::CompoundStatementContext *stmtCtx =
//    				(*stmtObj).as<goParser::CompoundStatementContext *>();
    Object stmtObj = routineId->getExecutable();
    goParser::CompoundStatementContext *stmtCtx =
                    stmtObj.as<goParser::CompoundStatementContext *>();
    visit(stmtCtx);

    // Get the function value from its associated variable.
    string functionName = routineId->getName();
    Cell *valueCell = newFrame->getCell(functionName);
    Object functionValue  = valueCell->getValue();

    // Pop off the routine's stack frame.
    runtimeStack.pop();

    return functionValue;
}

Object Executor::visitNotFactor(goParser::NotFactorContext *ctx)
{
    bool value = visit(ctx->factor()).as<bool>();
    return !value;
}

Object Executor::visitParenthesizedFactor(
                                goParser::ParenthesizedFactorContext *ctx)
{
    return visit(ctx->expression());
}

Object Executor::visitWritelnStatement(goParser::WritelnStatementContext *ctx)
{
    visitChildren(ctx);
    cout << endl;

    return nullptr;
}

Object Executor::visitWriteArguments(goParser::WriteArgumentsContext *ctx)
{
    // Loop over each argument.
    for (goParser::WriteArgumentContext *argCtx : ctx->writeArgument())
    {
        Typespec *type = argCtx->expression()->type;
        string argText = argCtx->getText();

        // Print any literal strings.
        if (argText[0] == '\'')
        {
            cout << convertString(argText, false);
        }
        
        // For any other expression, print its value with a format specifier.
        else
        {
            Object value = visit(argCtx->expression());
            string format("%");
            
            // Create the format string.
            goParser::FieldWidthContext *fwCtx = argCtx->fieldWidth();
            if (fwCtx != nullptr)
            {
                string sign = (   (fwCtx->sign() != nullptr)
                               && (fwCtx->sign()->getText() == "-"))
                            ? "-" : "";
                format += sign + fwCtx->integerConstant()->getText();
                
                goParser::DecimalPlacesContext *dpCtx =
                                                    fwCtx->decimalPlaces();
                if (dpCtx != nullptr)
                {
                    format += "." + dpCtx->integerConstant()->getText();
                }
            }
            
            // Use the format string with printf.
            if (type == Predefined::integerType)
            {
                format += "d";
                printf(format.c_str(), value.as<int>());
            }
            else if (type == Predefined::realType)
            {
                format += "f";
                printf(format.c_str(), value.as<double>());
            }
            else if (type == Predefined::booleanType)
            {
                format += "d";
                printf(format.c_str(), value.as<bool>());
            }
            else if (type == Predefined::charType)
            {
                format += "c";
                printf(format.c_str(), value.as<char>());
            }
            else  // string
            {
                format += "s";
                string text = value.as<string>();
                printf(format.c_str(), text.c_str());
            }
        }
    }

    return nullptr;
}

/*Object Executor::visitReadlnStatement(goParser::ReadlnStatementContext *ctx)
{
    visitChildren(ctx);
    cin.ignore(4096, '\n');

    return nullptr;
}

Object Executor::visitReadArguments(goParser::ReadArgumentsContext *ctx)
{
    int size = ctx->variable().size();

    // Loop over read arguments.
    for (int i = 0; i < size; i++)
    {
        goParser::VariableContext *varCtx = ctx->variable()[i];
        Typespec *varType = varCtx->type;
        
        if (varType == Predefined::integerType)
        {
            int value;
            cin >> value;
            assignValue(varCtx, value, Predefined::integerType);
        }
        else if (varType == Predefined::realType)
        {
            double value;
            cin >> value;
            assignValue(varCtx, value, Predefined::realType);
        }
        else if (varType == Predefined::booleanType)
        {
            bool value;
            cin >> boolalpha >> value;
            assignValue(varCtx, value, Predefined::booleanType);
        }
        else if (varType == Predefined::charType)
        {
            char value = getchar();
            assignValue(varCtx, value, Predefined::charType);
        }
        else  // string
        {
            string value;
            cin >> value;
            assignValue(varCtx, value, Predefined::stringType);
        }
    }

    return nullptr;
}*/

}} // namespace backend::converter
