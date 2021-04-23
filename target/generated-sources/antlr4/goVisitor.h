
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
    virtual antlrcpp::Any visitSourceFile(goParser::SourceFileContext *context) = 0;

    virtual antlrcpp::Any visitPackageClause(goParser::PackageClauseContext *context) = 0;

    virtual antlrcpp::Any visitImportDecl(goParser::ImportDeclContext *context) = 0;

    virtual antlrcpp::Any visitImportSpec(goParser::ImportSpecContext *context) = 0;

    virtual antlrcpp::Any visitImportPath(goParser::ImportPathContext *context) = 0;

    virtual antlrcpp::Any visitTopLevelDecl(goParser::TopLevelDeclContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(goParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitConstDecl(goParser::ConstDeclContext *context) = 0;

    virtual antlrcpp::Any visitConstSpec(goParser::ConstSpecContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierList(goParser::IdentifierListContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(goParser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitTypeDecl(goParser::TypeDeclContext *context) = 0;

    virtual antlrcpp::Any visitTypeSpec(goParser::TypeSpecContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDecl(goParser::FunctionDeclContext *context) = 0;

    virtual antlrcpp::Any visitFunction(goParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitMethodDecl(goParser::MethodDeclContext *context) = 0;

    virtual antlrcpp::Any visitReceiver(goParser::ReceiverContext *context) = 0;

    virtual antlrcpp::Any visitVarDecl(goParser::VarDeclContext *context) = 0;

    virtual antlrcpp::Any visitVarSpec(goParser::VarSpecContext *context) = 0;

    virtual antlrcpp::Any visitBlock(goParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatementList(goParser::StatementListContext *context) = 0;

    virtual antlrcpp::Any visitStatement(goParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSimpleStmt(goParser::SimpleStmtContext *context) = 0;

    virtual antlrcpp::Any visitExpressionStmt(goParser::ExpressionStmtContext *context) = 0;

    virtual antlrcpp::Any visitSendStmt(goParser::SendStmtContext *context) = 0;

    virtual antlrcpp::Any visitIncDecStmt(goParser::IncDecStmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(goParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitAssign_op(goParser::Assign_opContext *context) = 0;

    virtual antlrcpp::Any visitShortVarDecl(goParser::ShortVarDeclContext *context) = 0;

    virtual antlrcpp::Any visitEmptyStmt(goParser::EmptyStmtContext *context) = 0;

    virtual antlrcpp::Any visitLabeledStmt(goParser::LabeledStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(goParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(goParser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitContinueStmt(goParser::ContinueStmtContext *context) = 0;

    virtual antlrcpp::Any visitGotoStmt(goParser::GotoStmtContext *context) = 0;

    virtual antlrcpp::Any visitFallthroughStmt(goParser::FallthroughStmtContext *context) = 0;

    virtual antlrcpp::Any visitDeferStmt(goParser::DeferStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(goParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitSwitchStmt(goParser::SwitchStmtContext *context) = 0;

    virtual antlrcpp::Any visitExprSwitchStmt(goParser::ExprSwitchStmtContext *context) = 0;

    virtual antlrcpp::Any visitExprCaseClause(goParser::ExprCaseClauseContext *context) = 0;

    virtual antlrcpp::Any visitExprSwitchCase(goParser::ExprSwitchCaseContext *context) = 0;

    virtual antlrcpp::Any visitTypeSwitchStmt(goParser::TypeSwitchStmtContext *context) = 0;

    virtual antlrcpp::Any visitTypeSwitchGuard(goParser::TypeSwitchGuardContext *context) = 0;

    virtual antlrcpp::Any visitTypeCaseClause(goParser::TypeCaseClauseContext *context) = 0;

    virtual antlrcpp::Any visitTypeSwitchCase(goParser::TypeSwitchCaseContext *context) = 0;

    virtual antlrcpp::Any visitTypeList(goParser::TypeListContext *context) = 0;

    virtual antlrcpp::Any visitSelectStmt(goParser::SelectStmtContext *context) = 0;

    virtual antlrcpp::Any visitCommClause(goParser::CommClauseContext *context) = 0;

    virtual antlrcpp::Any visitCommCase(goParser::CommCaseContext *context) = 0;

    virtual antlrcpp::Any visitRecvStmt(goParser::RecvStmtContext *context) = 0;

    virtual antlrcpp::Any visitForStmt(goParser::ForStmtContext *context) = 0;

    virtual antlrcpp::Any visitForClause(goParser::ForClauseContext *context) = 0;

    virtual antlrcpp::Any visitRangeClause(goParser::RangeClauseContext *context) = 0;

    virtual antlrcpp::Any visitGoStmt(goParser::GoStmtContext *context) = 0;

    virtual antlrcpp::Any visitType(goParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(goParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitTypeLit(goParser::TypeLitContext *context) = 0;

    virtual antlrcpp::Any visitArrayType(goParser::ArrayTypeContext *context) = 0;

    virtual antlrcpp::Any visitArrayLength(goParser::ArrayLengthContext *context) = 0;

    virtual antlrcpp::Any visitElementType(goParser::ElementTypeContext *context) = 0;

    virtual antlrcpp::Any visitPointerType(goParser::PointerTypeContext *context) = 0;

    virtual antlrcpp::Any visitInterfaceType(goParser::InterfaceTypeContext *context) = 0;

    virtual antlrcpp::Any visitSliceType(goParser::SliceTypeContext *context) = 0;

    virtual antlrcpp::Any visitMapType(goParser::MapTypeContext *context) = 0;

    virtual antlrcpp::Any visitChannelType(goParser::ChannelTypeContext *context) = 0;

    virtual antlrcpp::Any visitMethodSpec(goParser::MethodSpecContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(goParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitSignature(goParser::SignatureContext *context) = 0;

    virtual antlrcpp::Any visitResult(goParser::ResultContext *context) = 0;

    virtual antlrcpp::Any visitParameters(goParser::ParametersContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(goParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameterDecl(goParser::ParameterDeclContext *context) = 0;

    virtual antlrcpp::Any visitOperand(goParser::OperandContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(goParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBasicLit(goParser::BasicLitContext *context) = 0;

    virtual antlrcpp::Any visitOperandName(goParser::OperandNameContext *context) = 0;

    virtual antlrcpp::Any visitQualifiedIdent(goParser::QualifiedIdentContext *context) = 0;

    virtual antlrcpp::Any visitCompositeLit(goParser::CompositeLitContext *context) = 0;

    virtual antlrcpp::Any visitLiteralType(goParser::LiteralTypeContext *context) = 0;

    virtual antlrcpp::Any visitLiteralValue(goParser::LiteralValueContext *context) = 0;

    virtual antlrcpp::Any visitElementList(goParser::ElementListContext *context) = 0;

    virtual antlrcpp::Any visitKeyedElement(goParser::KeyedElementContext *context) = 0;

    virtual antlrcpp::Any visitKey(goParser::KeyContext *context) = 0;

    virtual antlrcpp::Any visitElement(goParser::ElementContext *context) = 0;

    virtual antlrcpp::Any visitStructType(goParser::StructTypeContext *context) = 0;

    virtual antlrcpp::Any visitFieldDecl(goParser::FieldDeclContext *context) = 0;

    virtual antlrcpp::Any visitAnonymousField(goParser::AnonymousFieldContext *context) = 0;

    virtual antlrcpp::Any visitFunctionLit(goParser::FunctionLitContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpr(goParser::PrimaryExprContext *context) = 0;

    virtual antlrcpp::Any visitSelector(goParser::SelectorContext *context) = 0;

    virtual antlrcpp::Any visitIndex(goParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitSlice(goParser::SliceContext *context) = 0;

    virtual antlrcpp::Any visitTypeAssertion(goParser::TypeAssertionContext *context) = 0;

    virtual antlrcpp::Any visitArguments(goParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitMethodExpr(goParser::MethodExprContext *context) = 0;

    virtual antlrcpp::Any visitReceiverType(goParser::ReceiverTypeContext *context) = 0;

    virtual antlrcpp::Any visitExpression(goParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryExpr(goParser::UnaryExprContext *context) = 0;

    virtual antlrcpp::Any visitConversion(goParser::ConversionContext *context) = 0;

    virtual antlrcpp::Any visitEos(goParser::EosContext *context) = 0;


};

