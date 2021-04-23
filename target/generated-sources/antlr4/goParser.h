
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from go.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  goParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, PACKAGE = 25, CONST = 26, 
    TYPE = 27, ARRAY = 28, OF = 29, RECORD = 30, VAR = 31, BEGIN = 32, END = 33, 
    DIV = 34, MOD = 35, AND = 36, OR = 37, NOT = 38, IF = 39, THEN = 40, 
    ELSE = 41, CASE = 42, FOR = 43, PRINT = 44, PRINTLN = 45, FUNC = 46, 
    SWITCH = 47, DEFAULT = 48, IDENTIFIER = 49, INT = 50, DOUBLE = 51, NEWLINE = 52, 
    WS = 53, QUOTE = 54, CHAR = 55, STRING = 56, COMMENT = 57
  };

  enum {
    RuleProgram = 0, RuleProgramHeader = 1, RuleProgramIdentifier = 2, RuleBlock = 3, 
    RuleDeclarations = 4, RuleConstantsPart = 5, RuleConstantDefinitionsList = 6, 
    RuleConstantDefinition = 7, RuleConstantIdentifier = 8, RuleConstant = 9, 
    RuleSign = 10, RuleTypesPart = 11, RuleTypeDefinitionsList = 12, RuleTypeDefinition = 13, 
    RuleTypeIdentifier = 14, RuleTypeSpecification = 15, RuleSimpleType = 16, 
    RuleEnumerationType = 17, RuleEnumerationConstant = 18, RuleSubrangeType = 19, 
    RuleVariablesPart = 20, RuleVariableDeclarationsList = 21, RuleVariableDeclarations = 22, 
    RuleVariableIdentifierList = 23, RuleVariableIdentifier = 24, RuleRoutinesPart = 25, 
    RuleRoutineDefinition = 26, RuleFunctionHead = 27, RuleRoutineIdentifier = 28, 
    RuleParameters = 29, RuleParameterDeclarationsList = 30, RuleParameterDeclarations = 31, 
    RuleParameterIdentifierList = 32, RuleParameterIdentifier = 33, RuleStatement = 34, 
    RuleCompoundStatement = 35, RuleEmptyStatement = 36, RuleStatementList = 37, 
    RuleAssignmentStatement = 38, RuleLhs = 39, RuleRhs = 40, RuleIfStatement = 41, 
    RuleTrueStatement = 42, RuleFalseStatement = 43, RuleCaseStatement = 44, 
    RuleCaseBranchList = 45, RuleCaseBranch = 46, RuleCaseConstant = 47, 
    RuleForStatement = 48, RuleProcedureCallStatement = 49, RuleProcedureName = 50, 
    RuleArgumentList = 51, RuleArgument = 52, RuleWriteStatement = 53, RuleWritelnStatement = 54, 
    RuleWriteArguments = 55, RuleWriteArgument = 56, RuleFieldWidth = 57, 
    RuleDecimalPlaces = 58, RuleExpression = 59, RuleSimpleExpression = 60, 
    RuleTerm = 61, RuleFactor = 62, RuleVariable = 63, RuleModifier = 64, 
    RuleIndexList = 65, RuleIndex = 66, RuleField = 67, RuleFunctionCall = 68, 
    RuleFunctionName = 69, RuleNumber = 70, RuleUnsignedNumber = 71, RuleIntegerConstant = 72, 
    RuleRealConstant = 73, RuleCharacterConstant = 74, RuleStringConstant = 75, 
    RuleRelOp = 76, RuleAddOp = 77, RuleMulOp = 78
  };

  goParser(antlr4::TokenStream *input);
  ~goParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class ProgramHeaderContext;
  class ProgramIdentifierContext;
  class BlockContext;
  class DeclarationsContext;
  class ConstantsPartContext;
  class ConstantDefinitionsListContext;
  class ConstantDefinitionContext;
  class ConstantIdentifierContext;
  class ConstantContext;
  class SignContext;
  class TypesPartContext;
  class TypeDefinitionsListContext;
  class TypeDefinitionContext;
  class TypeIdentifierContext;
  class TypeSpecificationContext;
  class SimpleTypeContext;
  class EnumerationTypeContext;
  class EnumerationConstantContext;
  class SubrangeTypeContext;
  class VariablesPartContext;
  class VariableDeclarationsListContext;
  class VariableDeclarationsContext;
  class VariableIdentifierListContext;
  class VariableIdentifierContext;
  class RoutinesPartContext;
  class RoutineDefinitionContext;
  class FunctionHeadContext;
  class RoutineIdentifierContext;
  class ParametersContext;
  class ParameterDeclarationsListContext;
  class ParameterDeclarationsContext;
  class ParameterIdentifierListContext;
  class ParameterIdentifierContext;
  class StatementContext;
  class CompoundStatementContext;
  class EmptyStatementContext;
  class StatementListContext;
  class AssignmentStatementContext;
  class LhsContext;
  class RhsContext;
  class IfStatementContext;
  class TrueStatementContext;
  class FalseStatementContext;
  class CaseStatementContext;
  class CaseBranchListContext;
  class CaseBranchContext;
  class CaseConstantContext;
  class ForStatementContext;
  class ProcedureCallStatementContext;
  class ProcedureNameContext;
  class ArgumentListContext;
  class ArgumentContext;
  class WriteStatementContext;
  class WritelnStatementContext;
  class WriteArgumentsContext;
  class WriteArgumentContext;
  class FieldWidthContext;
  class DecimalPlacesContext;
  class ExpressionContext;
  class SimpleExpressionContext;
  class TermContext;
  class FactorContext;
  class VariableContext;
  class ModifierContext;
  class IndexListContext;
  class IndexContext;
  class FieldContext;
  class FunctionCallContext;
  class FunctionNameContext;
  class NumberContext;
  class UnsignedNumberContext;
  class IntegerConstantContext;
  class RealConstantContext;
  class CharacterConstantContext;
  class StringConstantContext;
  class RelOpContext;
  class AddOpContext;
  class MulOpContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramHeaderContext *programHeader();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  ProgramHeaderContext : public antlr4::ParserRuleContext {
  public:
    ProgramHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    ProgramIdentifierContext *programIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramHeaderContext* programHeader();

  class  ProgramIdentifierContext : public antlr4::ParserRuleContext {
  public:
    SymtabEntry * entry = nullptr;
    ProgramIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramIdentifierContext* programIdentifier();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationsContext *declarations();
    CompoundStatementContext *compoundStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  DeclarationsContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantsPartContext *constantsPart();
    TypesPartContext *typesPart();
    VariablesPartContext *variablesPart();
    RoutinesPartContext *routinesPart();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsContext* declarations();

  class  ConstantsPartContext : public antlr4::ParserRuleContext {
  public:
    ConstantsPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    ConstantDefinitionsListContext *constantDefinitionsList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantsPartContext* constantsPart();

  class  ConstantDefinitionsListContext : public antlr4::ParserRuleContext {
  public:
    ConstantDefinitionsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantDefinitionContext *> constantDefinition();
    ConstantDefinitionContext* constantDefinition(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDefinitionsListContext* constantDefinitionsList();

  class  ConstantDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ConstantDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantIdentifierContext *constantIdentifier();
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDefinitionContext* constantDefinition();

  class  ConstantIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    ConstantIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantIdentifierContext* constantIdentifier();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    Object value = nullptr;
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    UnsignedNumberContext *unsignedNumber();
    SignContext *sign();
    CharacterConstantContext *characterConstant();
    StringConstantContext *stringConstant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  TypesPartContext : public antlr4::ParserRuleContext {
  public:
    TypesPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    TypeDefinitionsListContext *typeDefinitionsList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypesPartContext* typesPart();

  class  TypeDefinitionsListContext : public antlr4::ParserRuleContext {
  public:
    TypeDefinitionsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeDefinitionContext *> typeDefinition();
    TypeDefinitionContext* typeDefinition(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefinitionsListContext* typeDefinitionsList();

  class  TypeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    TypeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    TypeSpecificationContext *typeSpecification();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefinitionContext* typeDefinition();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  TypeSpecificationContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    TypeSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TypeSpecificationContext() = default;
    void copyFrom(TypeSpecificationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleTypespecContext : public TypeSpecificationContext {
  public:
    SimpleTypespecContext(TypeSpecificationContext *ctx);

    SimpleTypeContext *simpleType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeSpecificationContext* typeSpecification();

  class  SimpleTypeContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SimpleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SimpleTypeContext() = default;
    void copyFrom(SimpleTypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubrangeTypespecContext : public SimpleTypeContext {
  public:
    SubrangeTypespecContext(SimpleTypeContext *ctx);

    SubrangeTypeContext *subrangeType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EnumerationTypespecContext : public SimpleTypeContext {
  public:
    EnumerationTypespecContext(SimpleTypeContext *ctx);

    EnumerationTypeContext *enumerationType();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeIdentifierTypespecContext : public SimpleTypeContext {
  public:
    TypeIdentifierTypespecContext(SimpleTypeContext *ctx);

    TypeIdentifierContext *typeIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SimpleTypeContext* simpleType();

  class  EnumerationTypeContext : public antlr4::ParserRuleContext {
  public:
    EnumerationTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumerationConstantContext *> enumerationConstant();
    EnumerationConstantContext* enumerationConstant(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumerationTypeContext* enumerationType();

  class  EnumerationConstantContext : public antlr4::ParserRuleContext {
  public:
    EnumerationConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantIdentifierContext *constantIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumerationConstantContext* enumerationConstant();

  class  SubrangeTypeContext : public antlr4::ParserRuleContext {
  public:
    SubrangeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubrangeTypeContext* subrangeType();

  class  VariablesPartContext : public antlr4::ParserRuleContext {
  public:
    VariablesPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    VariableDeclarationsListContext *variableDeclarationsList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariablesPartContext* variablesPart();

  class  VariableDeclarationsListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclarationsContext *variableDeclarations();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationsListContext* variableDeclarationsList();

  class  VariableDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableIdentifierListContext *variableIdentifierList();
    TypeSpecificationContext *typeSpecification();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationsContext* variableDeclarations();

  class  VariableIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    VariableIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableIdentifierContext *> variableIdentifier();
    VariableIdentifierContext* variableIdentifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableIdentifierListContext* variableIdentifierList();

  class  VariableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    VariableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableIdentifierContext* variableIdentifier();

  class  RoutinesPartContext : public antlr4::ParserRuleContext {
  public:
    RoutinesPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RoutineDefinitionContext *> routineDefinition();
    RoutineDefinitionContext* routineDefinition(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutinesPartContext* routinesPart();

  class  RoutineDefinitionContext : public antlr4::ParserRuleContext {
  public:
    RoutineDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionHeadContext *functionHead();
    ParametersContext *parameters();
    BlockContext *block();
    antlr4::tree::TerminalNode *TYPE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineDefinitionContext* routineDefinition();

  class  FunctionHeadContext : public antlr4::ParserRuleContext {
  public:
    FunctionHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    RoutineIdentifierContext *routineIdentifier();
    TypeIdentifierContext *typeIdentifier();
    ParametersContext *parameters();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionHeadContext* functionHead();

  class  RoutineIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    RoutineIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RoutineIdentifierContext* routineIdentifier();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterDeclarationsListContext *parameterDeclarationsList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

  class  ParameterDeclarationsListContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationsListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterDeclarationsContext *> parameterDeclarations();
    ParameterDeclarationsContext* parameterDeclarations(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationsListContext* parameterDeclarationsList();

  class  ParameterDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    ParameterDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterIdentifierListContext *parameterIdentifierList();
    TypeIdentifierContext *typeIdentifier();
    antlr4::tree::TerminalNode *VAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterDeclarationsContext* parameterDeclarations();

  class  ParameterIdentifierListContext : public antlr4::ParserRuleContext {
  public:
    ParameterIdentifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterIdentifierContext *> parameterIdentifier();
    ParameterIdentifierContext* parameterIdentifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterIdentifierListContext* parameterIdentifierList();

  class  ParameterIdentifierContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    ParameterIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterIdentifierContext* parameterIdentifier();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    AssignmentStatementContext *assignmentStatement();
    IfStatementContext *ifStatement();
    CaseStatementContext *caseStatement();
    ForStatementContext *forStatement();
    WriteStatementContext *writeStatement();
    WritelnStatementContext *writelnStatement();
    ProcedureCallStatementContext *procedureCallStatement();
    EmptyStatementContext *emptyStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementListContext *statementList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  EmptyStatementContext : public antlr4::ParserRuleContext {
  public:
    EmptyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatementContext* emptyStatement();

  class  StatementListContext : public antlr4::ParserRuleContext {
  public:
    StatementListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementListContext* statementList();

  class  AssignmentStatementContext : public antlr4::ParserRuleContext {
  public:
    AssignmentStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LhsContext *lhs();
    RhsContext *rhs();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentStatementContext* assignmentStatement();

  class  LhsContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    LhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LhsContext* lhs();

  class  RhsContext : public antlr4::ParserRuleContext {
  public:
    RhsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RhsContext* rhs();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    TrueStatementContext *trueStatement();
    antlr4::tree::TerminalNode *ELSE();
    FalseStatementContext *falseStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  TrueStatementContext : public antlr4::ParserRuleContext {
  public:
    TrueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrueStatementContext* trueStatement();

  class  FalseStatementContext : public antlr4::ParserRuleContext {
  public:
    FalseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FalseStatementContext* falseStatement();

  class  CaseStatementContext : public antlr4::ParserRuleContext {
  public:
    map<int, PascalParser::StatementContext*> * jumpTable = nullptr;
    CaseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    ExpressionContext *expression();
    CaseBranchListContext *caseBranchList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseStatementContext* caseStatement();

  class  CaseBranchListContext : public antlr4::ParserRuleContext {
  public:
    CaseBranchListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaseBranchContext *> caseBranch();
    CaseBranchContext* caseBranch(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseBranchListContext* caseBranchList();

  class  CaseBranchContext : public antlr4::ParserRuleContext {
  public:
    CaseBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    CaseConstantContext *caseConstant();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseBranchContext* caseBranch();

  class  CaseConstantContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    int value = 0;
    CaseConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseConstantContext* caseConstant();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    StatementContext *statement();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    VariableContext *variable();
    AssignmentStatementContext *assignmentStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  ProcedureCallStatementContext : public antlr4::ParserRuleContext {
  public:
    ProcedureCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProcedureNameContext *procedureName();
    ArgumentListContext *argumentList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureCallStatementContext* procedureCallStatement();

  class  ProcedureNameContext : public antlr4::ParserRuleContext {
  public:
    SymtabEntry * entry = nullptr;
    ProcedureNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureNameContext* procedureName();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  WriteStatementContext : public antlr4::ParserRuleContext {
  public:
    WriteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    WriteArgumentsContext *writeArguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WriteStatementContext* writeStatement();

  class  WritelnStatementContext : public antlr4::ParserRuleContext {
  public:
    WritelnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINTLN();
    WriteArgumentsContext *writeArguments();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritelnStatementContext* writelnStatement();

  class  WriteArgumentsContext : public antlr4::ParserRuleContext {
  public:
    WriteArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<WriteArgumentContext *> writeArgument();
    WriteArgumentContext* writeArgument(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WriteArgumentsContext* writeArguments();

  class  WriteArgumentContext : public antlr4::ParserRuleContext {
  public:
    WriteArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    FieldWidthContext *fieldWidth();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WriteArgumentContext* writeArgument();

  class  FieldWidthContext : public antlr4::ParserRuleContext {
  public:
    FieldWidthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();
    SignContext *sign();
    DecimalPlacesContext *decimalPlaces();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldWidthContext* fieldWidth();

  class  DecimalPlacesContext : public antlr4::ParserRuleContext {
  public:
    DecimalPlacesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecimalPlacesContext* decimalPlaces();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    RelOpContext *relOp();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TermContext *> term();
    TermContext* term(size_t i);
    SignContext *sign();
    std::vector<AddOpContext *> addOp();
    AddOpContext* addOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<MulOpContext *> mulOp();
    MulOpContext* mulOp(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NumberFactorContext : public FactorContext {
  public:
    NumberFactorContext(FactorContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringFactorContext : public FactorContext {
  public:
    StringFactorContext(FactorContext *ctx);

    StringConstantContext *stringConstant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharacterFactorContext : public FactorContext {
  public:
    CharacterFactorContext(FactorContext *ctx);

    CharacterConstantContext *characterConstant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableFactorContext : public FactorContext {
  public:
    VariableFactorContext(FactorContext *ctx);

    VariableContext *variable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallFactorContext : public FactorContext {
  public:
    FunctionCallFactorContext(FactorContext *ctx);

    FunctionCallContext *functionCall();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NotFactorContext : public FactorContext {
  public:
    NotFactorContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    FactorContext *factor();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedFactorContext : public FactorContext {
  public:
    ParenthesizedFactorContext(FactorContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableIdentifierContext *variableIdentifier();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IndexListContext *indexList();
    FieldContext *field();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierContext* modifier();

  class  IndexListContext : public antlr4::ParserRuleContext {
  public:
    IndexListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IndexContext *> index();
    IndexContext* index(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexListContext* indexList();

  class  IndexContext : public antlr4::ParserRuleContext {
  public:
    IndexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexContext* index();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionNameContext *functionName();
    ArgumentListContext *argumentList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    Typespec * type = nullptr;
    SymtabEntry * entry = nullptr;
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnsignedNumberContext *unsignedNumber();
    SignContext *sign();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  UnsignedNumberContext : public antlr4::ParserRuleContext {
  public:
    UnsignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerConstantContext *integerConstant();
    RealConstantContext *realConstant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnsignedNumberContext* unsignedNumber();

  class  IntegerConstantContext : public antlr4::ParserRuleContext {
  public:
    IntegerConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerConstantContext* integerConstant();

  class  RealConstantContext : public antlr4::ParserRuleContext {
  public:
    RealConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOUBLE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RealConstantContext* realConstant();

  class  CharacterConstantContext : public antlr4::ParserRuleContext {
  public:
    CharacterConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharacterConstantContext* characterConstant();

  class  StringConstantContext : public antlr4::ParserRuleContext {
  public:
    StringConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringConstantContext* stringConstant();

  class  RelOpContext : public antlr4::ParserRuleContext {
  public:
    RelOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelOpContext* relOp();

  class  AddOpContext : public antlr4::ParserRuleContext {
  public:
    AddOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddOpContext* addOp();

  class  MulOpContext : public antlr4::ParserRuleContext {
  public:
    MulOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *AND();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulOpContext* mulOp();


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

