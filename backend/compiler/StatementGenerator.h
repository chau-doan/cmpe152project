#ifndef STATEMENTGENERATOR_H_
#define STATEMENTGENERATOR_H_

#include <vector>
#include <map>

#include "CodeGenerator.h"

namespace backend { namespace compiler {

using namespace std;

class StatementGenerator : public CodeGenerator
{
public:
    /**
     * Constructor.
     * @param parent the parent code generator.
     * @param compiler the compiler to use.
     */
    StatementGenerator(CodeGenerator *parent, Compiler *compiler)
        : CodeGenerator(parent, compiler) {}

    /**
     * Emit code for an assignment statement.
     * @param ctx the AssignmentStatementContext.
     */
    void emitAssignment(goParser::AssignmentStatementContext *ctx);

    /**
     * Emit code for an IF statement.
     * @param ctx the IfStatementContext.
     */
    void emitIf(goParser::IfStatementContext *ctx);

    /**
     * Emit code for a CASE statement.
     * @param ctx the CaseStatementContext.
     */
    void emitCase(goParser::CaseStatementContext *ctx);

    /**
     * Emit code for a REPEAT statement.
     * @param ctx the RepeatStatementContext.
     */
    //void emitRepeat(goParser::RepeatStatementContext *ctx);

    /**
     * Emit code for a WHILE statement.
     * @param ctx the WhileStatementContext.
     */
    void emitWhile(goParser::WhileStatementContext *ctx);

    /**
     * Emit code for a FOR statement.
     * @param ctx the ForStatementContext.
     */
    void emitFor(goParser::ForStatementContext *ctx);

    /**
     * Emit code for a procedure call statement.
     * @param ctx the ProcedureCallStatementContext.
     */
    //void emitProcedureCall(goParser::ProcedureCallStatementContext *ctx);

    /**
     * Emit code for a function call statement.
     * @param ctx the FunctionCallContext.
     */
    void emitFunctionCall(goParser::FunctionCallContext *ctx);

    /**
     * Emit code for a WRITE statement.
     * @param ctx the WriteStatementContext.
     */
    void emitWrite(goParser::WriteStatementContext *ctx);

    /**
     * Emit code for a WRITELN statement.
     * @param ctx the WritelnStatementContext.
     */
    void emitWriteln(goParser::WritelnStatementContext *ctx);

    /**
     * Emit code for a READ statement.
     * @param ctx the ReadStatementContext.
     */
    //void emitRead(goParser::ReadStatementContext *ctx);

    /**
     * Emit code for a READLN statement.
     * @param ctx the ReadlnStatementContext.
     */
    //void emitReadln(goParser::ReadlnStatementContext *ctx);

private:
    /**
     * Process the CASE map from the CASE branches.
     * @param branchListCtx the CaseBranchListContext.
     * @param branchLabels the branch labels.
     * @return the array list of table entries.
     */
    map<int, Label *> *createCaseMap(
                            goParser::CaseBranchListContext *branchListCtx,
                            vector<Label *>& branchLabels);

    /**
     * Emit code for the LOOKUPSWITCH instruction.
     * @param entries the table entries.
     * @param branchLabels the branch labels.
     */
    void emitLookupSwitch(map<int, Label *> *labelMap,
                          vector<Label *>& branchLabels);

    /**
     * Emit code for the branch statements.
     * @param branchListCtx the CaseBranchListContext.
     * @param branchLabels the branch labels
     * @throws goCompilerException if an error occurred.
     */
    void emitBranchStatements(
                            goParser::CaseBranchListContext *branchListCtx,
                            vector<Label *>& branchLabels);

    /**
     * Emit a call to a procedure or a function.
     * @param routineId the routine name's symbol table entry.
     * @param argListCtx the ArgumentListContext.
     */
    void emitCall(SymtabEntry *routineId,
                  goParser::ArgumentListContext *argListCtx);

    /**
     * Emit code for a call to WRITE or WRITELN.
     * @param argsCtx the WriteArgumentsContext.
     * @param needLF true if need a line feed.
     */
    void emitWrite(goParser::WriteArgumentsContext *argsCtx, bool needLF);

    /**
     * Create the printf format string.
     * @param argsCtx the WriteArgumentsContext.
     * @param format the format string to create.
     * @return the count of expression arguments.
     */
    int createWriteFormat(goParser::WriteArgumentsContext *argsCtx,
                          string& format, bool needLF);

    /**
     * Emit the printf arguments array.
     * @param argsCtx
     * @param exprCount
     */
    void emitArgumentsArray(goParser::WriteArgumentsContext *argsCtx,
                            int exprCount);

    /**
     * Generate code for a call to READ or READLN.
     * @param argsCtx the ReadArgumentsContext.
     * @param needSkip true if need to skip the rest of the input line.
     */
    //void emitRead(goParser::ReadArgumentsContext *argsCtx, bool needSkip);
};

}} // namespace backend::compiler

#endif /* STATEMENTGENERATOR_H_ */
