
// Generated from go.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  goParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, IDENTIFIER = 62, 
    KEYWORD = 63, BINARY_OP = 64, INT_LIT = 65, FLOAT_LIT = 66, IMAGINARY_LIT = 67, 
    RUNE_LIT = 68, LITTLE_U_VALUE = 69, BIG_U_VALUE = 70, STRING_LIT = 71, 
    WS = 72, COMMENT = 73, TERMINATOR = 74, LINE_COMMENT = 75
  };

  enum {
    RuleSourceFile = 0, RulePackageClause = 1, RuleImportDecl = 2, RuleImportSpec = 3, 
    RuleImportPath = 4, RuleTopLevelDecl = 5, RuleDeclaration = 6, RuleConstDecl = 7, 
    RuleConstSpec = 8, RuleIdentifierList = 9, RuleExpressionList = 10, 
    RuleTypeDecl = 11, RuleTypeSpec = 12, RuleFunctionDecl = 13, RuleFunction = 14, 
    RuleMethodDecl = 15, RuleReceiver = 16, RuleVarDecl = 17, RuleVarSpec = 18, 
    RuleBlock = 19, RuleStatementList = 20, RuleStatement = 21, RuleSimpleStmt = 22, 
    RuleExpressionStmt = 23, RuleSendStmt = 24, RuleIncDecStmt = 25, RuleAssignment = 26, 
    RuleAssign_op = 27, RuleShortVarDecl = 28, RuleEmptyStmt = 29, RuleLabeledStmt = 30, 
    RuleReturnStmt = 31, RuleBreakStmt = 32, RuleContinueStmt = 33, RuleGotoStmt = 34, 
    RuleFallthroughStmt = 35, RuleDeferStmt = 36, RuleIfStmt = 37, RuleSwitchStmt = 38, 
    RuleExprSwitchStmt = 39, RuleExprCaseClause = 40, RuleExprSwitchCase = 41, 
    RuleTypeSwitchStmt = 42, RuleTypeSwitchGuard = 43, RuleTypeCaseClause = 44, 
    RuleTypeSwitchCase = 45, RuleTypeList = 46, RuleSelectStmt = 47, RuleCommClause = 48, 
    RuleCommCase = 49, RuleRecvStmt = 50, RuleForStmt = 51, RuleForClause = 52, 
    RuleRangeClause = 53, RuleGoStmt = 54, RuleType = 55, RuleTypeName = 56, 
    RuleTypeLit = 57, RuleArrayType = 58, RuleArrayLength = 59, RuleElementType = 60, 
    RulePointerType = 61, RuleInterfaceType = 62, RuleSliceType = 63, RuleMapType = 64, 
    RuleChannelType = 65, RuleMethodSpec = 66, RuleFunctionType = 67, RuleSignature = 68, 
    RuleResult = 69, RuleParameters = 70, RuleParameterList = 71, RuleParameterDecl = 72, 
    RuleOperand = 73, RuleLiteral = 74, RuleBasicLit = 75, RuleOperandName = 76, 
    RuleQualifiedIdent = 77, RuleCompositeLit = 78, RuleLiteralType = 79, 
    RuleLiteralValue = 80, RuleElementList = 81, RuleKeyedElement = 82, 
    RuleKey = 83, RuleElement = 84, RuleStructType = 85, RuleFieldDecl = 86, 
    RuleAnonymousField = 87, RuleFunctionLit = 88, RulePrimaryExpr = 89, 
    RuleSelector = 90, RuleIndex = 91, RuleSlice = 92, RuleTypeAssertion = 93, 
    RuleArguments = 94, RuleMethodExpr = 95, RuleReceiverType = 96, RuleExpression = 97, 
    RuleUnaryExpr = 98, RuleConversion = 99, RuleEos = 100
  };

  goParser(antlr4::TokenStream *input);
  ~goParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


      /**
       * Returns {@code true} iff on the current index of the parser's
       * token stream a token exists on the {@code HIDDEN} channel which
       * either is a line terminator, or is a multi line comment that
       * contains a line terminator.
       *
       * @return {@code true} iff on the current index of the parser's
       * token stream a token exists on the {@code HIDDEN} channel which
       * either is a line terminator, or is a multi line comment that
       * contains a line terminator.
       */
      private boolean lineTerminatorAhead() {
          // Get the token ahead of the current index.
          int possibleIndexEosToken = this.getCurrentToken().getTokenIndex() - 1;
          Token ahead = _input.get(possibleIndexEosToken);
          if (ahead.getChannel() != Lexer.HIDDEN) {
              // We're only interested in tokens on the HIDDEN channel.
              return false;
          }

          if (ahead.getType() == TERMINATOR) {
              // There is definitely a line terminator ahead.
              return true;
          }

          if (ahead.getType() == WS) {
              // Get the token ahead of the current whitespaces.
              possibleIndexEosToken = this.getCurrentToken().getTokenIndex() - 2;
              ahead = _input.get(possibleIndexEosToken);
          }

          // Get the token's text and type.
          String text = ahead.getText();
          int type = ahead.getType();

          // Check if the token is, or contains a line terminator.
          return (type == COMMENT && (text.contains("\r") || text.contains("\n"))) ||
                  (type == TERMINATOR);
      }

       /**
       * Returns {@code true} if no line terminator exists between the specified
       * token offset and the prior one on the {@code HIDDEN} channel.
       *
       * @return {@code true} if no line terminator exists between the specified
       * token offset and the prior one on the {@code HIDDEN} channel.
       */
      private boolean noTerminatorBetween(int tokenOffset) {
          BufferedTokenStream stream = (BufferedTokenStream)_input;
          List<Token> tokens = stream.getHiddenTokensToLeft(stream.LT(tokenOffset).getTokenIndex());
          
          if (tokens == null) {
              return true;
          }

          for (Token token : tokens) {
              if (token.getText().contains("\n"))
                  return false;
          }

          return true;
      }

       /**
       * Returns {@code true} if no line terminator exists after any encounterd
       * parameters beyond the specified token offset and the next on the
       * {@code HIDDEN} channel.
       *
       * @return {@code true} if no line terminator exists after any encounterd
       * parameters beyond the specified token offset and the next on the
       * {@code HIDDEN} channel.
       */
      private boolean noTerminatorAfterParams(int tokenOffset) {
          BufferedTokenStream stream = (BufferedTokenStream)_input;
          int leftParams = 1;
          int rightParams = 0;
          String value;
          if (stream.LT(tokenOffset).getText().equals("(")) {
              // Scan past parameters
              while (leftParams != rightParams) {
                  tokenOffset++;
                  value = stream.LT(tokenOffset).getText();
                  if (value.equals("(")) {
                      leftParams++;
                  }
                  else if (value.equals(")")) {
                      rightParams++;
                  }
              }

              tokenOffset++;
              return noTerminatorBetween(tokenOffset);
          }
          
          return true;
      }


  class SourceFileContext;
  class PackageClauseContext;
  class ImportDeclContext;
  class ImportSpecContext;
  class ImportPathContext;
  class TopLevelDeclContext;
  class DeclarationContext;
  class ConstDeclContext;
  class ConstSpecContext;
  class IdentifierListContext;
  class ExpressionListContext;
  class TypeDeclContext;
  class TypeSpecContext;
  class FunctionDeclContext;
  class FunctionContext;
  class MethodDeclContext;
  class ReceiverContext;
  class VarDeclContext;
  class VarSpecContext;
  class BlockContext;
  class StatementListContext;
  class StatementContext;
  class SimpleStmtContext;
  class ExpressionStmtContext;
  class SendStmtContext;
  class IncDecStmtContext;
  class AssignmentContext;
  class Assign_opContext;
  class ShortVarDeclContext;
  class EmptyStmtContext;
  class LabeledStmtContext;
  class ReturnStmtContext;
  class BreakStmtContext;
  class ContinueStmtContext;
  class GotoStmtContext;
  class FallthroughStmtContext;
  class DeferStmtContext;
  class IfStmtContext;
  class SwitchStmtContext;
  class ExprSwitchStmtContext;
  class ExprCaseClauseContext;
  class ExprSwitchCaseContext;
  class TypeSwitchStmtContext;
  class TypeSwitchGuardContext;
  class TypeCaseClauseContext;
  class TypeSwitchCaseContext;
  class TypeListContext;
  class SelectStmtContext;
  class CommClauseContext;
  class CommCaseContext;
  class RecvStmtContext;
  class ForStmtContext;
  class ForClauseContext;
  class RangeClauseContext;
  class GoStmtContext;
  class TypeContext;
  class TypeNameContext;
  class TypeLitContext;
  class ArrayTypeContext;
  class ArrayLengthContext;
  class ElementTypeContext;
  class PointerTypeContext;
  class InterfaceTypeContext;
  class SliceTypeContext;
  class MapTypeContext;
  class ChannelTypeContext;
  class MethodSpecContext;
  class FunctionTypeContext;
  class SignatureContext;
  class ResultContext;
  class ParametersContext;
  class ParameterListContext;
  class ParameterDeclContext;
  class OperandContext;
  class LiteralContext;
  class BasicLitContext;
  class OperandNameContext;
  class QualifiedIdentContext;
  class CompositeLitContext;
  class LiteralTypeContext;
  class LiteralValueContext;
  class ElementListContext;
  class KeyedElementContext;
  class KeyContext;
  class ElementContext;
  class StructTypeContext;
  class FieldDeclContext;
  class AnonymousFieldContext;
  class FunctionLitContext;
  class PrimaryExprContext;
  class SelectorContext;
  class IndexContext;
  class SliceContext;
  class TypeAssertionContext;
  class ArgumentsContext;
  class MethodExprContext;
  class ReceiverTypeContext;
  class ExpressionContext;
  class UnaryExprContext;
  class ConversionContext;
  class EosContext; 

  class  SourceFileContext : public antlr4::ParserRuleContext {
  public:
    SourceFileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackageClauseContext *packageClause();
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);
    std::vector<ImportDeclContext *> importDecl();
    ImportDeclContext* importDecl(size_t i);
    std::vector<TopLevelDeclContext *> topLevelDecl();
    TopLevelDeclContext* topLevelDecl(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceFileContext* sourceFile();

  class  PackageClauseContext : public antlr4::ParserRuleContext {
  public:
    PackageClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageClauseContext* packageClause();

  class  ImportDeclContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ImportSpecContext *> importSpec();
    ImportSpecContext* importSpec(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportDeclContext* importDecl();

  class  ImportSpecContext : public antlr4::ParserRuleContext {
  public:
    ImportSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ImportPathContext *importPath();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportSpecContext* importSpec();

  class  ImportPathContext : public antlr4::ParserRuleContext {
  public:
    ImportPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportPathContext* importPath();

  class  TopLevelDeclContext : public antlr4::ParserRuleContext {
  public:
    TopLevelDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    FunctionDeclContext *functionDecl();
    MethodDeclContext *methodDecl();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopLevelDeclContext* topLevelDecl();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstDeclContext *constDecl();
    TypeDeclContext *typeDecl();
    VarDeclContext *varDecl();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ConstDeclContext : public antlr4::ParserRuleContext {
  public:
    ConstDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstSpecContext *> constSpec();
    ConstSpecContext* constSpec(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstDeclContext* constDecl();

  class  ConstSpecContext : public antlr4::ParserRuleContext {
  public:
    ConstSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    ExpressionListContext *expressionList();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstSpecContext* constSpec();

  class  IdentifierListContext : public antlr4::ParserRuleContext {
  public:
    IdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierListContext* identifierList();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  TypeDeclContext : public antlr4::ParserRuleContext {
  public:
    TypeDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeSpecContext *> typeSpec();
    TypeSpecContext* typeSpec(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDeclContext* typeDecl();

  class  TypeSpecContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecContext* typeSpec();

  class  FunctionDeclContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    FunctionContext *function();
    SignatureContext *signature();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclContext* functionDecl();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignatureContext *signature();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  MethodDeclContext : public antlr4::ParserRuleContext {
  public:
    MethodDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReceiverContext *receiver();
    antlr4::tree::TerminalNode *IDENTIFIER();
    FunctionContext *function();
    SignatureContext *signature();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodDeclContext* methodDecl();

  class  ReceiverContext : public antlr4::ParserRuleContext {
  public:
    ReceiverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersContext *parameters();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReceiverContext* receiver();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarSpecContext *> varSpec();
    VarSpecContext* varSpec(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclContext* varDecl();

  class  VarSpecContext : public antlr4::ParserRuleContext {
  public:
    VarSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    TypeContext *type();
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarSpecContext* varSpec();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementListContext* statementList();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    LabeledStmtContext *labeledStmt();
    SimpleStmtContext *simpleStmt();
    GoStmtContext *goStmt();
    ReturnStmtContext *returnStmt();
    BreakStmtContext *breakStmt();
    ContinueStmtContext *continueStmt();
    GotoStmtContext *gotoStmt();
    FallthroughStmtContext *fallthroughStmt();
    BlockContext *block();
    IfStmtContext *ifStmt();
    SwitchStmtContext *switchStmt();
    SelectStmtContext *selectStmt();
    ForStmtContext *forStmt();
    DeferStmtContext *deferStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  SimpleStmtContext : public antlr4::ParserRuleContext {
  public:
    SimpleStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SendStmtContext *sendStmt();
    ExpressionStmtContext *expressionStmt();
    IncDecStmtContext *incDecStmt();
    AssignmentContext *assignment();
    ShortVarDeclContext *shortVarDecl();
    EmptyStmtContext *emptyStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStmtContext* simpleStmt();

  class  ExpressionStmtContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStmtContext* expressionStmt();

  class  SendStmtContext : public antlr4::ParserRuleContext {
  public:
    SendStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SendStmtContext* sendStmt();

  class  IncDecStmtContext : public antlr4::ParserRuleContext {
  public:
    IncDecStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncDecStmtContext* incDecStmt();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionListContext *> expressionList();
    ExpressionListContext* expressionList(size_t i);
    Assign_opContext *assign_op();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  Assign_opContext : public antlr4::ParserRuleContext {
  public:
    Assign_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assign_opContext* assign_op();

  class  ShortVarDeclContext : public antlr4::ParserRuleContext {
  public:
    ShortVarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShortVarDeclContext* shortVarDecl();

  class  EmptyStmtContext : public antlr4::ParserRuleContext {
  public:
    EmptyStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStmtContext* emptyStmt();

  class  LabeledStmtContext : public antlr4::ParserRuleContext {
  public:
    LabeledStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledStmtContext* labeledStmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  BreakStmtContext : public antlr4::ParserRuleContext {
  public:
    BreakStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStmtContext* breakStmt();

  class  ContinueStmtContext : public antlr4::ParserRuleContext {
  public:
    ContinueStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStmtContext* continueStmt();

  class  GotoStmtContext : public antlr4::ParserRuleContext {
  public:
    GotoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotoStmtContext* gotoStmt();

  class  FallthroughStmtContext : public antlr4::ParserRuleContext {
  public:
    FallthroughStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FallthroughStmtContext* fallthroughStmt();

  class  DeferStmtContext : public antlr4::ParserRuleContext {
  public:
    DeferStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeferStmtContext* deferStmt();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    SimpleStmtContext *simpleStmt();
    IfStmtContext *ifStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtContext* ifStmt();

  class  SwitchStmtContext : public antlr4::ParserRuleContext {
  public:
    SwitchStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprSwitchStmtContext *exprSwitchStmt();
    TypeSwitchStmtContext *typeSwitchStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStmtContext* switchStmt();

  class  ExprSwitchStmtContext : public antlr4::ParserRuleContext {
  public:
    ExprSwitchStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleStmtContext *simpleStmt();
    ExpressionContext *expression();
    std::vector<ExprCaseClauseContext *> exprCaseClause();
    ExprCaseClauseContext* exprCaseClause(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprSwitchStmtContext* exprSwitchStmt();

  class  ExprCaseClauseContext : public antlr4::ParserRuleContext {
  public:
    ExprCaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprSwitchCaseContext *exprSwitchCase();
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprCaseClauseContext* exprCaseClause();

  class  ExprSwitchCaseContext : public antlr4::ParserRuleContext {
  public:
    ExprSwitchCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionListContext *expressionList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprSwitchCaseContext* exprSwitchCase();

  class  TypeSwitchStmtContext : public antlr4::ParserRuleContext {
  public:
    TypeSwitchStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSwitchGuardContext *typeSwitchGuard();
    SimpleStmtContext *simpleStmt();
    std::vector<TypeCaseClauseContext *> typeCaseClause();
    TypeCaseClauseContext* typeCaseClause(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSwitchStmtContext* typeSwitchStmt();

  class  TypeSwitchGuardContext : public antlr4::ParserRuleContext {
  public:
    TypeSwitchGuardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExprContext *primaryExpr();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSwitchGuardContext* typeSwitchGuard();

  class  TypeCaseClauseContext : public antlr4::ParserRuleContext {
  public:
    TypeCaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSwitchCaseContext *typeSwitchCase();
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeCaseClauseContext* typeCaseClause();

  class  TypeSwitchCaseContext : public antlr4::ParserRuleContext {
  public:
    TypeSwitchCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeListContext *typeList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSwitchCaseContext* typeSwitchCase();

  class  TypeListContext : public antlr4::ParserRuleContext {
  public:
    TypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeListContext* typeList();

  class  SelectStmtContext : public antlr4::ParserRuleContext {
  public:
    SelectStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CommClauseContext *> commClause();
    CommClauseContext* commClause(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStmtContext* selectStmt();

  class  CommClauseContext : public antlr4::ParserRuleContext {
  public:
    CommClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommCaseContext *commCase();
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommClauseContext* commClause();

  class  CommCaseContext : public antlr4::ParserRuleContext {
  public:
    CommCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SendStmtContext *sendStmt();
    RecvStmtContext *recvStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommCaseContext* commCase();

  class  RecvStmtContext : public antlr4::ParserRuleContext {
  public:
    RecvStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ExpressionListContext *expressionList();
    IdentifierListContext *identifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecvStmtContext* recvStmt();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    ExpressionContext *expression();
    ForClauseContext *forClause();
    RangeClauseContext *rangeClause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStmtContext* forStmt();

  class  ForClauseContext : public antlr4::ParserRuleContext {
  public:
    ForClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleStmtContext *> simpleStmt();
    SimpleStmtContext* simpleStmt(size_t i);
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForClauseContext* forClause();

  class  RangeClauseContext : public antlr4::ParserRuleContext {
  public:
    RangeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ExpressionListContext *expressionList();
    IdentifierListContext *identifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeClauseContext* rangeClause();

  class  GoStmtContext : public antlr4::ParserRuleContext {
  public:
    GoStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GoStmtContext* goStmt();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    TypeLitContext *typeLit();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    QualifiedIdentContext *qualifiedIdent();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  TypeLitContext : public antlr4::ParserRuleContext {
  public:
    TypeLitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayTypeContext *arrayType();
    StructTypeContext *structType();
    PointerTypeContext *pointerType();
    FunctionTypeContext *functionType();
    InterfaceTypeContext *interfaceType();
    SliceTypeContext *sliceType();
    MapTypeContext *mapType();
    ChannelTypeContext *channelType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeLitContext* typeLit();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayLengthContext *arrayLength();
    ElementTypeContext *elementType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  ArrayLengthContext : public antlr4::ParserRuleContext {
  public:
    ArrayLengthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayLengthContext* arrayLength();

  class  ElementTypeContext : public antlr4::ParserRuleContext {
  public:
    ElementTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementTypeContext* elementType();

  class  PointerTypeContext : public antlr4::ParserRuleContext {
  public:
    PointerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerTypeContext* pointerType();

  class  InterfaceTypeContext : public antlr4::ParserRuleContext {
  public:
    InterfaceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MethodSpecContext *> methodSpec();
    MethodSpecContext* methodSpec(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceTypeContext* interfaceType();

  class  SliceTypeContext : public antlr4::ParserRuleContext {
  public:
    SliceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementTypeContext *elementType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SliceTypeContext* sliceType();

  class  MapTypeContext : public antlr4::ParserRuleContext {
  public:
    MapTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ElementTypeContext *elementType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MapTypeContext* mapType();

  class  ChannelTypeContext : public antlr4::ParserRuleContext {
  public:
    ChannelTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementTypeContext *elementType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChannelTypeContext* channelType();

  class  MethodSpecContext : public antlr4::ParserRuleContext {
  public:
    MethodSpecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ParametersContext *parameters();
    ResultContext *result();
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodSpecContext* methodSpec();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignatureContext *signature();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeContext* functionType();

  class  SignatureContext : public antlr4::ParserRuleContext {
  public:
    SignatureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersContext *parameters();
    ResultContext *result();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignatureContext* signature();

  class  ResultContext : public antlr4::ParserRuleContext {
  public:
    ResultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParametersContext *parameters();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultContext* result();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterListContext *parameterList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterDeclContext *> parameterDecl();
    ParameterDeclContext* parameterDecl(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterDeclContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    IdentifierListContext *identifierList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclContext* parameterDecl();

  class  OperandContext : public antlr4::ParserRuleContext {
  public:
    OperandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    OperandNameContext *operandName();
    MethodExprContext *methodExpr();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandContext* operand();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicLitContext *basicLit();
    CompositeLitContext *compositeLit();
    FunctionLitContext *functionLit();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  BasicLitContext : public antlr4::ParserRuleContext {
  public:
    BasicLitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LIT();
    antlr4::tree::TerminalNode *FLOAT_LIT();
    antlr4::tree::TerminalNode *IMAGINARY_LIT();
    antlr4::tree::TerminalNode *RUNE_LIT();
    antlr4::tree::TerminalNode *STRING_LIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicLitContext* basicLit();

  class  OperandNameContext : public antlr4::ParserRuleContext {
  public:
    OperandNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    QualifiedIdentContext *qualifiedIdent();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperandNameContext* operandName();

  class  QualifiedIdentContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdentContext* qualifiedIdent();

  class  CompositeLitContext : public antlr4::ParserRuleContext {
  public:
    CompositeLitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralTypeContext *literalType();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompositeLitContext* compositeLit();

  class  LiteralTypeContext : public antlr4::ParserRuleContext {
  public:
    LiteralTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructTypeContext *structType();
    ArrayTypeContext *arrayType();
    ElementTypeContext *elementType();
    SliceTypeContext *sliceType();
    MapTypeContext *mapType();
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralTypeContext* literalType();

  class  LiteralValueContext : public antlr4::ParserRuleContext {
  public:
    LiteralValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementListContext *elementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralValueContext* literalValue();

  class  ElementListContext : public antlr4::ParserRuleContext {
  public:
    ElementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeyedElementContext *> keyedElement();
    KeyedElementContext* keyedElement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementListContext* elementList();

  class  KeyedElementContext : public antlr4::ParserRuleContext {
  public:
    KeyedElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElementContext *element();
    KeyContext *key();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyedElementContext* keyedElement();

  class  KeyContext : public antlr4::ParserRuleContext {
  public:
    KeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyContext* key();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementContext* element();

  class  StructTypeContext : public antlr4::ParserRuleContext {
  public:
    StructTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldDeclContext *> fieldDecl();
    FieldDeclContext* fieldDecl(size_t i);
    std::vector<EosContext *> eos();
    EosContext* eos(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructTypeContext* structType();

  class  FieldDeclContext : public antlr4::ParserRuleContext {
  public:
    FieldDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierListContext *identifierList();
    TypeContext *type();
    AnonymousFieldContext *anonymousField();
    antlr4::tree::TerminalNode *STRING_LIT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDeclContext* fieldDecl();

  class  AnonymousFieldContext : public antlr4::ParserRuleContext {
  public:
    AnonymousFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnonymousFieldContext* anonymousField();

  class  FunctionLitContext : public antlr4::ParserRuleContext {
  public:
    FunctionLitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionLitContext* functionLit();

  class  PrimaryExprContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperandContext *operand();
    ConversionContext *conversion();
    PrimaryExprContext *primaryExpr();
    SelectorContext *selector();
    IndexContext *index();
    SliceContext *slice();
    TypeAssertionContext *typeAssertion();
    ArgumentsContext *arguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExprContext* primaryExpr();
  PrimaryExprContext* primaryExpr(int precedence);
  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectorContext* selector();

  class  IndexContext : public antlr4::ParserRuleContext {
  public:
    IndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexContext* index();

  class  SliceContext : public antlr4::ParserRuleContext {
  public:
    SliceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SliceContext* slice();

  class  TypeAssertionContext : public antlr4::ParserRuleContext {
  public:
    TypeAssertionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeAssertionContext* typeAssertion();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionListContext *expressionList();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  MethodExprContext : public antlr4::ParserRuleContext {
  public:
    MethodExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReceiverTypeContext *receiverType();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodExprContext* methodExpr();

  class  ReceiverTypeContext : public antlr4::ParserRuleContext {
  public:
    ReceiverTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    ReceiverTypeContext *receiverType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReceiverTypeContext* receiverType();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExprContext *unaryExpr();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  UnaryExprContext : public antlr4::ParserRuleContext {
  public:
    UnaryExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExprContext *primaryExpr();
    UnaryExprContext *unaryExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExprContext* unaryExpr();

  class  ConversionContext : public antlr4::ParserRuleContext {
  public:
    ConversionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionContext* conversion();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EosContext* eos();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool methodSpecSempred(MethodSpecContext *_localctx, size_t predicateIndex);
  bool signatureSempred(SignatureContext *_localctx, size_t predicateIndex);
  bool fieldDeclSempred(FieldDeclContext *_localctx, size_t predicateIndex);
  bool primaryExprSempred(PrimaryExprContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool eosSempred(EosContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

