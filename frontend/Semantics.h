#ifndef SEMANTICS_H_
#define SEMANTICS_H_

#include <map>

#include "goBaseVisitor.h"
#include "antlr4-runtime.h"

#include "intermediate/symtab/SymtabStack.h"
#include "intermediate/symtab/SymtabEntry.h"
#include "intermediate/symtab/Predefined.h"
#include "intermediate/type/Typespec.h"
#include "intermediate/util/BackendMode.h"
#include "SemanticErrorHandler.h"

namespace frontend {

using namespace std;
using namespace intermediate::symtab;
using namespace intermediate::type;

class Semantics : public goBaseVisitor
{
private:
    BackendMode mode;
    SymtabStack *symtabStack;
    SymtabEntry *programId;
    SemanticErrorHandler error;

    map<string, Typespec *> *typeTable;

    /**
     * Return the number of values in a datatype.
     * @param type the datatype.
     * @return the number of values.
     */
    int typeCount(Typespec *type);

    /**
     * Determine whether or not an expression is a variable only.
     * @param exprCtx the ExpressionContext.
     * @return true if it's an expression only, else false.
     */
    bool expressionIsVariable(goParser::ExpressionContext *exprCtx);

    /**
     * Perform semantic operations on procedure and function call arguments.
     * @param listCtx the ArgumentListContext.
     * @param parameters the vector of parameters to fill.
     */
    void checkCallArguments(goParser::ArgumentListContext *listCtx,
                            vector<SymtabEntry *> *parms);

    /**
     * Determine the datatype of a variable that can have modifiers.
     * @param varCtx the VariableContext.
     * @param varType the variable's datatype without the modifiers.
     * @return the datatype with any modifiers.
     */
    Typespec *variableDatatype(goParser::VariableContext *varCtx,
                               Typespec *varType);

    /**
     * Create a new record type.
     * @param recordTypeSpecCtx the RecordTypespecContext.
     * @param recordTypeName the name of the record type.
     * @return the symbol table entry of the record type identifier.
     */
    SymtabEntry *createRecordType(
                        goParser::RecordTypespecContext *recordTypeSpecCtx,
                        string recordTypeName);

    /**
     * Create the fully qualified type pathname of a record type.
     * @param recordType the record type.
     * @return the pathname.
     */
    string createRecordTypePath(Typespec *recordType);

    /**
     * Create the symbol table for a record type.
     * @param ctx the RecordFieldsContext,
     * @param ownerId the symbol table entry of the owner's identifier.
     * @return the symbol table.
     */
    Symtab *createRecordSymtab(
                goParser::RecordFieldsContext *ctx, SymtabEntry *ownerId);

public:
    Semantics(BackendMode mode) : mode(mode), programId(nullptr)
    {
        // Create and initialize the symbol table stack.
        symtabStack = new SymtabStack();
        Predefined::initialize(symtabStack);

        typeTable = new map<string, Typespec *>();
        (*typeTable)["integer"] = Predefined::integerType;
        (*typeTable)["real"]    = Predefined::realType;
        (*typeTable)["boolean"] = Predefined::booleanType;
        (*typeTable)["char"]    = Predefined::charType;
        (*typeTable)["string"]  = Predefined::stringType;
    }

    /**
     * Get the symbol table entry of the program identifier.
     * @return the entry.
     */
    SymtabEntry *getProgramId() { return programId; }

    /**
     * Get the count of semantic errors.
     * @return the count.
     */
    int getErrorCount() const { return error.getCount(); }

    /**
     * Return the default value for a given datatype.
     * @param type the datatype.
     */
    static Object defaultValue(Typespec *type);

    Object visitProgram(goParser::ProgramContext *ctx) override;
    Object visitProgramHeader(goParser::ProgramHeaderContext *ctx) override;
    Object visitConstantDefinition(goParser::ConstantDefinitionContext *ctx) override;
    Object visitConstant(goParser::ConstantContext *ctx) override;
    Object visitTypeDefinition(goParser::TypeDefinitionContext *ctx) override;
    Object visitRecordTypespec(goParser::RecordTypespecContext *ctx) override;
    Object visitSimpleTypespec(goParser::SimpleTypespecContext *ctx) override;
    Object visitTypeIdentifierTypespec(goParser::TypeIdentifierTypespecContext *ctx) override;
    Object visitTypeIdentifier(goParser::TypeIdentifierContext *ctx) override;
    Object visitEnumerationTypespec(goParser::EnumerationTypespecContext *ctx) override;
    Object visitSubrangeTypespec(goParser::SubrangeTypespecContext *ctx) override;
    Object visitArrayTypespec(goParser::ArrayTypespecContext *ctx) override;
    Object visitVariableDeclarations(goParser::VariableDeclarationsContext *ctx) override;
    Object visitRoutineDefinition(goParser::RoutineDefinitionContext *ctx) override;
    Object visitParameterDeclarationsList(goParser::ParameterDeclarationsListContext *ctx) override;
    Object visitParameterDeclarations(goParser::ParameterDeclarationsContext *ctx) override;
    Object visitAssignmentStatement(goParser::AssignmentStatementContext *ctx) override;
    Object visitLhs(goParser::LhsContext *ctx) override;
    Object visitIfStatement(goParser::IfStatementContext *ctx) override;
    Object visitCaseStatement(goParser::CaseStatementContext *ctx) override;
    //Object visitRepeatStatement(goParser::RepeatStatementContext *ctx) override;
    Object visitWhileStatement(goParser::WhileStatementContext *ctx) override;
    Object visitForStatement(goParser::ForStatementContext *ctx) override;
    Object visitProcedureCallStatement(goParser::ProcedureCallStatementContext *ctx) override;
    Object visitFunctionCallFactor(goParser::FunctionCallFactorContext *ctx) override;
    Object visitExpression(goParser::ExpressionContext *ctx) override;
    Object visitSimpleExpression(goParser::SimpleExpressionContext *ctx) override;
    Object visitTerm(goParser::TermContext *ctx) override;
    Object visitVariableFactor(goParser::VariableFactorContext *ctx) override;
    Object visitVariable(goParser::VariableContext *ctx) override;
    Object visitVariableIdentifier(goParser::VariableIdentifierContext *ctx) override;
    Object visitNumberFactor(goParser::NumberFactorContext *ctx) override;
    Object visitCharacterFactor(goParser::CharacterFactorContext *ctx) override;
    Object visitStringFactor(goParser::StringFactorContext *ctx) override;
    Object visitNotFactor(goParser::NotFactorContext *ctx) override;
    Object visitParenthesizedFactor(goParser::ParenthesizedFactorContext *ctx) override;
};

} // namespace frontend

#endif /* SEMANTICS_H_ */
