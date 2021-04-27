#include "goBaseVisitor.h"
#include "antlr4-runtime.h"

#include "../../Object.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/type/Typespec.h"
#include "Converter.h"

namespace backend { namespace converter {

Object Converter::visitProgram(goParser::ProgramContext *ctx)
{
    visit(ctx->programHeader());

    // Level 1 declarations.
    visit(ctx->block()->declarations());

    // Main.
    code.emitLine();
    code.emitLine("int main(int argc, char *args[])");
    code.emitLine("{");
    code.indent();

    // Execution timer.
    code.emitLine("auto _start = steady_clock::now();");
    code.emitLine();

    // Main compound statement.
    visit(ctx->block()->compoundStatement()->statementList());

    // Print the execution time.
    code.emitLine();
    code.emitLine("auto _end = steady_clock::now();");
    code.emitStart("long _elapsed = duration_cast<milliseconds>");
    code.emitEnd("(_end - _start).count();");
    code.emitLine(string("printf(\"\\n[%ld milliseconds execution time.]") +
                  string("\\n\", _elapsed);"));

    code.dedent();
    code.emitLine("}");

    code.close();
    return nullptr;
}

Object Converter::visitProgramHeader(goParser::ProgramHeaderContext *ctx)
{
    string programName = ctx->programIdentifier()->IDENTIFIER()->getText();
    code.open(programName, "cpp");

    code.emitLine("#include <iostream>");
    code.emitLine("#include <iomanip>");
    code.emitLine("#include <chrono>");
    code.emitLine("#include <string>");
    code.emitLine();
    code.emitLine("using namespace std;");
    code.emitLine("using namespace std::chrono;");
    code.emitLine();

    return nullptr;
}

Object Converter::visitConstantDefinition(
                                goParser::ConstantDefinitionContext *ctx)
{
    goParser::ConstantIdentifierContext *idCtx = ctx->constantIdentifier();
    goParser::ConstantContext *constCtx = ctx->constant();
    string constantName = idCtx->entry->getName();
    Typespec *type = constCtx->type;
    string goTypeName = type->getIdentifier()->getName();
    string cppTypeName = typeNameTable[goTypeName];

    code.emitStart();
    code.emitEnd("const " + cppTypeName + " " + constantName + " = "
                          + constCtx->getText() + ";");

    return nullptr;
}

Object Converter::visitTypeDefinition(goParser::TypeDefinitionContext *ctx)
{
    goParser::TypeIdentifierContext *idCtx = ctx->typeIdentifier();
    string typeName = idCtx->entry->getName();
    goParser::TypeSpecificationContext *typeCtx = ctx->typeSpecification();
    Form form = typeCtx->type->getForm();

    if (form == ENUMERATION)
    {
        code.emitStart();
        code.emit("enum class " + typeName);
        visit(typeCtx);
    }
    else if (form == RECORD)
    {
        code.emitStart();
        code.emitEnd("struct " + typeName);
        code.emitLine("{");
        code.indent();

        emitUnnamedRecordDefinitions(typeCtx->type->getRecordSymtab());
        visit(typeCtx);

        code.dedent();
        code.emitLine("};");
        code.emitLine();
    }

    return nullptr;
}

Object Converter::visitEnumerationTypespec(
                                goParser::EnumerationTypespecContext *ctx)
{
    string separator = " {";

    for (goParser::EnumerationConstantContext *constCtx :
                                ctx->enumerationType()->enumerationConstant())
    {
        code.emit(separator + constCtx->constantIdentifier()->entry->getName());
        separator = ", ";
    }

    code.emitEnd("};");
    return nullptr;
}

void Converter::emitUnnamedRecordDefinitions(Symtab *symtab)
{
    // Loop to look for names of unnamed record types.
    for (SymtabEntry *id : symtab->sortedEntries())
    {
        if (   (id->getKind() == TYPE)
            && (id->getType()->getForm() == RECORD)
            && (id->getName().length() >= UNNAMED_PREFIX_LENGTH)
            && (id->getName().substr(0, UNNAMED_PREFIX_LENGTH) == UNNAMED_PREFIX))
        {
            code.emitStart();
            code.emitEnd("struct " + id->getName());
            code.emitLine("{");
            code.indent();
            emitRecordFields(id->getType()->getRecordSymtab());
            code.dedent();
            code.emitLine("};");
            code.emitLine();
        }
    }
}

/**
 * Emit the record fields of a record.
 * @param symtab the symbol table of the unnamed record.
 */
void Converter::emitRecordFields(Symtab *symtab)
{
    emitUnnamedRecordDefinitions(symtab);

    // Loop over the entries of the symbol table.
    for (SymtabEntry *fieldId : symtab->sortedEntries())
    {
        if (fieldId->getKind() == RECORD_FIELD)
        {
            code.emitStart(typeName(fieldId->getType()));
            code.emit(" " + fieldId->getName());
            code.emitEnd(";");
        }
    }
}

Object Converter::visitRecordTypespec(goParser::RecordTypespecContext *ctx)
{
    goParser::RecordFieldsContext *fieldsCtx =
                                            ctx->recordType()->recordFields();
    recordFields = true;
    visit(fieldsCtx->variableDeclarationsList());
    recordFields = false;

    return nullptr;
}

Object Converter::visitVariableDeclarations(
                                goParser::VariableDeclarationsContext *ctx)
{
    goParser::TypeSpecificationContext *typeCtx = ctx->typeSpecification();
    goParser::VariableIdentifierListContext *listCtx =
                                                ctx->variableIdentifierList();

    for (goParser::VariableIdentifierContext *varCtx :
                                                listCtx->variableIdentifier())
    {
        code.emitStart();
        code.emit(typeName(typeCtx->type));

        code.emit(" " + varCtx->entry->getName());
        if (typeCtx->type->getForm() == ARRAY) emitArrayDimensions(typeCtx->type);
        code.emitEnd(";");
    }

    return nullptr;
}

void Converter::emitArrayDimensions(Typespec *type)
{
    string sizes = "";

    while (type->getForm() == ARRAY)
    {
        sizes += "[" + to_string(type->getArrayElementCount()) + "]";
        type = type->getArrayElementType();
    }

    code.emit(sizes);
}

string Converter::typeName(Typespec *goType)
{
    Form form = goType->getForm();
    SymtabEntry *typeId = goType->getIdentifier();
    string goTypeName = typeId != nullptr ? typeId->getName() : "";

    if (form == ARRAY)
    {
        Typespec *elmtType = goType->getArrayBaseType();
        goTypeName = elmtType->getIdentifier()->getName();
        return mapTypeName(goTypeName);
    }
    else if (form == SUBRANGE)
    {
        Typespec *baseType = goType->baseType();
        goTypeName = baseType->getIdentifier()->getName();
        return mapTypeName(goTypeName);
    }
    else if (form == ENUMERATION)
    {
        return goType == Predefined::booleanType ? "bool" : goTypeName;
    }
    else if (form == RECORD) return goTypeName;
    else                     return mapTypeName(goTypeName);
}

string Converter::mapTypeName(string goTypeName)
{
    return typeNameTable.find(goTypeName) != typeNameTable.end()
                            ? typeNameTable[goTypeName] : goTypeName;
}

Object Converter::visitTypeIdentifier(goParser::TypeIdentifierContext *ctx)
{
    Typespec *goType = ctx->type;
    string javaTypeName = typeName(goType);
    code.emit(javaTypeName);

    return nullptr;
}

Object Converter::visitVariableIdentifierList(
                             goParser::VariableIdentifierListContext *ctx)
{
    string separator = " ";

    for (goParser::VariableIdentifierContext *varCtx :
                                                    ctx->variableIdentifier())
    {
        code.emit(separator);
        code.emit(varCtx->getText());
        separator = ", ";
    }

    return nullptr;
}

Object Converter::visitRoutineDefinition(
                                    goParser::RoutineDefinitionContext *ctx)
{
    goParser::FunctionHeadContext  *funcCtx  = ctx->functionHead();
    //goParser::ProcedureHeadContext *procCtx  = ctx->procedureHead();
    goParser::RoutineIdentifierContext *idCtx = nullptr;
    goParser::ParametersContext *parmsCtx = nullptr;
    bool functionDefinition = funcCtx != nullptr;
    string routineName;

    programVariables = false;
    code.emitLine();
    code.emitStart();

    if (functionDefinition)
    {
        idCtx = funcCtx->routineIdentifier();
        parmsCtx = funcCtx->parameters();
        visit(funcCtx->typeIdentifier());
    }
    /*else
    {
        idCtx = procCtx->routineIdentifier();
        parmsCtx = procCtx->parameters();
        code.emit("void");
    }*/

    routineName = idCtx->entry->getName();
    code.emit(" " + routineName);

    code.emit("(");
    if (parmsCtx != nullptr) visit(parmsCtx);
    code.emitEnd(")");
    code.emitLine("{");
    code.indent();

    if (functionDefinition)
    {
        // Function associated variable.
        code.emitStart();
        visit(funcCtx->typeIdentifier());
        code.emit(" " + routineName + ";");
        code.emitLine();
    }

    visit(ctx->block()->declarations());
    visit(ctx->block()->compoundStatement()->statementList());

    if (functionDefinition)
    {
        // Return function value.
        code.emitLine();
        code.emitLine("return " + routineName + ";");
    }

    code.dedent();
    code.emitLine("}");

    return nullptr;
}

Object Converter::visitParameters(goParser::ParametersContext *ctx)
{
    currentSeparator = "";

    code.mark();
    visit(ctx->parameterDeclarationsList());

    return nullptr;
}

Object Converter::visitParameterDeclarations(
                                goParser::ParameterDeclarationsContext *ctx)
{
    bool varParm = ctx->VAR() != nullptr;
    goParser::ParameterIdentifierListContext *parmListCtx =
                                                ctx->parameterIdentifierList();
    goParser::TypeIdentifierContext *typeCtx = ctx->typeIdentifier();
    Typespec *parmType = typeCtx->type;

    // Loop over the parameters.
    for (goParser::ParameterIdentifierContext *parmIdCtx :
                                            parmListCtx->parameterIdentifier())
    {
        code.emit(currentSeparator);
        code.split(60);

        visit(typeCtx);
        if (varParm && (typeCtx->type->getForm() != ARRAY)) code.emit("&");
        code.emit(" " + parmIdCtx->entry->getName());

        if (parmType->getForm() == ARRAY) emitArrayDimensions(parmType);
        currentSeparator = ", ";
    }

    return nullptr;
}

Object Converter::visitStatementList(goParser::StatementListContext *ctx)
{
    for (goParser::StatementContext *stmtCtx : ctx->statement())
    {
        if (stmtCtx->emptyStatement() == nullptr)
        {
            code.emitStart();
            visit(stmtCtx);
        }
    }

    return nullptr;
}

Object Converter::visitCompoundStatement(
                                    goParser::CompoundStatementContext *ctx)
{
    code.emit("{");
    code.indent();
    visitChildren(ctx);
    code.dedent();
    code.emitLine("}");

    return nullptr;
}

Object Converter::visitAssignmentStatement(
                                goParser::AssignmentStatementContext *ctx)
{
    string lhs  = visit(ctx->lhs()->variable()).as<string>();
    string expr = visit(ctx->rhs()->expression()).as<string>();
    code.emit(lhs + " = " + expr);
    code.emitEnd(";");

    return nullptr;
}

Object Converter::visitIfStatement(goParser::IfStatementContext *ctx)
{
    goParser::TrueStatementContext  *trueCtx  = ctx->trueStatement();
    goParser::FalseStatementContext *falseCtx = ctx->falseStatement();

    code.emit("if (");
    code.emit(visit(ctx->expression()).as<string>());
    code.emit(") ");

    bool trueIf = trueCtx->statement()->ifStatement() != nullptr;
    bool trueCompound = trueCtx->statement()->compoundStatement() != nullptr;

    if (!trueIf)
    {
        if (!trueCompound) code.indent();
        code.emitStart();
    }

    visit(trueCtx);
    if (!(trueIf || trueCompound)) code.dedent();

    if (falseCtx != nullptr)
    {
        code.emitStart("else ");

        bool falseIf = falseCtx->statement()->ifStatement() != nullptr;
        bool falseCompound =
                        falseCtx->statement()->compoundStatement() != nullptr;

        if (!falseIf)
        {
            if (!falseCompound) code.indent();
            code.emitStart();
        }

        visit(falseCtx);
        if (!(falseIf || falseCompound)) code.dedent();
    }

    return nullptr;
}

Object Converter::visitCaseStatement(goParser::CaseStatementContext *ctx)
{
    code.emit("switch (" + visit(ctx->expression()).as<string>() + ")");
    code.emitLine("{");

    if (ctx->caseBranchList() != nullptr)
    {
        code.indent();
        visit(ctx->caseBranchList());
        code.dedent();
    }

    code.emitLine("}");
    return nullptr;
}

Object Converter::visitCaseBranch(goParser::CaseBranchContext *ctx)
{
    /*goParser::CaseConstantListContext *listCtx = ctx->caseConstantList();

    if (listCtx != nullptr)
    {
        // Loop over this branch's constants.
        for (goParser::CaseConstantContext *constCtx :
                                                        listCtx->caseConstant())
        {
            code.emitStart("case ");
            Typespec *constType = constCtx->type;

            if (constType->getForm() == ENUMERATION)
            {
                code.emit(constType->getIdentifier()->getName() + "::");
            }

            code.emit(toLowerCase(constCtx->getText()) + ":");
        }

        code.indent();
        code.emitStart();
        visit(ctx->statement());
        code.emitLine("break;");
        code.dedent();
    }*/

    return nullptr;
}

/*Object Converter::visitRepeatStatement(goParser::RepeatStatementContext *ctx)
{
    bool needBraces = ctx->statementList()->statement().size() > 1;

    code.emit("do");
    if (needBraces) code.emitLine("{");
    code.indent();

    visit(ctx->statementList());

    code.dedent();
    if (needBraces) code.emitLine("}");

    code.emitStart("while (!(");
    code.emit(visit(ctx->expression()).as<string>());
    code.emitEnd("));");

    return nullptr;
}*/

Object Converter::visitWhileStatement(goParser::WhileStatementContext *ctx)
{
    bool compound = ctx->statement()->compoundStatement() != nullptr;

    code.emit("while (");
    code.emit(visit(ctx->expression()).as<string>());
    code.emit(") ");

    if (compound) code.emitStart();
    visit(ctx->statement());

    return nullptr;
}

Object Converter::visitForStatement(goParser::ForStatementContext *ctx)
{
    bool like_while = ctx->whileStatement() == nullptr;
    if(!like_while)
    {
    	visit(ctx->whileStatement());
    	return nullptr;
    }
	/*goParser::VariableContext *controlCtx = ctx->variable();
    bool compound = ctx->statement()->compoundStatement() != nullptr;
    //bool to = ctx->TO() != nullptr;

    string controlName = controlCtx->entry->getName();
    string exprText = visit(ctx->expression()[0]).as<string>();

    // Initialize the control variable.
    code.emit("for (" + controlName + " = " + exprText + "; ");

    // Test the control variable.
    code.emit(controlName);
    code.emit(to ? " <= " : " >= ");
    exprText = visit(ctx->expression()[1]).as<string>();
    code.emit(exprText + "; ");

    // Increment or decrement the control variable.
    code.emit(controlName);
    code.emit(to ? "++) " : "--) ");

    // Statement.
    if (compound) code.emitStart();
    visit(ctx->statement());
	*/
    return nullptr;
}

/*Object Converter::visitProcedureCallStatement(
                                goParser::ProcedureCallStatementContext *ctx)
{
    goParser::ProcedureNameContext *procNameCtx = ctx->procedureName();
    string procedureName = procNameCtx->entry->getName();

    code.emit(procedureName);
    code.emit("(");

    if (ctx->argumentList() != nullptr)
    {
        code.emit(visit(ctx->argumentList()).as<string>());
    }

    code.emitEnd(");");
    return nullptr;
}*/

Object Converter::visitArgumentList(goParser::ArgumentListContext *ctx)
{
    string text = "";
    string separator = "";

    for (goParser::ArgumentContext *argCtx : ctx->argument())
    {
        text += separator;
        text += visit(argCtx->expression()).as<string>();
        separator = ", ";
    }

    return text;
}

Object Converter::visitExpression(goParser::ExpressionContext *ctx)
{
    goParser::SimpleExpressionContext *simpleCtx1 =
                                                    ctx->simpleExpression()[0];
    goParser::RelOpContext *relopCtx = ctx->relOp();
    string simpleText1 = visit(simpleCtx1);
    string text = simpleText1;

    // Second simple expression?
    if (relopCtx != nullptr)
    {
        string op = relopCtx->getText();

        if      (op == "=")  op = "==";
        else if (op == "<>") op = "!=";

        goParser::SimpleExpressionContext *simpleCtx2 =
                                                    ctx->simpleExpression()[1];
        string simpleText2 = visit(simpleCtx2);
        text = simpleText1 + " " + op + " " + simpleText2;
    }

    return text;
}

Object Converter::visitSimpleExpression(
                                    goParser::SimpleExpressionContext *ctx)
{
    int count = ctx->term().size();
    string text = "";
    bool needParens = false;  // surround "or" terms with parentheses

    if ((ctx->sign() != nullptr) && (ctx->sign()->getText() == "-")) text += "-";

    // Loop over the simple expressions.
    for (int i = 0; i < count; i++)
    {
        goParser::TermContext *termCtx = ctx->term()[i];
        string termText = visit(termCtx);

        if (i < count-1)
        {
            string addop = toLowerCase(ctx->addOp()[i]->getText());
            if (addop == "or")
            {
                addop = "||";
                needParens = true;
            }

            if (needParens) text += "(" + termText + ") " + addop + " ";
            else            text += termText + " " + addop + " ";
        }
        else if (needParens) text += "(" + termText + ") ";
        else                 text += termText;
    }

    return text;
}

Object Converter::visitTerm(goParser::TermContext *ctx)
{
    int count = ctx->factor().size();
    string text = "";

    for (int i = 0; i < count; i++)
    {
        goParser::FactorContext *factorCtx = ctx->factor()[i];
        text += visit(factorCtx).as<string>();

        if (i < count-1)
        {
            string mulop = toLowerCase(ctx->mulOp()[i]->getText());
            if      (mulop == "and") mulop = " && ";
            else if (mulop == "div") mulop = "/";
            else if (mulop == "mod") mulop = "%";

            text = text += mulop;
        }
    }

    return text;
}

Object Converter::visitVariableFactor(goParser::VariableFactorContext *ctx)
{
    return visit(ctx->variable()).as<string>();
}

Object Converter::visitVariable(goParser::VariableContext *ctx)
{
    goParser::VariableIdentifierContext *idCtx = ctx->variableIdentifier();
    SymtabEntry *variableId = idCtx->entry;
    string variableName = variableId->getName();
    Typespec *type = ctx->variableIdentifier()->type;

    if (    (type != Predefined::booleanType)
         && (variableId->getKind() == ENUMERATION_CONSTANT))
    {
        variableName = type->getIdentifier()->getName() + "::" + variableName;
    }

    // Loop over any subscript and field modifiers.
    for (goParser::ModifierContext *modCtx : ctx->modifier())
    {
        // Subscripts.
        if (modCtx->indexList() != nullptr)
        {
            for (goParser::IndexContext *indexCtx :
                                                modCtx->indexList()->index())
            {
                Typespec *indexType = type->getArrayIndexType();
                int minIndex = 0;

                if (indexType->getForm() == SUBRANGE)
                {
                    minIndex = indexType->getSubrangeMinValue();
                }

                goParser::ExpressionContext *exprCtx =
                                                    indexCtx->expression();
                string expr = visit(exprCtx).as<string>();
                string subscript =
                  (minIndex == 0) ? expr
                : (minIndex < 0)  ? "(" + expr + ")+" + to_string(-minIndex)
                :                   "(" + expr + ")-" + to_string(minIndex);

                variableName += "[" + subscript + "]";

                type = type->getArrayElementType();
            }
        }
        else // Record field.
        {
            goParser::FieldContext *fieldCtx = modCtx->field();
            string fieldName = fieldCtx->entry->getName();
            variableName += "." + fieldName;
            type = fieldCtx->type;
        }
    }

    return variableName;
}

Object Converter::visitNumberFactor(goParser::NumberFactorContext *ctx)
{
    return ctx->getText();
}

Object Converter::visitCharacterFactor(goParser::CharacterFactorContext *ctx)
{
    return ctx->getText();
}

Object Converter::visitStringFactor(goParser::StringFactorContext *ctx)
{
    string goString = ctx->stringConstant()->STRING()->getText();
    return "string(\"" + convertString(goString, true) + "\")";
}

Object Converter::visitFunctionCallFactor(
                                goParser::FunctionCallFactorContext *ctx)
{
    goParser::FunctionCallContext *callCtx = ctx->functionCall();
    goParser::FunctionNameContext *funcNameCtx = callCtx->functionName();
    string functionName = funcNameCtx->entry->getName();

    string text = functionName + "(";

    if (callCtx->argumentList() != nullptr)
    {
        text += visit(callCtx->argumentList()).as<string>();
    }

    return text += ")";
}

Object Converter::visitNotFactor(goParser::NotFactorContext *ctx)
{
    return "!" + visit(ctx->factor()).as<string>();
}

Object Converter::visitParenthesizedFactor(
                                goParser::ParenthesizedFactorContext *ctx)
{
    return "(" + visit(ctx->expression()).as<string>() + ")";
}

Object Converter::visitWriteStatement(goParser::WriteStatementContext *ctx)
{
    code.emit("printf(");
    code.mark();

    string format    = createWriteFormat(ctx->writeArguments());
    string arguments = createWriteArguments(ctx->writeArguments());

    code.emit("\"" + format + "\"");

    if (arguments.length() > 0)
    {
        code.emit(", ");
        code.split(60);
        code.emit(arguments);
    }

    code.emitEnd(");");
    return nullptr;
}

Object Converter::visitWritelnStatement(
                                    goParser::WritelnStatementContext *ctx)
{
    if (ctx->writeArguments() != nullptr)
    {
        code.emit("printf(");
        code.mark();

        string format    = createWriteFormat(ctx->writeArguments());
        string arguments = createWriteArguments(ctx->writeArguments());

        code.emit("\"" + format + "\\n\"");  // append line feed

        if (arguments.length() > 0)
        {
            code.emit(", ");
            code.split(60);
            code.emit(arguments);
        }

        code.emitEnd(");");
    }
    else
    {
        code.emit("cout << endl;");
    }

    return nullptr;
}

string Converter::createWriteFormat(goParser::WriteArgumentsContext *ctx)
{
    string format = "";

    // Loop over the write arguments.
    for (goParser::WriteArgumentContext *argCtx : ctx->writeArgument())
    {
        Typespec *type = argCtx->expression()->type;
        string argText = argCtx->getText();

        // Append any literal strings.
        if (argText[0] == '\'')
        {
            format += convertString(argText, true);
        }

        // For any other expressions, append a field specifier.
        else
        {
            format += "%";

            goParser::FieldWidthContext *fwCtx = argCtx->fieldWidth();
            if (fwCtx != nullptr)
            {
                string sign = (   (fwCtx->sign() != nullptr)
                               && (fwCtx->sign()->getText() == "-")) ? "-" : "";
                format += sign + fwCtx->integerConstant()->getText();

                goParser::DecimalPlacesContext *dpCtx = fwCtx->decimalPlaces();
                if (dpCtx != nullptr)
                {
                    format += "." + dpCtx->integerConstant()->getText();
                }
            }

            string typeFlag = type == Predefined::integerType ? "d"
                            : type == Predefined::realType    ? "f"
                            : type == Predefined::charType    ? "c"
                            : type == Predefined::booleanType ? "d"
                            :                                   "s";
            format += typeFlag;
        }
    }

    return format;
}

string Converter::createWriteArguments(goParser::WriteArgumentsContext *ctx)
{
    string arguments = "";
    string separator = "";

    // Loop over the write arguments.
    for (goParser::WriteArgumentContext *argCtx : ctx->writeArgument())
    {
        string argText = argCtx->getText();

        // Not a literal string.
        if (argText[0] != '\'')
        {
            string arg = visit(argCtx->expression()).as<string>();

            if (argCtx->expression()->type == Predefined::stringType)
            {
                arguments += separator + "(" + arg + ")" + ".c_str()";
            }
            else
            {
                arguments += separator + arg;
            }

            separator = ", ";
        }
    }

    return arguments;
}

/*Object Converter::visitReadStatement(goParser::ReadStatementContext *ctx)
{
    if (ctx->readArguments()->variable().size() == 1)
    {
        visit(ctx->readArguments());
    }
    else
    {
        code.emit("{");
        code.indent();
        code.emitStart();

        visit(ctx->readArguments());

        code.dedent();
        code.emitLine("}");
    }
    return nullptr;
}*/

/*Object Converter::visitReadlnStatement(goParser::ReadlnStatementContext *ctx)
{
    code.emit("{");
    code.indent();
    code.emitStart();

    visit(ctx->readArguments());
    code.emitLine("cin.ignore(4096, '\\n');");

    code.dedent();
    code.emitLine("}");

    return nullptr;
}*/

/*Object Converter::visitReadArguments(goParser::ReadArgumentsContext *ctx)
{
    int size = ctx->variable().size();

    for (int i = 0; i < size; i++)
    {
        goParser::VariableContext *varCtx = ctx->variable()[i];
        string varName = varCtx->getText();
        Typespec *type = varCtx->type;

        if (type == Predefined::charType)
        {
            code.emit(varName + " = getchar();");
        }
        else if (type == Predefined::booleanType)
        {
            code.emit("cin >> boolalpha >> " + varName + ";");
        }
        else
        {
            code.emit("cin >> " + varName + ";");
        }

        if (i < size-1) code.emitStart();
    }

    return nullptr;
}*/

}} // namespace backend::converter
