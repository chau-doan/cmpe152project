#ifndef EXECUTOR_H_
#define EXECUTOR_H_

#include "goBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/type/Typespec.h"
#include "RuntimeStack.h"
#include "RuntimeErrorHandler.h"

namespace backend { namespace interpreter {

using namespace std;
using namespace intermediate::symtab;
using namespace intermediate::type;

/**
 * Execute go programs.
 */
class Executor : public goBaseVisitor
{
private:
    int executionCount;         // count of executed statements
    SymtabEntry *programId;     // program identifier's symbol table entry
    RuntimeStack runtimeStack;  // runtime stack
    RuntimeErrorHandler error;  // runtime error handler

public:
    Executor(SymtabEntry *programId) : executionCount(0), programId(programId) {}

    Object visitProgram(goParser::ProgramContext *ctx) override;
    Object visitStatement(goParser::StatementContext *ctx) override;
    Object visitAssignmentStatement(goParser::AssignmentStatementContext *ctx) override;
    Object visitIfStatement(goParser::IfStatementContext *ctx) override;
    Object visitCaseStatement(goParser::CaseStatementContext *ctx) override;
    //Object visitRepeatStatement(goParser::RepeatStatementContext *ctx) override;
    Object visitWhileStatement(goParser::WhileStatementContext *ctx) override;
    Object visitForStatement(goParser::ForStatementContext *ctx) override;
    //Object visitProcedureCallStatement(goParser::ProcedureCallStatementContext *ctx) override;
    Object visitExpression(goParser::ExpressionContext *ctx) override;
    Object visitSimpleExpression(goParser::SimpleExpressionContext *ctx) override;
    Object visitTerm(goParser::TermContext *ctx) override;
    Object visitVariableFactor(goParser::VariableFactorContext *ctx) override;
    Object visitVariable(goParser::VariableContext *ctx) override;
    Object visitNumberFactor(goParser::NumberFactorContext *ctx) override;
    Object visitCharacterFactor(goParser::CharacterFactorContext *ctx) override;
    Object visitStringFactor(goParser::StringFactorContext *ctx) override;
    Object visitFunctionCallFactor(goParser::FunctionCallFactorContext *context) override;
    Object visitNotFactor(goParser::NotFactorContext *ctx) override;
    Object visitParenthesizedFactor(goParser::ParenthesizedFactorContext *ctx) override;
    Object visitWritelnStatement(goParser::WritelnStatementContext *ctx) override;
    Object visitWriteArguments(goParser::WriteArgumentsContext *ctx) override;
    //Object visitReadlnStatement(goParser::ReadlnStatementContext *ctx) override;
    //Object visitReadArguments(goParser::ReadArgumentsContext *ctx) override;

private:
    /**
     * Assign a value to a target variable's memory cell.
     * @param varCtx the VariableContext of the target.
     * @param value the value to assign.
     * @param valueType the datatype of the value.
     * @return the target variable's memory cell.
     */
    Cell *assignValue(goParser::VariableContext *varCtx,
                      const Object& value, Typespec *valueType);

    /**
     * Assign a value to a target variable's memory cell.
     * @param targetCell the target variable's memory cell.
     * @param targetType the datatype of the target variable.
     * @param value the value to assign.
     * @param valueType the datatype of the value.
     */
    void assignValue(Cell *targetCell, Typespec *targetType,
                     const Object& value, Typespec *valueType);

    /**
     * Create the jump table for a CASE statement.
     * @param branchListCtx the CaseBranchListContext.
     * @return the jump table.
     */
    map<int, goParser::StatementContext*> *createJumpTable(
                            goParser::CaseBranchListContext *branchListCtx);

    /**
     * Execute procedure and function call arguments.
     * @param argListCtx the ArgumentListContext
     * @param parameters the routine's parameters.
     * @param frame the routine's stack frame.
     */
    void executeCallArguments(goParser::ArgumentListContext *argListCtx,
                              vector<SymtabEntry*> *parameters,
                              StackFrame *frame);
};

}}  // namespace backend::interpreter

#endif /* EXECUTOR_H_ */
