
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from go.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "goVisitor.h"


/**
 * This class provides an empty implementation of goVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  goBaseVisitor : public goVisitor {
public:

  virtual antlrcpp::Any visitProgram(goParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramHeader(goParser::ProgramHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProgramIdentifier(goParser::ProgramIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(goParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarations(goParser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantsPart(goParser::ConstantsPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDefinitionsList(goParser::ConstantDefinitionsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantDefinition(goParser::ConstantDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantIdentifier(goParser::ConstantIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstant(goParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(goParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypesPart(goParser::TypesPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDefinitionsList(goParser::TypeDefinitionsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDefinition(goParser::TypeDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeIdentifier(goParser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleTypespec(goParser::SimpleTypespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayTypespec(goParser::ArrayTypespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecordTypespec(goParser::RecordTypespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeIdentifierTypespec(goParser::TypeIdentifierTypespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumerationTypespec(goParser::EnumerationTypespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubrangeTypespec(goParser::SubrangeTypespecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumerationType(goParser::EnumerationTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumerationConstant(goParser::EnumerationConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubrangeType(goParser::SubrangeTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayType(goParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDimensionList(goParser::ArrayDimensionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecordType(goParser::RecordTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecordFields(goParser::RecordFieldsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariablesPart(goParser::VariablesPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarationsList(goParser::VariableDeclarationsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclarations(goParser::VariableDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableIdentifierList(goParser::VariableIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableIdentifier(goParser::VariableIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutinesPart(goParser::RoutinesPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineDefinition(goParser::RoutineDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionHead(goParser::FunctionHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoutineIdentifier(goParser::RoutineIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameters(goParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDeclarationsList(goParser::ParameterDeclarationsListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDeclarations(goParser::ParameterDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterIdentifierList(goParser::ParameterIdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterIdentifier(goParser::ParameterIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(goParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStatement(goParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStatement(goParser::EmptyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementList(goParser::StatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStatement(goParser::AssignmentStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLhs(goParser::LhsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRhs(goParser::RhsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(goParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrueStatement(goParser::TrueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFalseStatement(goParser::FalseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseStatement(goParser::CaseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseBranchList(goParser::CaseBranchListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseBranch(goParser::CaseBranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaseConstant(goParser::CaseConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(goParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(goParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureCallStatement(goParser::ProcedureCallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProcedureName(goParser::ProcedureNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentList(goParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(goParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWriteStatement(goParser::WriteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWritelnStatement(goParser::WritelnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWriteArguments(goParser::WriteArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWriteArgument(goParser::WriteArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldWidth(goParser::FieldWidthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecimalPlaces(goParser::DecimalPlacesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(goParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleExpression(goParser::SimpleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTerm(goParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableFactor(goParser::VariableFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberFactor(goParser::NumberFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacterFactor(goParser::CharacterFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringFactor(goParser::StringFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallFactor(goParser::FunctionCallFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotFactor(goParser::NotFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesizedFactor(goParser::ParenthesizedFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(goParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModifier(goParser::ModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexList(goParser::IndexListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex(goParser::IndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitField(goParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(goParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionName(goParser::FunctionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(goParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumber(goParser::UnsignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerConstant(goParser::IntegerConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRealConstant(goParser::RealConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacterConstant(goParser::CharacterConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringConstant(goParser::StringConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelOp(goParser::RelOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddOp(goParser::AddOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulOp(goParser::MulOpContext *ctx) override {
    return visitChildren(ctx);
  }


};

