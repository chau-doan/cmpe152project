#include <string>
#include <vector>
#include <map>
#include <algorithm>

#include "goBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/Predefined.h"
#include "Compiler.h"
#include "StatementGenerator.h"

namespace backend { namespace compiler {

using namespace std;
using namespace intermediate;

void StatementGenerator::emitAssignment(goParser::AssignmentStatementContext *ctx)
{
    goParser::VariableContext *varCtx  = ctx->lhs()->variable();
    goParser::ExpressionContext *exprCtx = ctx->rhs()->expression();
    SymtabEntry *varId = varCtx->entry;
    Typespec *varType  = varCtx->type;
    Typespec *exprType = exprCtx->type;

    // The last modifier, if any, is the variable's last subscript or field.
    int modifierCount = varCtx->modifier().size();
    goParser::ModifierContext *lastModCtx = modifierCount == 0
                            ? nullptr : varCtx->modifier()[modifierCount - 1];

    // The target variable has subscripts and/or fields.
    if (modifierCount > 0)
    {
        lastModCtx = varCtx->modifier()[modifierCount - 1];
        compiler->visit(varCtx);
    }

    // Emit code to evaluate the expression.
    compiler->visit(exprCtx);

    // float variable := integer constant
    if (   (varType == Predefined::realType)
        && (exprType->baseType() == Predefined::integerType)) emit(I2F);

    // Emit code to store the expression value into the target variable.
    // The target variable has no subscripts or fields.
    if (lastModCtx == nullptr) emitStoreValue(varId, varId->getType());

    // The target variable is a field.
    else if (lastModCtx->field() != nullptr)
    {
        emitStoreValue(lastModCtx->field()->entry, lastModCtx->field()->type);
    }

    // The target variable is an array element.
    else
    {
        emitStoreValue(nullptr, varType);
    }
}

void StatementGenerator::emitIf(goParser::IfStatementContext *ctx)
{
    /***** Complete this member function. *****/
	goParser::TrueStatementContext  *trueCtx  = ctx->trueStatement();
	goParser::FalseStatementContext *falseCtx = ctx->falseStatement();
	Label *nextlabel = new Label();
	Label *falselabel = new Label();

	compiler->visit(ctx->expression());
	emit(IFEQ,falselabel);

	compiler->visit(trueCtx);
	emit(GOTO,nextlabel);
	emitLabel(falselabel);
	if(falseCtx != nullptr)
	{
		compiler->visit(falseCtx);
	}
	emitLabel(nextlabel);
}

void StatementGenerator::emitCase(goParser::CaseStatementContext *ctx)
{
	goParser::CaseBranchListContext *BranchList = ctx->caseBranchList();
	Label *statement = new Label[BranchList->caseBranch().size()-1];
	Label *nextLabel = new Label();
	compiler->visit(ctx->expression());
	//emitLoadLocal(ctx->expression()->type, 0);
	emit(LOOKUPSWITCH);
	vector<int>a;
	for(int i = 0; i < BranchList->caseBranch().size()-1; i++)
	{
		for(int j = 0; j < BranchList->caseBranch().at(i)->caseConstantList()->caseConstant().size(); j++)
		{
			//emitLabel(BranchList->caseBranch().at(i)->caseConstantList()->caseConstant().at(j)->getText(), &statement[i]);
			a.push_back(BranchList->caseBranch().at(i)->caseConstantList()->caseConstant().at(j)->value);
		}
	}
	sort(a.begin(),a.end());
	for(int k=0; k < a.size(); k++)
	{
		for(int i = 0; i < BranchList->caseBranch().size()-1; i++)
			{
				for(int j = 0; j < BranchList->caseBranch().at(i)->caseConstantList()->caseConstant().size(); j++)
				{
					if (a[k]==BranchList->caseBranch().at(i)->caseConstantList()->caseConstant().at(j)->value)
					{
						emitLabel(BranchList->caseBranch().at(i)->caseConstantList()->
								caseConstant().at(j)->value, &statement[i]);
					}
				}
			}
	}
	emitLabel("default", nextLabel);

	for(int i = 0; i < BranchList->caseBranch().size()-1; i++)
	{
		emitLabel(&statement[i]);
		compiler->visit(BranchList->caseBranch().at(i)->statement());
		emit(GOTO, nextLabel);
	}

	emitLabel(nextLabel);


}

/*void StatementGenerator::emitRepeat(goParser::RepeatStatementContext *ctx)
{
    Label *loopTopLabel  = new Label();
    Label *loopExitLabel = new Label();

    emitLabel(loopTopLabel);

    compiler->visit(ctx->statementList());
    compiler->visit(ctx->expression());
    emit(IFNE, loopExitLabel);
    emit(GOTO, loopTopLabel);

    emitLabel(loopExitLabel);
}*/

void StatementGenerator::emitWhile(goParser::WhileStatementContext *ctx)
{
    /***** Complete this member function. *****/
	goParser::StatementContext *stmtCtx = ctx->statement();
	Label *loopTopLabel = new Label();
	Label *loopExitLabel = new Label();
	emitLabel(loopTopLabel);
	compiler->visit(stmtCtx);
	compiler->visit(ctx->expression());
	emit(IFLE, loopExitLabel);
	emit(GOTO, loopTopLabel);

	emitLabel(loopExitLabel);
}

void StatementGenerator::emitFor(goParser::ForStatementContext *ctx)
{

	compiler->visit(ctx->expression().at(0));
	emitStoreValue(ctx->variable()->entry, ctx->variable()->type);
	//Load expression 0 to variable

	Label *loopTopLabel = new Label();
	Label *loopExitLabel = new Label();

	emitLabel(loopTopLabel);

	compiler->visit(ctx->variable());
	compiler->visit(ctx->expression().at(1));
	if(ctx->expression(1)->relOp()->getText() == ">=")
		emit(IF_ICMPGT, loopExitLabel);
	else
		emit(IF_ICMPLT, loopExitLabel);
	// if branch for To or downto
	compiler->visit(ctx->statement());

	compiler->visit(ctx->variable());
	emitLoadConstant(int(1));
	if(ctx->expression(1)->relOp()->getText() == "<=")
		emit(IADD);
	else
		emit(ISUB);
	emitStoreValue(ctx->variable()->entry, ctx->variable()->type);
	// add or subtract and store to variable
	emit(GOTO, loopTopLabel);

	emitLabel(loopExitLabel);
}

/*void StatementGenerator::emitProcedureCall(goParser::ProcedureCallStatementContext *ctx)
{

	int n = ctx->argumentList()->argument().size();
	compiler->visit(ctx->argumentList());
	string proc = ctx->procedureName()->getText();
	string header(programName + "/" + proc + "(");
	for (int i = 0; i < n; i++){
		header += typeDescriptor(ctx->argumentList()->argument(i)->expression()->type);
	}
	header += ")V" ;
	emit(INVOKESTATIC,header);

} */

void StatementGenerator::emitFunctionCall(goParser::FunctionCallContext *ctx)
{
    /***** Complete this member function. *****/
	compiler->visit(ctx->argumentList());
	string funcName = ctx->functionName()->getText();
	string header(programName + "/" + funcName + "(");
	for (int i = 0; i < ctx->argumentList()->argument().size(); i++){
			header += typeDescriptor(ctx->argumentList()->argument(i)->expression()->type);
		}
	header += ")" + typeDescriptor(ctx->functionName()->type);
	emit(INVOKESTATIC,header);
}

void StatementGenerator::emitCall(SymtabEntry *routineId,
                                  goParser::ArgumentListContext *argListCtx)
{
    /***** Complete this member function. *****/
}

void StatementGenerator::emitWrite(goParser::WriteStatementContext *ctx)
{
    emitWrite(ctx->writeArguments(), false);
}

void StatementGenerator::emitWriteln(goParser::WritelnStatementContext *ctx)
{
    emitWrite(ctx->writeArguments(), true);
}

void StatementGenerator::emitWrite(goParser::WriteArgumentsContext *argsCtx,
                      bool needLF)
{
    emit(GETSTATIC, "java/lang/System/out", "Ljava/io/PrintStream;");

    // WRITELN with no arguments.
    if (argsCtx == nullptr)
    {
        emit(INVOKEVIRTUAL, "java/io/PrintStream.println()V");
        localStack->decrease(1);
    }

    // Generate code for the arguments.
    else
    {
        string format;
        int exprCount = createWriteFormat(argsCtx, format, needLF);

        // Load the format string.
        emit(LDC, format);

        // Emit the arguments array.
       if (exprCount > 0)
        {
            emitArgumentsArray(argsCtx, exprCount);

            emit(INVOKEVIRTUAL,
                        string("java/io/PrintStream/printf(Ljava/lang/String;")
                      + string("[Ljava/lang/Object;)")
                      + string("Ljava/io/PrintStream;"));
            localStack->decrease(2);
            emit(POP);
        }
        else
        {
            emit(INVOKEVIRTUAL,
                 "java/io/PrintStream/print(Ljava/lang/String;)V");
            localStack->decrease(2);
        }
    }
}

int StatementGenerator::createWriteFormat(
                                goParser::WriteArgumentsContext *argsCtx,
                                string& format, bool needLF)
{
    int exprCount = 0;
    format += "\"";

    // Loop over the write arguments.
    for (goParser::WriteArgumentContext *argCtx : argsCtx->writeArgument())
    {
        Typespec *type = argCtx->expression()->type;
        string argText = argCtx->getText();

        // Append any literal strings.
        if (argText[0] == '\'') format += convertString(argText, true);

        // For any other expressions, append a field specifier.
        else
        {
            exprCount++;
            format.append("%");

            goParser::FieldWidthContext *fwCtx = argCtx->fieldWidth();
            if (fwCtx != nullptr)
            {
                string sign = (   (fwCtx->sign() != nullptr)
                               && (fwCtx->sign()->getText() == "-")) ? "-" : "";
                format += sign + fwCtx->integerConstant()->getText();

                goParser::DecimalPlacesContext *dpCtx =
                                                        fwCtx->decimalPlaces();
                if (dpCtx != nullptr)
                {
                    format += "." + dpCtx->integerConstant()->getText();
                }
            }

            string typeFlag = type == Predefined::integerType ? "d"
                            : type == Predefined::realType    ? "f"
                            : type == Predefined::booleanType ? "b"
                            : type == Predefined::charType    ? "c"
                            :                                  "s";
            format += typeFlag;
        }
    }

    format += needLF ? "\\n\"" : "\"";

    return exprCount;
}

void StatementGenerator::emitArgumentsArray(
                    goParser::WriteArgumentsContext *argsCtx, int exprCount)
{
    // Create the arguments array.
    emitLoadConstant(exprCount);
    emit(ANEWARRAY, "java/lang/Object");

    int index = 0;

    // Loop over the write arguments to fill the arguments array.
    for (goParser::WriteArgumentContext *argCtx :
                                                argsCtx->writeArgument())
    {
        string argText = argCtx->getText();
        goParser::ExpressionContext *exprCtx = argCtx->expression();
        Typespec *type = exprCtx->type->baseType();

        // Skip string constants, which were made part of
        // the format string.
        if (argText[0] != '\'')
        {
            emit(DUP);
            emitLoadConstant(index++);

            compiler->visit(exprCtx);

            Form form = type->getForm();
            if (    ((form == SCALAR) || (form == ENUMERATION))
                 && (type != Predefined::stringType))
            {
                emit(INVOKESTATIC, valueOfSignature(type));
            }

            // Store the value into the array.
            emit(AASTORE);
        }
    }
}

/*void StatementGenerator::emitRead(goParser::ReadStatementContext *ctx)
{
    emitRead(ctx->readArguments(), false);
}

void StatementGenerator::emitReadln(goParser::ReadlnStatementContext *ctx)
{
    emitRead(ctx->readArguments(), true);
}

void StatementGenerator::emitRead(goParser::ReadArgumentsContext *argsCtx,
                                  bool needSkip)
{
    int size = argsCtx->variable().size();

    // Loop over read arguments.
    for (int i = 0; i < size; i++)
    {
        goParser::VariableContext *varCtx = argsCtx->variable()[i];
        Typespec *varType = varCtx->type;

        if (varType == Predefined::integerType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextInt()I");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::realType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextFloat()F");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::booleanType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/nextBoolean()Z");
            emitStoreValue(varCtx->entry, nullptr);
        }
        else if (varType == Predefined::charType)
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(LDC, "\"\"");
            emit(INVOKEVIRTUAL,
                 string("java/util/Scanner/useDelimiter(Ljava/lang/String;)") +
                 string("Ljava/util/Scanner;"));
            emit(POP);
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/next()Ljava/lang/String;");
            emit(ICONST_0);
            emit(INVOKEVIRTUAL, "java/lang/String/charAt(I)C");
            emitStoreValue(varCtx->entry, nullptr);

            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/reset()Ljava/util/Scanner;");

        }
        else  // string
        {
            emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
            emit(INVOKEVIRTUAL, "java/util/Scanner/next()Ljava/lang/String;");
            emitStoreValue(varCtx->entry, nullptr);
        }
    }

    // READLN: Skip the rest of the input line.
    if (needSkip)
    {
        emit(GETSTATIC, programName + "/_sysin Ljava/util/Scanner;");
        emit(INVOKEVIRTUAL, "java/util/Scanner/nextLine()Ljava/lang/String;");
        emit(POP);
    }
}*/

}} // namespace backend::compiler
