#ifndef COMPILER_H_
#define COMPILER_H_

#include "goBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/type/Typespec.h"
#include "ProgramGenerator.h"
#include "StatementGenerator.h"
#include "ExpressionGenerator.h"

namespace backend { namespace compiler {

using namespace std;
using namespace intermediate::symtab;
using namespace intermediate::type;

class CodeGenerator;

class Compiler : public goBaseVisitor
{
private:
    SymtabEntry *programId;  // symbol table entry of the program name
    string programName;      // the program name

    CodeGenerator       *code;            // base code generator
    ProgramGenerator    *programCode;     // program code generator
    StatementGenerator  *statementCode;   // statement code generator
    ExpressionGenerator *expressionCode;  // expression code generator

public:
    /**
     * Constructor for the base compiler.
     * @param programId the symtab entry for the program name.
     */
    Compiler(SymtabEntry *programId)
        : programId(programId), programName(programId->getName()),
          code(new CodeGenerator(programName, "j", this)),
          programCode(nullptr), statementCode(nullptr),
          expressionCode(nullptr) {}

    /**
     * Constructor for child compilers of procedures and functions.
     * @param parent the parent compiler.
     */
    Compiler(Compiler *parent)
        : programId(parent->programId), programName(parent->programName),
          code(parent->code), programCode(parent->programCode),
          statementCode(nullptr), expressionCode(nullptr) {}

    /**
     * Constructor for child compilers of records.
     * @param parent the parent compiler.
     * @param recordId the symbol table entry of the name of the record to compile.
     */
    Compiler(Compiler *parent, SymtabEntry *recordId)
    {
        string recordTypePath = recordId->getType()->getRecordTypePath();
        code = new CodeGenerator(recordTypePath, "j", this);
        createNewGenerators(code);

        programCode->emitRecord(recordId, recordTypePath);
    }

    /**
     * Get the name of the object (Jasmin) file.
     * @return the file name.
     */
    string getObjectFileName() { return code->getObjectFileName(); }

    Object visitProgram(goParser::ProgramContext *ctx) override;
    Object visitRoutineDefinition(goParser::RoutineDefinitionContext *ctx) override;
    Object visitStatement(goParser::StatementContext *ctx) override;
    Object visitAssignmentStatement(goParser::AssignmentStatementContext *ctx) override;
    Object visitIfStatement(goParser::IfStatementContext *ctx) override;
    Object visitCaseStatement(goParser::CaseStatementContext *ctx) override;
    //Object visitRepeatStatement(goParser::RepeatStatementContext *ctx) override;
    Object visitWhileStatement(goParser::WhileStatementContext *ctx) override;
    Object visitForStatement(goParser::ForStatementContext *ctx) override;
    //Object visitProcedureCallStatement(goParser::ProcedureCallStatementContext *ctx) override;
    Object visitExpression(goParser::ExpressionContext *ctx) override;
    Object visitVariableFactor(goParser::VariableFactorContext *ctx) override;
    Object visitVariable(goParser::VariableContext *ctx) override;
    Object visitNumberFactor(goParser::NumberFactorContext *ctx) override;
    Object visitCharacterFactor(goParser::CharacterFactorContext *ctx) override;
    Object visitStringFactor(goParser::StringFactorContext *ctx) override;
    Object visitFunctionCallFactor(goParser::FunctionCallFactorContext *context) override;
    Object visitNotFactor(goParser::NotFactorContext *ctx) override;
    Object visitParenthesizedFactor(goParser::ParenthesizedFactorContext *ctx) override;
    Object visitWriteStatement(goParser::WriteStatementContext *ctx) override;
    Object visitWritelnStatement(goParser::WritelnStatementContext *ctx) override;
    //Object visitReadStatement(goParser::ReadStatementContext *ctx) override;
    //Object visitReadlnStatement(goParser::ReadlnStatementContext *ctx) override;

private:
    /**
     * Create new child code generators.
     * @param parentGenerator the parent code generator.
     */
    void createNewGenerators(CodeGenerator *parentGenerator)
    {
        programCode    = new ProgramGenerator(parentGenerator, this);
        statementCode  = new StatementGenerator(programCode, this);
        expressionCode = new ExpressionGenerator(programCode, this);
    }
};

}}  // namespace backend::compiler

#endif /* COMPILER_H_ */
