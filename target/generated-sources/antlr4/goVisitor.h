
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from go.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "goParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by goParser.
 */
class  goVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by goParser.
   */
    virtual antlrcpp::Any visitProgram(goParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitProgramHeader(goParser::ProgramHeaderContext *context) = 0;

    virtual antlrcpp::Any visitProgramIdentifier(goParser::ProgramIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitBlock(goParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(goParser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitConstantsPart(goParser::ConstantsPartContext *context) = 0;

    virtual antlrcpp::Any visitConstantDefinitionsList(goParser::ConstantDefinitionsListContext *context) = 0;

    virtual antlrcpp::Any visitConstantDefinition(goParser::ConstantDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitConstantIdentifier(goParser::ConstantIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitConstant(goParser::ConstantContext *context) = 0;

    virtual antlrcpp::Any visitSign(goParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitTypesPart(goParser::TypesPartContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinitionsList(goParser::TypeDefinitionsListContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefinition(goParser::TypeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitTypeIdentifier(goParser::TypeIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitSimpleTypespec(goParser::SimpleTypespecContext *context) = 0;

    virtual antlrcpp::Any visitArrayTypespec(goParser::ArrayTypespecContext *context) = 0;

    virtual antlrcpp::Any visitRecordTypespec(goParser::RecordTypespecContext *context) = 0;

    virtual antlrcpp::Any visitTypeIdentifierTypespec(goParser::TypeIdentifierTypespecContext *context) = 0;

    virtual antlrcpp::Any visitEnumerationTypespec(goParser::EnumerationTypespecContext *context) = 0;

    virtual antlrcpp::Any visitSubrangeTypespec(goParser::SubrangeTypespecContext *context) = 0;

    virtual antlrcpp::Any visitEnumerationType(goParser::EnumerationTypeContext *context) = 0;

    virtual antlrcpp::Any visitEnumerationConstant(goParser::EnumerationConstantContext *context) = 0;

    virtual antlrcpp::Any visitSubrangeType(goParser::SubrangeTypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(goParser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayDimensionList(goParser::ArrayDimensionListContext *context) = 0;

    virtual antlrcpp::Any visitRecordType(goParser::RecordTypeContext *context) = 0;

    virtual antlrcpp::Any visitRecordFields(goParser::RecordFieldsContext *context) = 0;

    virtual antlrcpp::Any visitVariablesPart(goParser::VariablesPartContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarationsList(goParser::VariableDeclarationsListContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclarations(goParser::VariableDeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitVariableIdentifierList(goParser::VariableIdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitVariableIdentifier(goParser::VariableIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitRoutinesPart(goParser::RoutinesPartContext *context) = 0;

    virtual antlrcpp::Any visitRoutineDefinition(goParser::RoutineDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionHead(goParser::FunctionHeadContext *context) = 0;

    virtual antlrcpp::Any visitRoutineIdentifier(goParser::RoutineIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitParameters(goParser::ParametersContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclarationsList(goParser::ParameterDeclarationsListContext *context) = 0;

    virtual antlrcpp::Any visitParameterDeclarations(goParser::ParameterDeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitParameterIdentifierList(goParser::ParameterIdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitParameterIdentifier(goParser::ParameterIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitStatement(goParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStatement(goParser::CompoundStatementContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStatement(goParser::EmptyStatementContext *context) = 0;

    virtual antlrcpp::Any visitStatementList(goParser::StatementListContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStatement(goParser::AssignmentStatementContext *context) = 0;

    virtual antlrcpp::Any visitLhs(goParser::LhsContext *context) = 0;

    virtual antlrcpp::Any visitRhs(goParser::RhsContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(goParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitTrueStatement(goParser::TrueStatementContext *context) = 0;

    virtual antlrcpp::Any visitFalseStatement(goParser::FalseStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseStatement(goParser::CaseStatementContext *context) = 0;

    virtual antlrcpp::Any visitCaseBranchList(goParser::CaseBranchListContext *context) = 0;

    virtual antlrcpp::Any visitCaseBranch(goParser::CaseBranchContext *context) = 0;

    virtual antlrcpp::Any visitCaseConstant(goParser::CaseConstantContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(goParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(goParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitProcedureCallStatement(goParser::ProcedureCallStatementContext *context) = 0;

    virtual antlrcpp::Any visitProcedureName(goParser::ProcedureNameContext *context) = 0;

    virtual antlrcpp::Any visitArgumentList(goParser::ArgumentListContext *context) = 0;

    virtual antlrcpp::Any visitArgument(goParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitWriteStatement(goParser::WriteStatementContext *context) = 0;

    virtual antlrcpp::Any visitWritelnStatement(goParser::WritelnStatementContext *context) = 0;

    virtual antlrcpp::Any visitWriteArguments(goParser::WriteArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitWriteArgument(goParser::WriteArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFieldWidth(goParser::FieldWidthContext *context) = 0;

    virtual antlrcpp::Any visitDecimalPlaces(goParser::DecimalPlacesContext *context) = 0;

    virtual antlrcpp::Any visitExpression(goParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSimpleExpression(goParser::SimpleExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTerm(goParser::TermContext *context) = 0;

    virtual antlrcpp::Any visitVariableFactor(goParser::VariableFactorContext *context) = 0;

    virtual antlrcpp::Any visitNumberFactor(goParser::NumberFactorContext *context) = 0;

    virtual antlrcpp::Any visitCharacterFactor(goParser::CharacterFactorContext *context) = 0;

    virtual antlrcpp::Any visitStringFactor(goParser::StringFactorContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallFactor(goParser::FunctionCallFactorContext *context) = 0;

    virtual antlrcpp::Any visitNotFactor(goParser::NotFactorContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedFactor(goParser::ParenthesizedFactorContext *context) = 0;

    virtual antlrcpp::Any visitVariable(goParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitModifier(goParser::ModifierContext *context) = 0;

    virtual antlrcpp::Any visitIndexList(goParser::IndexListContext *context) = 0;

    virtual antlrcpp::Any visitIndex(goParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitField(goParser::FieldContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(goParser::FunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitFunctionName(goParser::FunctionNameContext *context) = 0;

    virtual antlrcpp::Any visitNumber(goParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumber(goParser::UnsignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConstant(goParser::IntegerConstantContext *context) = 0;

    virtual antlrcpp::Any visitRealConstant(goParser::RealConstantContext *context) = 0;

    virtual antlrcpp::Any visitCharacterConstant(goParser::CharacterConstantContext *context) = 0;

    virtual antlrcpp::Any visitStringConstant(goParser::StringConstantContext *context) = 0;

    virtual antlrcpp::Any visitRelOp(goParser::RelOpContext *context) = 0;

    virtual antlrcpp::Any visitAddOp(goParser::AddOpContext *context) = 0;

    virtual antlrcpp::Any visitMulOp(goParser::MulOpContext *context) = 0;


};

