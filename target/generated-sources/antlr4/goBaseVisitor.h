
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

  virtual antlrcpp::Any visitSourceFile(goParser::SourceFileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPackageClause(goParser::PackageClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDecl(goParser::ImportDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportSpec(goParser::ImportSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportPath(goParser::ImportPathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopLevelDecl(goParser::TopLevelDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(goParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstDecl(goParser::ConstDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstSpec(goParser::ConstSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierList(goParser::IdentifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(goParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDecl(goParser::TypeDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSpec(goParser::TypeSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDecl(goParser::FunctionDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(goParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodDecl(goParser::MethodDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReceiver(goParser::ReceiverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDecl(goParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarSpec(goParser::VarSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(goParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatementList(goParser::StatementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(goParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSimpleStmt(goParser::SimpleStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionStmt(goParser::ExpressionStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSendStmt(goParser::SendStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncDecStmt(goParser::IncDecStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment(goParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign_op(goParser::Assign_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShortVarDecl(goParser::ShortVarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEmptyStmt(goParser::EmptyStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabeledStmt(goParser::LabeledStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(goParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStmt(goParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStmt(goParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGotoStmt(goParser::GotoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFallthroughStmt(goParser::FallthroughStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeferStmt(goParser::DeferStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(goParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSwitchStmt(goParser::SwitchStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprSwitchStmt(goParser::ExprSwitchStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprCaseClause(goParser::ExprCaseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprSwitchCase(goParser::ExprSwitchCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSwitchStmt(goParser::TypeSwitchStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSwitchGuard(goParser::TypeSwitchGuardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeCaseClause(goParser::TypeCaseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeSwitchCase(goParser::TypeSwitchCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeList(goParser::TypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStmt(goParser::SelectStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommClause(goParser::CommClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommCase(goParser::CommCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRecvStmt(goParser::RecvStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStmt(goParser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForClause(goParser::ForClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRangeClause(goParser::RangeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGoStmt(goParser::GoStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(goParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(goParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeLit(goParser::TypeLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayType(goParser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayLength(goParser::ArrayLengthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementType(goParser::ElementTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerType(goParser::PointerTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterfaceType(goParser::InterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSliceType(goParser::SliceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMapType(goParser::MapTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChannelType(goParser::ChannelTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodSpec(goParser::MethodSpecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionType(goParser::FunctionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignature(goParser::SignatureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResult(goParser::ResultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameters(goParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterList(goParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterDecl(goParser::ParameterDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperand(goParser::OperandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(goParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasicLit(goParser::BasicLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperandName(goParser::OperandNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQualifiedIdent(goParser::QualifiedIdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompositeLit(goParser::CompositeLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralType(goParser::LiteralTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralValue(goParser::LiteralValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElementList(goParser::ElementListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeyedElement(goParser::KeyedElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey(goParser::KeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElement(goParser::ElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStructType(goParser::StructTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFieldDecl(goParser::FieldDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnonymousField(goParser::AnonymousFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionLit(goParser::FunctionLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryExpr(goParser::PrimaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelector(goParser::SelectorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex(goParser::IndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlice(goParser::SliceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeAssertion(goParser::TypeAssertionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(goParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodExpr(goParser::MethodExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReceiverType(goParser::ReceiverTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(goParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryExpr(goParser::UnaryExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConversion(goParser::ConversionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEos(goParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }


};

