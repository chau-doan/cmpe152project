
    #include <map>
    #include "intermediate/symtab/Symtab.h"
    #include "intermediate/type/Typespec.h"
    using namespace intermediate::symtab;
    using namespace intermediate::type;


// Generated from go.g4 by ANTLR 4.9.2


#include "goVisitor.h"

#include "goParser.h"


using namespace antlrcpp;
using namespace antlr4;

goParser::goParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

goParser::~goParser() {
  delete _interpreter;
}

std::string goParser::getGrammarFileName() const {
  return "go.g4";
}

const std::vector<std::string>& goParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& goParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

goParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ProgramHeaderContext* goParser::ProgramContext::programHeader() {
  return getRuleContext<goParser::ProgramHeaderContext>(0);
}

goParser::BlockContext* goParser::ProgramContext::block() {
  return getRuleContext<goParser::BlockContext>(0);
}


size_t goParser::ProgramContext::getRuleIndex() const {
  return goParser::RuleProgram;
}


antlrcpp::Any goParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

goParser::ProgramContext* goParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, goParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    programHeader();
    setState(171);
    block();
    setState(172);
    match(goParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramHeaderContext ------------------------------------------------------------------

goParser::ProgramHeaderContext::ProgramHeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ProgramHeaderContext::PACKAGE() {
  return getToken(goParser::PACKAGE, 0);
}

goParser::ProgramIdentifierContext* goParser::ProgramHeaderContext::programIdentifier() {
  return getRuleContext<goParser::ProgramIdentifierContext>(0);
}


size_t goParser::ProgramHeaderContext::getRuleIndex() const {
  return goParser::RuleProgramHeader;
}


antlrcpp::Any goParser::ProgramHeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitProgramHeader(this);
  else
    return visitor->visitChildren(this);
}

goParser::ProgramHeaderContext* goParser::programHeader() {
  ProgramHeaderContext *_localctx = _tracker.createInstance<ProgramHeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, goParser::RuleProgramHeader);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(goParser::PACKAGE);
    setState(175);
    programIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramIdentifierContext ------------------------------------------------------------------

goParser::ProgramIdentifierContext::ProgramIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ProgramIdentifierContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::ProgramIdentifierContext::getRuleIndex() const {
  return goParser::RuleProgramIdentifier;
}


antlrcpp::Any goParser::ProgramIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitProgramIdentifier(this);
  else
    return visitor->visitChildren(this);
}

goParser::ProgramIdentifierContext* goParser::programIdentifier() {
  ProgramIdentifierContext *_localctx = _tracker.createInstance<ProgramIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 4, goParser::RuleProgramIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

goParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::DeclarationsContext* goParser::BlockContext::declarations() {
  return getRuleContext<goParser::DeclarationsContext>(0);
}

goParser::CompoundStatementContext* goParser::BlockContext::compoundStatement() {
  return getRuleContext<goParser::CompoundStatementContext>(0);
}


size_t goParser::BlockContext::getRuleIndex() const {
  return goParser::RuleBlock;
}


antlrcpp::Any goParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

goParser::BlockContext* goParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, goParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    declarations();
    setState(180);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

goParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ConstantsPartContext* goParser::DeclarationsContext::constantsPart() {
  return getRuleContext<goParser::ConstantsPartContext>(0);
}

goParser::TypesPartContext* goParser::DeclarationsContext::typesPart() {
  return getRuleContext<goParser::TypesPartContext>(0);
}

goParser::VariablesPartContext* goParser::DeclarationsContext::variablesPart() {
  return getRuleContext<goParser::VariablesPartContext>(0);
}

goParser::RoutinesPartContext* goParser::DeclarationsContext::routinesPart() {
  return getRuleContext<goParser::RoutinesPartContext>(0);
}


size_t goParser::DeclarationsContext::getRuleIndex() const {
  return goParser::RuleDeclarations;
}


antlrcpp::Any goParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

goParser::DeclarationsContext* goParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, goParser::RuleDeclarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::CONST) {
      setState(182);
      constantsPart();
      setState(183);
      match(goParser::T__1);
    }
    setState(190);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::TYPE) {
      setState(187);
      typesPart();
      setState(188);
      match(goParser::T__1);
    }
    setState(195);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::VAR) {
      setState(192);
      variablesPart();
      setState(193);
      match(goParser::T__1);
    }
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::FUNC) {
      setState(197);
      routinesPart();
      setState(198);
      match(goParser::T__1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantsPartContext ------------------------------------------------------------------

goParser::ConstantsPartContext::ConstantsPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ConstantsPartContext::CONST() {
  return getToken(goParser::CONST, 0);
}

goParser::ConstantDefinitionsListContext* goParser::ConstantsPartContext::constantDefinitionsList() {
  return getRuleContext<goParser::ConstantDefinitionsListContext>(0);
}


size_t goParser::ConstantsPartContext::getRuleIndex() const {
  return goParser::RuleConstantsPart;
}


antlrcpp::Any goParser::ConstantsPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConstantsPart(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConstantsPartContext* goParser::constantsPart() {
  ConstantsPartContext *_localctx = _tracker.createInstance<ConstantsPartContext>(_ctx, getState());
  enterRule(_localctx, 10, goParser::RuleConstantsPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(goParser::CONST);
    setState(203);
    constantDefinitionsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionsListContext ------------------------------------------------------------------

goParser::ConstantDefinitionsListContext::ConstantDefinitionsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ConstantDefinitionContext *> goParser::ConstantDefinitionsListContext::constantDefinition() {
  return getRuleContexts<goParser::ConstantDefinitionContext>();
}

goParser::ConstantDefinitionContext* goParser::ConstantDefinitionsListContext::constantDefinition(size_t i) {
  return getRuleContext<goParser::ConstantDefinitionContext>(i);
}


size_t goParser::ConstantDefinitionsListContext::getRuleIndex() const {
  return goParser::RuleConstantDefinitionsList;
}


antlrcpp::Any goParser::ConstantDefinitionsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConstantDefinitionsList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConstantDefinitionsListContext* goParser::constantDefinitionsList() {
  ConstantDefinitionsListContext *_localctx = _tracker.createInstance<ConstantDefinitionsListContext>(_ctx, getState());
  enterRule(_localctx, 12, goParser::RuleConstantDefinitionsList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(205);
    constantDefinition();
    setState(210);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(206);
        match(goParser::T__1);
        setState(207);
        constantDefinition(); 
      }
      setState(212);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionContext ------------------------------------------------------------------

goParser::ConstantDefinitionContext::ConstantDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ConstantIdentifierContext* goParser::ConstantDefinitionContext::constantIdentifier() {
  return getRuleContext<goParser::ConstantIdentifierContext>(0);
}

goParser::ConstantContext* goParser::ConstantDefinitionContext::constant() {
  return getRuleContext<goParser::ConstantContext>(0);
}


size_t goParser::ConstantDefinitionContext::getRuleIndex() const {
  return goParser::RuleConstantDefinition;
}


antlrcpp::Any goParser::ConstantDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConstantDefinition(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConstantDefinitionContext* goParser::constantDefinition() {
  ConstantDefinitionContext *_localctx = _tracker.createInstance<ConstantDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 14, goParser::RuleConstantDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    constantIdentifier();
    setState(214);
    match(goParser::T__2);
    setState(215);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantIdentifierContext ------------------------------------------------------------------

goParser::ConstantIdentifierContext::ConstantIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ConstantIdentifierContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::ConstantIdentifierContext::getRuleIndex() const {
  return goParser::RuleConstantIdentifier;
}


antlrcpp::Any goParser::ConstantIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConstantIdentifier(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConstantIdentifierContext* goParser::constantIdentifier() {
  ConstantIdentifierContext *_localctx = _tracker.createInstance<ConstantIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 16, goParser::RuleConstantIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

goParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ConstantContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::UnsignedNumberContext* goParser::ConstantContext::unsignedNumber() {
  return getRuleContext<goParser::UnsignedNumberContext>(0);
}

goParser::SignContext* goParser::ConstantContext::sign() {
  return getRuleContext<goParser::SignContext>(0);
}

goParser::CharacterConstantContext* goParser::ConstantContext::characterConstant() {
  return getRuleContext<goParser::CharacterConstantContext>(0);
}

goParser::StringConstantContext* goParser::ConstantContext::stringConstant() {
  return getRuleContext<goParser::StringConstantContext>(0);
}


size_t goParser::ConstantContext::getRuleIndex() const {
  return goParser::RuleConstant;
}


antlrcpp::Any goParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConstantContext* goParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 18, goParser::RuleConstant);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(228);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__3:
      case goParser::T__4:
      case goParser::IDENTIFIER:
      case goParser::INT:
      case goParser::DOUBLE: {
        enterOuterAlt(_localctx, 1);
        setState(220);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == goParser::T__3

        || _la == goParser::T__4) {
          setState(219);
          sign();
        }
        setState(224);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case goParser::IDENTIFIER: {
            setState(222);
            match(goParser::IDENTIFIER);
            break;
          }

          case goParser::INT:
          case goParser::DOUBLE: {
            setState(223);
            unsignedNumber();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case goParser::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(226);
        characterConstant();
        break;
      }

      case goParser::STRING: {
        enterOuterAlt(_localctx, 3);
        setState(227);
        stringConstant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

goParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::SignContext::getRuleIndex() const {
  return goParser::RuleSign;
}


antlrcpp::Any goParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

goParser::SignContext* goParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 20, goParser::RuleSign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    _la = _input->LA(1);
    if (!(_la == goParser::T__3

    || _la == goParser::T__4)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesPartContext ------------------------------------------------------------------

goParser::TypesPartContext::TypesPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::TypesPartContext::TYPE() {
  return getToken(goParser::TYPE, 0);
}

goParser::TypeDefinitionsListContext* goParser::TypesPartContext::typeDefinitionsList() {
  return getRuleContext<goParser::TypeDefinitionsListContext>(0);
}


size_t goParser::TypesPartContext::getRuleIndex() const {
  return goParser::RuleTypesPart;
}


antlrcpp::Any goParser::TypesPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypesPart(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypesPartContext* goParser::typesPart() {
  TypesPartContext *_localctx = _tracker.createInstance<TypesPartContext>(_ctx, getState());
  enterRule(_localctx, 22, goParser::RuleTypesPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(goParser::TYPE);
    setState(233);
    typeDefinitionsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionsListContext ------------------------------------------------------------------

goParser::TypeDefinitionsListContext::TypeDefinitionsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::TypeDefinitionContext *> goParser::TypeDefinitionsListContext::typeDefinition() {
  return getRuleContexts<goParser::TypeDefinitionContext>();
}

goParser::TypeDefinitionContext* goParser::TypeDefinitionsListContext::typeDefinition(size_t i) {
  return getRuleContext<goParser::TypeDefinitionContext>(i);
}


size_t goParser::TypeDefinitionsListContext::getRuleIndex() const {
  return goParser::RuleTypeDefinitionsList;
}


antlrcpp::Any goParser::TypeDefinitionsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeDefinitionsList(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeDefinitionsListContext* goParser::typeDefinitionsList() {
  TypeDefinitionsListContext *_localctx = _tracker.createInstance<TypeDefinitionsListContext>(_ctx, getState());
  enterRule(_localctx, 24, goParser::RuleTypeDefinitionsList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(235);
    typeDefinition();
    setState(240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(236);
        match(goParser::T__1);
        setState(237);
        typeDefinition(); 
      }
      setState(242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

goParser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeIdentifierContext* goParser::TypeDefinitionContext::typeIdentifier() {
  return getRuleContext<goParser::TypeIdentifierContext>(0);
}

goParser::TypeSpecificationContext* goParser::TypeDefinitionContext::typeSpecification() {
  return getRuleContext<goParser::TypeSpecificationContext>(0);
}


size_t goParser::TypeDefinitionContext::getRuleIndex() const {
  return goParser::RuleTypeDefinition;
}


antlrcpp::Any goParser::TypeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeDefinition(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeDefinitionContext* goParser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 26, goParser::RuleTypeDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    typeIdentifier();
    setState(244);
    match(goParser::T__2);
    setState(245);
    typeSpecification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

goParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::TypeIdentifierContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::TypeIdentifierContext::getRuleIndex() const {
  return goParser::RuleTypeIdentifier;
}


antlrcpp::Any goParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeIdentifierContext* goParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 28, goParser::RuleTypeIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecificationContext ------------------------------------------------------------------

goParser::TypeSpecificationContext::TypeSpecificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::TypeSpecificationContext::getRuleIndex() const {
  return goParser::RuleTypeSpecification;
}

void goParser::TypeSpecificationContext::copyFrom(TypeSpecificationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- SimpleTypespecContext ------------------------------------------------------------------

goParser::SimpleTypeContext* goParser::SimpleTypespecContext::simpleType() {
  return getRuleContext<goParser::SimpleTypeContext>(0);
}

goParser::SimpleTypespecContext::SimpleTypespecContext(TypeSpecificationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::SimpleTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSimpleTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayTypespecContext ------------------------------------------------------------------

goParser::ArrayTypeContext* goParser::ArrayTypespecContext::arrayType() {
  return getRuleContext<goParser::ArrayTypeContext>(0);
}

goParser::ArrayTypespecContext::ArrayTypespecContext(TypeSpecificationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::ArrayTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitArrayTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RecordTypespecContext ------------------------------------------------------------------

goParser::RecordTypeContext* goParser::RecordTypespecContext::recordType() {
  return getRuleContext<goParser::RecordTypeContext>(0);
}

goParser::RecordTypespecContext::RecordTypespecContext(TypeSpecificationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::RecordTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRecordTypespec(this);
  else
    return visitor->visitChildren(this);
}
goParser::TypeSpecificationContext* goParser::typeSpecification() {
  TypeSpecificationContext *_localctx = _tracker.createInstance<TypeSpecificationContext>(_ctx, getState());
  enterRule(_localctx, 30, goParser::RuleTypeSpecification);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__3:
      case goParser::T__4:
      case goParser::T__5:
      case goParser::IDENTIFIER:
      case goParser::INT:
      case goParser::DOUBLE:
      case goParser::CHAR:
      case goParser::STRING: {
        _localctx = dynamic_cast<TypeSpecificationContext *>(_tracker.createInstance<goParser::SimpleTypespecContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(249);
        simpleType();
        break;
      }

      case goParser::ARRAY: {
        _localctx = dynamic_cast<TypeSpecificationContext *>(_tracker.createInstance<goParser::ArrayTypespecContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(250);
        arrayType();
        break;
      }

      case goParser::RECORD: {
        _localctx = dynamic_cast<TypeSpecificationContext *>(_tracker.createInstance<goParser::RecordTypespecContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(251);
        recordType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeContext ------------------------------------------------------------------

goParser::SimpleTypeContext::SimpleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::SimpleTypeContext::getRuleIndex() const {
  return goParser::RuleSimpleType;
}

void goParser::SimpleTypeContext::copyFrom(SimpleTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- SubrangeTypespecContext ------------------------------------------------------------------

goParser::SubrangeTypeContext* goParser::SubrangeTypespecContext::subrangeType() {
  return getRuleContext<goParser::SubrangeTypeContext>(0);
}

goParser::SubrangeTypespecContext::SubrangeTypespecContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::SubrangeTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSubrangeTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EnumerationTypespecContext ------------------------------------------------------------------

goParser::EnumerationTypeContext* goParser::EnumerationTypespecContext::enumerationType() {
  return getRuleContext<goParser::EnumerationTypeContext>(0);
}

goParser::EnumerationTypespecContext::EnumerationTypespecContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::EnumerationTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitEnumerationTypespec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeIdentifierTypespecContext ------------------------------------------------------------------

goParser::TypeIdentifierContext* goParser::TypeIdentifierTypespecContext::typeIdentifier() {
  return getRuleContext<goParser::TypeIdentifierContext>(0);
}

goParser::TypeIdentifierTypespecContext::TypeIdentifierTypespecContext(SimpleTypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::TypeIdentifierTypespecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifierTypespec(this);
  else
    return visitor->visitChildren(this);
}
goParser::SimpleTypeContext* goParser::simpleType() {
  SimpleTypeContext *_localctx = _tracker.createInstance<SimpleTypeContext>(_ctx, getState());
  enterRule(_localctx, 32, goParser::RuleSimpleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<SimpleTypeContext *>(_tracker.createInstance<goParser::TypeIdentifierTypespecContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(254);
      typeIdentifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<SimpleTypeContext *>(_tracker.createInstance<goParser::EnumerationTypespecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(255);
      enumerationType();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<SimpleTypeContext *>(_tracker.createInstance<goParser::SubrangeTypespecContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(256);
      subrangeType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationTypeContext ------------------------------------------------------------------

goParser::EnumerationTypeContext::EnumerationTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::EnumerationConstantContext *> goParser::EnumerationTypeContext::enumerationConstant() {
  return getRuleContexts<goParser::EnumerationConstantContext>();
}

goParser::EnumerationConstantContext* goParser::EnumerationTypeContext::enumerationConstant(size_t i) {
  return getRuleContext<goParser::EnumerationConstantContext>(i);
}


size_t goParser::EnumerationTypeContext::getRuleIndex() const {
  return goParser::RuleEnumerationType;
}


antlrcpp::Any goParser::EnumerationTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitEnumerationType(this);
  else
    return visitor->visitChildren(this);
}

goParser::EnumerationTypeContext* goParser::enumerationType() {
  EnumerationTypeContext *_localctx = _tracker.createInstance<EnumerationTypeContext>(_ctx, getState());
  enterRule(_localctx, 34, goParser::RuleEnumerationType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(goParser::T__5);
    setState(260);
    enumerationConstant();
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(261);
      match(goParser::T__6);
      setState(262);
      enumerationConstant();
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(268);
    match(goParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumerationConstantContext ------------------------------------------------------------------

goParser::EnumerationConstantContext::EnumerationConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ConstantIdentifierContext* goParser::EnumerationConstantContext::constantIdentifier() {
  return getRuleContext<goParser::ConstantIdentifierContext>(0);
}


size_t goParser::EnumerationConstantContext::getRuleIndex() const {
  return goParser::RuleEnumerationConstant;
}


antlrcpp::Any goParser::EnumerationConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitEnumerationConstant(this);
  else
    return visitor->visitChildren(this);
}

goParser::EnumerationConstantContext* goParser::enumerationConstant() {
  EnumerationConstantContext *_localctx = _tracker.createInstance<EnumerationConstantContext>(_ctx, getState());
  enterRule(_localctx, 36, goParser::RuleEnumerationConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    constantIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrangeTypeContext ------------------------------------------------------------------

goParser::SubrangeTypeContext::SubrangeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ConstantContext *> goParser::SubrangeTypeContext::constant() {
  return getRuleContexts<goParser::ConstantContext>();
}

goParser::ConstantContext* goParser::SubrangeTypeContext::constant(size_t i) {
  return getRuleContext<goParser::ConstantContext>(i);
}


size_t goParser::SubrangeTypeContext::getRuleIndex() const {
  return goParser::RuleSubrangeType;
}


antlrcpp::Any goParser::SubrangeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSubrangeType(this);
  else
    return visitor->visitChildren(this);
}

goParser::SubrangeTypeContext* goParser::subrangeType() {
  SubrangeTypeContext *_localctx = _tracker.createInstance<SubrangeTypeContext>(_ctx, getState());
  enterRule(_localctx, 38, goParser::RuleSubrangeType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    constant();
    setState(273);
    match(goParser::T__8);
    setState(274);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

goParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ArrayTypeContext::ARRAY() {
  return getToken(goParser::ARRAY, 0);
}

goParser::ArrayDimensionListContext* goParser::ArrayTypeContext::arrayDimensionList() {
  return getRuleContext<goParser::ArrayDimensionListContext>(0);
}

tree::TerminalNode* goParser::ArrayTypeContext::OF() {
  return getToken(goParser::OF, 0);
}

goParser::TypeSpecificationContext* goParser::ArrayTypeContext::typeSpecification() {
  return getRuleContext<goParser::TypeSpecificationContext>(0);
}


size_t goParser::ArrayTypeContext::getRuleIndex() const {
  return goParser::RuleArrayType;
}


antlrcpp::Any goParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

goParser::ArrayTypeContext* goParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, goParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(goParser::ARRAY);
    setState(277);
    match(goParser::T__9);
    setState(278);
    arrayDimensionList();
    setState(279);
    match(goParser::T__10);
    setState(280);
    match(goParser::OF);
    setState(281);
    typeSpecification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayDimensionListContext ------------------------------------------------------------------

goParser::ArrayDimensionListContext::ArrayDimensionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::SimpleTypeContext *> goParser::ArrayDimensionListContext::simpleType() {
  return getRuleContexts<goParser::SimpleTypeContext>();
}

goParser::SimpleTypeContext* goParser::ArrayDimensionListContext::simpleType(size_t i) {
  return getRuleContext<goParser::SimpleTypeContext>(i);
}


size_t goParser::ArrayDimensionListContext::getRuleIndex() const {
  return goParser::RuleArrayDimensionList;
}


antlrcpp::Any goParser::ArrayDimensionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitArrayDimensionList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ArrayDimensionListContext* goParser::arrayDimensionList() {
  ArrayDimensionListContext *_localctx = _tracker.createInstance<ArrayDimensionListContext>(_ctx, getState());
  enterRule(_localctx, 42, goParser::RuleArrayDimensionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    simpleType();
    setState(288);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(284);
      match(goParser::T__6);
      setState(285);
      simpleType();
      setState(290);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordTypeContext ------------------------------------------------------------------

goParser::RecordTypeContext::RecordTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::RecordTypeContext::RECORD() {
  return getToken(goParser::RECORD, 0);
}

goParser::RecordFieldsContext* goParser::RecordTypeContext::recordFields() {
  return getRuleContext<goParser::RecordFieldsContext>(0);
}


size_t goParser::RecordTypeContext::getRuleIndex() const {
  return goParser::RuleRecordType;
}


antlrcpp::Any goParser::RecordTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRecordType(this);
  else
    return visitor->visitChildren(this);
}

goParser::RecordTypeContext* goParser::recordType() {
  RecordTypeContext *_localctx = _tracker.createInstance<RecordTypeContext>(_ctx, getState());
  enterRule(_localctx, 44, goParser::RuleRecordType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    match(goParser::RECORD);
    setState(292);
    recordFields();
    setState(294);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(293);
      match(goParser::T__1);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordFieldsContext ------------------------------------------------------------------

goParser::RecordFieldsContext::RecordFieldsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::VariableDeclarationsListContext* goParser::RecordFieldsContext::variableDeclarationsList() {
  return getRuleContext<goParser::VariableDeclarationsListContext>(0);
}


size_t goParser::RecordFieldsContext::getRuleIndex() const {
  return goParser::RuleRecordFields;
}


antlrcpp::Any goParser::RecordFieldsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRecordFields(this);
  else
    return visitor->visitChildren(this);
}

goParser::RecordFieldsContext* goParser::recordFields() {
  RecordFieldsContext *_localctx = _tracker.createInstance<RecordFieldsContext>(_ctx, getState());
  enterRule(_localctx, 46, goParser::RuleRecordFields);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    variableDeclarationsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablesPartContext ------------------------------------------------------------------

goParser::VariablesPartContext::VariablesPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::VariablesPartContext::VAR() {
  return getToken(goParser::VAR, 0);
}

goParser::VariableDeclarationsListContext* goParser::VariablesPartContext::variableDeclarationsList() {
  return getRuleContext<goParser::VariableDeclarationsListContext>(0);
}


size_t goParser::VariablesPartContext::getRuleIndex() const {
  return goParser::RuleVariablesPart;
}


antlrcpp::Any goParser::VariablesPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVariablesPart(this);
  else
    return visitor->visitChildren(this);
}

goParser::VariablesPartContext* goParser::variablesPart() {
  VariablesPartContext *_localctx = _tracker.createInstance<VariablesPartContext>(_ctx, getState());
  enterRule(_localctx, 48, goParser::RuleVariablesPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(goParser::VAR);
    setState(299);
    variableDeclarationsList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationsListContext ------------------------------------------------------------------

goParser::VariableDeclarationsListContext::VariableDeclarationsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::VariableDeclarationsContext *> goParser::VariableDeclarationsListContext::variableDeclarations() {
  return getRuleContexts<goParser::VariableDeclarationsContext>();
}

goParser::VariableDeclarationsContext* goParser::VariableDeclarationsListContext::variableDeclarations(size_t i) {
  return getRuleContext<goParser::VariableDeclarationsContext>(i);
}


size_t goParser::VariableDeclarationsListContext::getRuleIndex() const {
  return goParser::RuleVariableDeclarationsList;
}


antlrcpp::Any goParser::VariableDeclarationsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationsList(this);
  else
    return visitor->visitChildren(this);
}

goParser::VariableDeclarationsListContext* goParser::variableDeclarationsList() {
  VariableDeclarationsListContext *_localctx = _tracker.createInstance<VariableDeclarationsListContext>(_ctx, getState());
  enterRule(_localctx, 50, goParser::RuleVariableDeclarationsList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(301);
    variableDeclarations();
    setState(306);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(302);
        match(goParser::T__1);
        setState(303);
        variableDeclarations(); 
      }
      setState(308);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationsContext ------------------------------------------------------------------

goParser::VariableDeclarationsContext::VariableDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::VariableIdentifierListContext* goParser::VariableDeclarationsContext::variableIdentifierList() {
  return getRuleContext<goParser::VariableIdentifierListContext>(0);
}

goParser::TypeSpecificationContext* goParser::VariableDeclarationsContext::typeSpecification() {
  return getRuleContext<goParser::TypeSpecificationContext>(0);
}


size_t goParser::VariableDeclarationsContext::getRuleIndex() const {
  return goParser::RuleVariableDeclarations;
}


antlrcpp::Any goParser::VariableDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarations(this);
  else
    return visitor->visitChildren(this);
}

goParser::VariableDeclarationsContext* goParser::variableDeclarations() {
  VariableDeclarationsContext *_localctx = _tracker.createInstance<VariableDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 52, goParser::RuleVariableDeclarations);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    variableIdentifierList();
    setState(310);
    match(goParser::T__11);
    setState(311);
    typeSpecification();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableIdentifierListContext ------------------------------------------------------------------

goParser::VariableIdentifierListContext::VariableIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::VariableIdentifierContext *> goParser::VariableIdentifierListContext::variableIdentifier() {
  return getRuleContexts<goParser::VariableIdentifierContext>();
}

goParser::VariableIdentifierContext* goParser::VariableIdentifierListContext::variableIdentifier(size_t i) {
  return getRuleContext<goParser::VariableIdentifierContext>(i);
}


size_t goParser::VariableIdentifierListContext::getRuleIndex() const {
  return goParser::RuleVariableIdentifierList;
}


antlrcpp::Any goParser::VariableIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVariableIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

goParser::VariableIdentifierListContext* goParser::variableIdentifierList() {
  VariableIdentifierListContext *_localctx = _tracker.createInstance<VariableIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 54, goParser::RuleVariableIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(313);
    variableIdentifier();
    setState(318);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(314);
      match(goParser::T__6);
      setState(315);
      variableIdentifier();
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableIdentifierContext ------------------------------------------------------------------

goParser::VariableIdentifierContext::VariableIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::VariableIdentifierContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::VariableIdentifierContext::getRuleIndex() const {
  return goParser::RuleVariableIdentifier;
}


antlrcpp::Any goParser::VariableIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVariableIdentifier(this);
  else
    return visitor->visitChildren(this);
}

goParser::VariableIdentifierContext* goParser::variableIdentifier() {
  VariableIdentifierContext *_localctx = _tracker.createInstance<VariableIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 56, goParser::RuleVariableIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutinesPartContext ------------------------------------------------------------------

goParser::RoutinesPartContext::RoutinesPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::RoutineDefinitionContext *> goParser::RoutinesPartContext::routineDefinition() {
  return getRuleContexts<goParser::RoutineDefinitionContext>();
}

goParser::RoutineDefinitionContext* goParser::RoutinesPartContext::routineDefinition(size_t i) {
  return getRuleContext<goParser::RoutineDefinitionContext>(i);
}


size_t goParser::RoutinesPartContext::getRuleIndex() const {
  return goParser::RuleRoutinesPart;
}


antlrcpp::Any goParser::RoutinesPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRoutinesPart(this);
  else
    return visitor->visitChildren(this);
}

goParser::RoutinesPartContext* goParser::routinesPart() {
  RoutinesPartContext *_localctx = _tracker.createInstance<RoutinesPartContext>(_ctx, getState());
  enterRule(_localctx, 58, goParser::RuleRoutinesPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(323);
    routineDefinition();
    setState(328);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(324);
        match(goParser::T__1);
        setState(325);
        routineDefinition(); 
      }
      setState(330);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutineDefinitionContext ------------------------------------------------------------------

goParser::RoutineDefinitionContext::RoutineDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::FunctionHeadContext* goParser::RoutineDefinitionContext::functionHead() {
  return getRuleContext<goParser::FunctionHeadContext>(0);
}

goParser::ParametersContext* goParser::RoutineDefinitionContext::parameters() {
  return getRuleContext<goParser::ParametersContext>(0);
}

goParser::BlockContext* goParser::RoutineDefinitionContext::block() {
  return getRuleContext<goParser::BlockContext>(0);
}

tree::TerminalNode* goParser::RoutineDefinitionContext::TYPE() {
  return getToken(goParser::TYPE, 0);
}


size_t goParser::RoutineDefinitionContext::getRuleIndex() const {
  return goParser::RuleRoutineDefinition;
}


antlrcpp::Any goParser::RoutineDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRoutineDefinition(this);
  else
    return visitor->visitChildren(this);
}

goParser::RoutineDefinitionContext* goParser::routineDefinition() {
  RoutineDefinitionContext *_localctx = _tracker.createInstance<RoutineDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 60, goParser::RuleRoutineDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    functionHead();
    setState(332);
    match(goParser::T__5);
    setState(333);
    parameters();
    setState(334);
    match(goParser::T__7);
    setState(336);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(335);
      match(goParser::TYPE);
      break;
    }

    default:
      break;
    }
    setState(338);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionHeadContext ------------------------------------------------------------------

goParser::FunctionHeadContext::FunctionHeadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::FunctionHeadContext::FUNC() {
  return getToken(goParser::FUNC, 0);
}

goParser::RoutineIdentifierContext* goParser::FunctionHeadContext::routineIdentifier() {
  return getRuleContext<goParser::RoutineIdentifierContext>(0);
}

goParser::TypeIdentifierContext* goParser::FunctionHeadContext::typeIdentifier() {
  return getRuleContext<goParser::TypeIdentifierContext>(0);
}

goParser::ParametersContext* goParser::FunctionHeadContext::parameters() {
  return getRuleContext<goParser::ParametersContext>(0);
}


size_t goParser::FunctionHeadContext::getRuleIndex() const {
  return goParser::RuleFunctionHead;
}


antlrcpp::Any goParser::FunctionHeadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunctionHead(this);
  else
    return visitor->visitChildren(this);
}

goParser::FunctionHeadContext* goParser::functionHead() {
  FunctionHeadContext *_localctx = _tracker.createInstance<FunctionHeadContext>(_ctx, getState());
  enterRule(_localctx, 62, goParser::RuleFunctionHead);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(goParser::FUNC);
    setState(341);
    routineIdentifier();
    setState(343);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__5) {
      setState(342);
      parameters();
    }
    setState(345);
    match(goParser::T__11);
    setState(346);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RoutineIdentifierContext ------------------------------------------------------------------

goParser::RoutineIdentifierContext::RoutineIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::RoutineIdentifierContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::RoutineIdentifierContext::getRuleIndex() const {
  return goParser::RuleRoutineIdentifier;
}


antlrcpp::Any goParser::RoutineIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRoutineIdentifier(this);
  else
    return visitor->visitChildren(this);
}

goParser::RoutineIdentifierContext* goParser::routineIdentifier() {
  RoutineIdentifierContext *_localctx = _tracker.createInstance<RoutineIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 64, goParser::RuleRoutineIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

goParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ParameterDeclarationsListContext* goParser::ParametersContext::parameterDeclarationsList() {
  return getRuleContext<goParser::ParameterDeclarationsListContext>(0);
}


size_t goParser::ParametersContext::getRuleIndex() const {
  return goParser::RuleParameters;
}


antlrcpp::Any goParser::ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParameters(this);
  else
    return visitor->visitChildren(this);
}

goParser::ParametersContext* goParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 66, goParser::RuleParameters);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    match(goParser::T__5);
    setState(351);
    parameterDeclarationsList();
    setState(352);
    match(goParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationsListContext ------------------------------------------------------------------

goParser::ParameterDeclarationsListContext::ParameterDeclarationsListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ParameterDeclarationsContext *> goParser::ParameterDeclarationsListContext::parameterDeclarations() {
  return getRuleContexts<goParser::ParameterDeclarationsContext>();
}

goParser::ParameterDeclarationsContext* goParser::ParameterDeclarationsListContext::parameterDeclarations(size_t i) {
  return getRuleContext<goParser::ParameterDeclarationsContext>(i);
}


size_t goParser::ParameterDeclarationsListContext::getRuleIndex() const {
  return goParser::RuleParameterDeclarationsList;
}


antlrcpp::Any goParser::ParameterDeclarationsListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarationsList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ParameterDeclarationsListContext* goParser::parameterDeclarationsList() {
  ParameterDeclarationsListContext *_localctx = _tracker.createInstance<ParameterDeclarationsListContext>(_ctx, getState());
  enterRule(_localctx, 68, goParser::RuleParameterDeclarationsList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    parameterDeclarations();
    setState(359);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__1) {
      setState(355);
      match(goParser::T__1);
      setState(356);
      parameterDeclarations();
      setState(361);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclarationsContext ------------------------------------------------------------------

goParser::ParameterDeclarationsContext::ParameterDeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ParameterIdentifierListContext* goParser::ParameterDeclarationsContext::parameterIdentifierList() {
  return getRuleContext<goParser::ParameterIdentifierListContext>(0);
}

goParser::TypeIdentifierContext* goParser::ParameterDeclarationsContext::typeIdentifier() {
  return getRuleContext<goParser::TypeIdentifierContext>(0);
}

tree::TerminalNode* goParser::ParameterDeclarationsContext::VAR() {
  return getToken(goParser::VAR, 0);
}


size_t goParser::ParameterDeclarationsContext::getRuleIndex() const {
  return goParser::RuleParameterDeclarations;
}


antlrcpp::Any goParser::ParameterDeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParameterDeclarations(this);
  else
    return visitor->visitChildren(this);
}

goParser::ParameterDeclarationsContext* goParser::parameterDeclarations() {
  ParameterDeclarationsContext *_localctx = _tracker.createInstance<ParameterDeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 70, goParser::RuleParameterDeclarations);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::VAR) {
      setState(362);
      match(goParser::VAR);
    }
    setState(365);
    parameterIdentifierList();
    setState(366);
    match(goParser::T__11);
    setState(367);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterIdentifierListContext ------------------------------------------------------------------

goParser::ParameterIdentifierListContext::ParameterIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ParameterIdentifierContext *> goParser::ParameterIdentifierListContext::parameterIdentifier() {
  return getRuleContexts<goParser::ParameterIdentifierContext>();
}

goParser::ParameterIdentifierContext* goParser::ParameterIdentifierListContext::parameterIdentifier(size_t i) {
  return getRuleContext<goParser::ParameterIdentifierContext>(i);
}


size_t goParser::ParameterIdentifierListContext::getRuleIndex() const {
  return goParser::RuleParameterIdentifierList;
}


antlrcpp::Any goParser::ParameterIdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParameterIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ParameterIdentifierListContext* goParser::parameterIdentifierList() {
  ParameterIdentifierListContext *_localctx = _tracker.createInstance<ParameterIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 72, goParser::RuleParameterIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    parameterIdentifier();
    setState(374);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(370);
      match(goParser::T__6);
      setState(371);
      parameterIdentifier();
      setState(376);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterIdentifierContext ------------------------------------------------------------------

goParser::ParameterIdentifierContext::ParameterIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ParameterIdentifierContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::ParameterIdentifierContext::getRuleIndex() const {
  return goParser::RuleParameterIdentifier;
}


antlrcpp::Any goParser::ParameterIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParameterIdentifier(this);
  else
    return visitor->visitChildren(this);
}

goParser::ParameterIdentifierContext* goParser::parameterIdentifier() {
  ParameterIdentifierContext *_localctx = _tracker.createInstance<ParameterIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 74, goParser::RuleParameterIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

goParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::CompoundStatementContext* goParser::StatementContext::compoundStatement() {
  return getRuleContext<goParser::CompoundStatementContext>(0);
}

goParser::AssignmentStatementContext* goParser::StatementContext::assignmentStatement() {
  return getRuleContext<goParser::AssignmentStatementContext>(0);
}

goParser::IfStatementContext* goParser::StatementContext::ifStatement() {
  return getRuleContext<goParser::IfStatementContext>(0);
}

goParser::CaseStatementContext* goParser::StatementContext::caseStatement() {
  return getRuleContext<goParser::CaseStatementContext>(0);
}

goParser::ForStatementContext* goParser::StatementContext::forStatement() {
  return getRuleContext<goParser::ForStatementContext>(0);
}

goParser::WriteStatementContext* goParser::StatementContext::writeStatement() {
  return getRuleContext<goParser::WriteStatementContext>(0);
}

goParser::WritelnStatementContext* goParser::StatementContext::writelnStatement() {
  return getRuleContext<goParser::WritelnStatementContext>(0);
}

goParser::ProcedureCallStatementContext* goParser::StatementContext::procedureCallStatement() {
  return getRuleContext<goParser::ProcedureCallStatementContext>(0);
}

goParser::EmptyStatementContext* goParser::StatementContext::emptyStatement() {
  return getRuleContext<goParser::EmptyStatementContext>(0);
}


size_t goParser::StatementContext::getRuleIndex() const {
  return goParser::RuleStatement;
}


antlrcpp::Any goParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::StatementContext* goParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 76, goParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(388);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(379);
      compoundStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(380);
      assignmentStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(381);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(382);
      caseStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(383);
      forStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(384);
      writeStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(385);
      writelnStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(386);
      procedureCallStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(387);
      emptyStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

goParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::StatementListContext* goParser::CompoundStatementContext::statementList() {
  return getRuleContext<goParser::StatementListContext>(0);
}


size_t goParser::CompoundStatementContext::getRuleIndex() const {
  return goParser::RuleCompoundStatement;
}


antlrcpp::Any goParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::CompoundStatementContext* goParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 78, goParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(goParser::T__12);
    setState(391);
    statementList();
    setState(392);
    match(goParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatementContext ------------------------------------------------------------------

goParser::EmptyStatementContext::EmptyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::EmptyStatementContext::getRuleIndex() const {
  return goParser::RuleEmptyStatement;
}


antlrcpp::Any goParser::EmptyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::EmptyStatementContext* goParser::emptyStatement() {
  EmptyStatementContext *_localctx = _tracker.createInstance<EmptyStatementContext>(_ctx, getState());
  enterRule(_localctx, 80, goParser::RuleEmptyStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementListContext ------------------------------------------------------------------

goParser::StatementListContext::StatementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::StatementContext *> goParser::StatementListContext::statement() {
  return getRuleContexts<goParser::StatementContext>();
}

goParser::StatementContext* goParser::StatementListContext::statement(size_t i) {
  return getRuleContext<goParser::StatementContext>(i);
}


size_t goParser::StatementListContext::getRuleIndex() const {
  return goParser::RuleStatementList;
}


antlrcpp::Any goParser::StatementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitStatementList(this);
  else
    return visitor->visitChildren(this);
}

goParser::StatementListContext* goParser::statementList() {
  StatementListContext *_localctx = _tracker.createInstance<StatementListContext>(_ctx, getState());
  enterRule(_localctx, 82, goParser::RuleStatementList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    statement();
    setState(401);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__1) {
      setState(397);
      match(goParser::T__1);
      setState(398);
      statement();
      setState(403);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

goParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::LhsContext* goParser::AssignmentStatementContext::lhs() {
  return getRuleContext<goParser::LhsContext>(0);
}

goParser::RhsContext* goParser::AssignmentStatementContext::rhs() {
  return getRuleContext<goParser::RhsContext>(0);
}


size_t goParser::AssignmentStatementContext::getRuleIndex() const {
  return goParser::RuleAssignmentStatement;
}


antlrcpp::Any goParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::AssignmentStatementContext* goParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, goParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    lhs();
    setState(405);
    match(goParser::T__14);
    setState(406);
    rhs();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LhsContext ------------------------------------------------------------------

goParser::LhsContext::LhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::VariableContext* goParser::LhsContext::variable() {
  return getRuleContext<goParser::VariableContext>(0);
}


size_t goParser::LhsContext::getRuleIndex() const {
  return goParser::RuleLhs;
}


antlrcpp::Any goParser::LhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitLhs(this);
  else
    return visitor->visitChildren(this);
}

goParser::LhsContext* goParser::lhs() {
  LhsContext *_localctx = _tracker.createInstance<LhsContext>(_ctx, getState());
  enterRule(_localctx, 86, goParser::RuleLhs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    variable();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RhsContext ------------------------------------------------------------------

goParser::RhsContext::RhsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::RhsContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::RhsContext::getRuleIndex() const {
  return goParser::RuleRhs;
}


antlrcpp::Any goParser::RhsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRhs(this);
  else
    return visitor->visitChildren(this);
}

goParser::RhsContext* goParser::rhs() {
  RhsContext *_localctx = _tracker.createInstance<RhsContext>(_ctx, getState());
  enterRule(_localctx, 88, goParser::RuleRhs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(410);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

goParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::IfStatementContext::IF() {
  return getToken(goParser::IF, 0);
}

goParser::ExpressionContext* goParser::IfStatementContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::TrueStatementContext* goParser::IfStatementContext::trueStatement() {
  return getRuleContext<goParser::TrueStatementContext>(0);
}

tree::TerminalNode* goParser::IfStatementContext::ELSE() {
  return getToken(goParser::ELSE, 0);
}

goParser::FalseStatementContext* goParser::IfStatementContext::falseStatement() {
  return getRuleContext<goParser::FalseStatementContext>(0);
}


size_t goParser::IfStatementContext::getRuleIndex() const {
  return goParser::RuleIfStatement;
}


antlrcpp::Any goParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::IfStatementContext* goParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, goParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    match(goParser::IF);
    setState(413);
    match(goParser::T__15);
    setState(414);
    expression();
    setState(415);
    trueStatement();
    setState(418);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(416);
      match(goParser::ELSE);
      setState(417);
      falseStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrueStatementContext ------------------------------------------------------------------

goParser::TrueStatementContext::TrueStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::StatementContext* goParser::TrueStatementContext::statement() {
  return getRuleContext<goParser::StatementContext>(0);
}


size_t goParser::TrueStatementContext::getRuleIndex() const {
  return goParser::RuleTrueStatement;
}


antlrcpp::Any goParser::TrueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTrueStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::TrueStatementContext* goParser::trueStatement() {
  TrueStatementContext *_localctx = _tracker.createInstance<TrueStatementContext>(_ctx, getState());
  enterRule(_localctx, 92, goParser::RuleTrueStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FalseStatementContext ------------------------------------------------------------------

goParser::FalseStatementContext::FalseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::StatementContext* goParser::FalseStatementContext::statement() {
  return getRuleContext<goParser::StatementContext>(0);
}


size_t goParser::FalseStatementContext::getRuleIndex() const {
  return goParser::RuleFalseStatement;
}


antlrcpp::Any goParser::FalseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFalseStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::FalseStatementContext* goParser::falseStatement() {
  FalseStatementContext *_localctx = _tracker.createInstance<FalseStatementContext>(_ctx, getState());
  enterRule(_localctx, 94, goParser::RuleFalseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

goParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::CaseStatementContext::SWITCH() {
  return getToken(goParser::SWITCH, 0);
}

goParser::ExpressionContext* goParser::CaseStatementContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::CaseBranchListContext* goParser::CaseStatementContext::caseBranchList() {
  return getRuleContext<goParser::CaseBranchListContext>(0);
}


size_t goParser::CaseStatementContext::getRuleIndex() const {
  return goParser::RuleCaseStatement;
}


antlrcpp::Any goParser::CaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCaseStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::CaseStatementContext* goParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, goParser::RuleCaseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    match(goParser::SWITCH);
    setState(425);
    expression();
    setState(426);
    match(goParser::T__12);
    setState(427);
    caseBranchList();
    setState(428);
    match(goParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBranchListContext ------------------------------------------------------------------

goParser::CaseBranchListContext::CaseBranchListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::CaseBranchContext *> goParser::CaseBranchListContext::caseBranch() {
  return getRuleContexts<goParser::CaseBranchContext>();
}

goParser::CaseBranchContext* goParser::CaseBranchListContext::caseBranch(size_t i) {
  return getRuleContext<goParser::CaseBranchContext>(i);
}

tree::TerminalNode* goParser::CaseBranchListContext::DEFAULT() {
  return getToken(goParser::DEFAULT, 0);
}

goParser::StatementContext* goParser::CaseBranchListContext::statement() {
  return getRuleContext<goParser::StatementContext>(0);
}


size_t goParser::CaseBranchListContext::getRuleIndex() const {
  return goParser::RuleCaseBranchList;
}


antlrcpp::Any goParser::CaseBranchListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCaseBranchList(this);
  else
    return visitor->visitChildren(this);
}

goParser::CaseBranchListContext* goParser::caseBranchList() {
  CaseBranchListContext *_localctx = _tracker.createInstance<CaseBranchListContext>(_ctx, getState());
  enterRule(_localctx, 98, goParser::RuleCaseBranchList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(430);
    caseBranch();
    setState(435);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(431);
        match(goParser::T__1);
        setState(432);
        caseBranch(); 
      }
      setState(437);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }

    setState(438);
    match(goParser::T__1);
    setState(439);
    match(goParser::DEFAULT);
    setState(440);
    match(goParser::T__1);
    setState(441);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseBranchContext ------------------------------------------------------------------

goParser::CaseBranchContext::CaseBranchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::CaseBranchContext::CASE() {
  return getToken(goParser::CASE, 0);
}

goParser::CaseConstantListContext* goParser::CaseBranchContext::caseConstantList() {
  return getRuleContext<goParser::CaseConstantListContext>(0);
}

goParser::StatementContext* goParser::CaseBranchContext::statement() {
  return getRuleContext<goParser::StatementContext>(0);
}


size_t goParser::CaseBranchContext::getRuleIndex() const {
  return goParser::RuleCaseBranch;
}


antlrcpp::Any goParser::CaseBranchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCaseBranch(this);
  else
    return visitor->visitChildren(this);
}

goParser::CaseBranchContext* goParser::caseBranch() {
  CaseBranchContext *_localctx = _tracker.createInstance<CaseBranchContext>(_ctx, getState());
  enterRule(_localctx, 100, goParser::RuleCaseBranch);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::CASE: {
        enterOuterAlt(_localctx, 1);
        setState(443);
        match(goParser::CASE);
        setState(444);
        caseConstantList();
        setState(445);
        match(goParser::T__11);
        setState(446);
        statement();
        break;
      }

      case goParser::T__1: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseConstantListContext ------------------------------------------------------------------

goParser::CaseConstantListContext::CaseConstantListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::CaseConstantContext *> goParser::CaseConstantListContext::caseConstant() {
  return getRuleContexts<goParser::CaseConstantContext>();
}

goParser::CaseConstantContext* goParser::CaseConstantListContext::caseConstant(size_t i) {
  return getRuleContext<goParser::CaseConstantContext>(i);
}


size_t goParser::CaseConstantListContext::getRuleIndex() const {
  return goParser::RuleCaseConstantList;
}


antlrcpp::Any goParser::CaseConstantListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCaseConstantList(this);
  else
    return visitor->visitChildren(this);
}

goParser::CaseConstantListContext* goParser::caseConstantList() {
  CaseConstantListContext *_localctx = _tracker.createInstance<CaseConstantListContext>(_ctx, getState());
  enterRule(_localctx, 102, goParser::RuleCaseConstantList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    caseConstant();
    setState(456);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(452);
      match(goParser::T__6);
      setState(453);
      caseConstant();
      setState(458);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseConstantContext ------------------------------------------------------------------

goParser::CaseConstantContext::CaseConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ConstantContext* goParser::CaseConstantContext::constant() {
  return getRuleContext<goParser::ConstantContext>(0);
}


size_t goParser::CaseConstantContext::getRuleIndex() const {
  return goParser::RuleCaseConstant;
}


antlrcpp::Any goParser::CaseConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCaseConstant(this);
  else
    return visitor->visitChildren(this);
}

goParser::CaseConstantContext* goParser::caseConstant() {
  CaseConstantContext *_localctx = _tracker.createInstance<CaseConstantContext>(_ctx, getState());
  enterRule(_localctx, 104, goParser::RuleCaseConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(459);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

goParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ForStatementContext::FOR() {
  return getToken(goParser::FOR, 0);
}

goParser::WhileStatementContext* goParser::ForStatementContext::whileStatement() {
  return getRuleContext<goParser::WhileStatementContext>(0);
}

goParser::VariableContext* goParser::ForStatementContext::variable() {
  return getRuleContext<goParser::VariableContext>(0);
}

std::vector<goParser::ExpressionContext *> goParser::ForStatementContext::expression() {
  return getRuleContexts<goParser::ExpressionContext>();
}

goParser::ExpressionContext* goParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<goParser::ExpressionContext>(i);
}

goParser::AssignmentStatementContext* goParser::ForStatementContext::assignmentStatement() {
  return getRuleContext<goParser::AssignmentStatementContext>(0);
}

goParser::StatementContext* goParser::ForStatementContext::statement() {
  return getRuleContext<goParser::StatementContext>(0);
}


size_t goParser::ForStatementContext::getRuleIndex() const {
  return goParser::RuleForStatement;
}


antlrcpp::Any goParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::ForStatementContext* goParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 106, goParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    match(goParser::FOR);
    setState(472);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(462);
      whileStatement();
      break;
    }

    case 2: {
      setState(463);
      variable();
      setState(464);
      match(goParser::T__14);
      setState(465);
      expression();
      setState(466);
      match(goParser::T__1);
      setState(467);
      expression();
      setState(468);
      match(goParser::T__1);
      setState(469);
      assignmentStatement();
      setState(470);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

goParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::WhileStatementContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::StatementContext* goParser::WhileStatementContext::statement() {
  return getRuleContext<goParser::StatementContext>(0);
}


size_t goParser::WhileStatementContext::getRuleIndex() const {
  return goParser::RuleWhileStatement;
}


antlrcpp::Any goParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::WhileStatementContext* goParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 108, goParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    expression();
    setState(475);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureCallStatementContext ------------------------------------------------------------------

goParser::ProcedureCallStatementContext::ProcedureCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ProcedureNameContext* goParser::ProcedureCallStatementContext::procedureName() {
  return getRuleContext<goParser::ProcedureNameContext>(0);
}

goParser::ArgumentListContext* goParser::ProcedureCallStatementContext::argumentList() {
  return getRuleContext<goParser::ArgumentListContext>(0);
}


size_t goParser::ProcedureCallStatementContext::getRuleIndex() const {
  return goParser::RuleProcedureCallStatement;
}


antlrcpp::Any goParser::ProcedureCallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitProcedureCallStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::ProcedureCallStatementContext* goParser::procedureCallStatement() {
  ProcedureCallStatementContext *_localctx = _tracker.createInstance<ProcedureCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 110, goParser::RuleProcedureCallStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    procedureName();
    setState(478);
    match(goParser::T__5);
    setState(480);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__3)
      | (1ULL << goParser::T__4)
      | (1ULL << goParser::T__5)
      | (1ULL << goParser::NOT)
      | (1ULL << goParser::IDENTIFIER)
      | (1ULL << goParser::INT)
      | (1ULL << goParser::DOUBLE)
      | (1ULL << goParser::CHAR)
      | (1ULL << goParser::STRING))) != 0)) {
      setState(479);
      argumentList();
    }
    setState(482);
    match(goParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureNameContext ------------------------------------------------------------------

goParser::ProcedureNameContext::ProcedureNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ProcedureNameContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::ProcedureNameContext::getRuleIndex() const {
  return goParser::RuleProcedureName;
}


antlrcpp::Any goParser::ProcedureNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitProcedureName(this);
  else
    return visitor->visitChildren(this);
}

goParser::ProcedureNameContext* goParser::procedureName() {
  ProcedureNameContext *_localctx = _tracker.createInstance<ProcedureNameContext>(_ctx, getState());
  enterRule(_localctx, 112, goParser::RuleProcedureName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

goParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ArgumentContext *> goParser::ArgumentListContext::argument() {
  return getRuleContexts<goParser::ArgumentContext>();
}

goParser::ArgumentContext* goParser::ArgumentListContext::argument(size_t i) {
  return getRuleContext<goParser::ArgumentContext>(i);
}


size_t goParser::ArgumentListContext::getRuleIndex() const {
  return goParser::RuleArgumentList;
}


antlrcpp::Any goParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ArgumentListContext* goParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 114, goParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    argument();
    setState(491);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(487);
      match(goParser::T__6);
      setState(488);
      argument();
      setState(493);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

goParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::ArgumentContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::ArgumentContext::getRuleIndex() const {
  return goParser::RuleArgument;
}


antlrcpp::Any goParser::ArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitArgument(this);
  else
    return visitor->visitChildren(this);
}

goParser::ArgumentContext* goParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 116, goParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteStatementContext ------------------------------------------------------------------

goParser::WriteStatementContext::WriteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::WriteStatementContext::PRINT() {
  return getToken(goParser::PRINT, 0);
}

goParser::WriteArgumentsContext* goParser::WriteStatementContext::writeArguments() {
  return getRuleContext<goParser::WriteArgumentsContext>(0);
}


size_t goParser::WriteStatementContext::getRuleIndex() const {
  return goParser::RuleWriteStatement;
}


antlrcpp::Any goParser::WriteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitWriteStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::WriteStatementContext* goParser::writeStatement() {
  WriteStatementContext *_localctx = _tracker.createInstance<WriteStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, goParser::RuleWriteStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(496);
    match(goParser::PRINT);
    setState(497);
    writeArguments();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnStatementContext ------------------------------------------------------------------

goParser::WritelnStatementContext::WritelnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::WritelnStatementContext::PRINTLN() {
  return getToken(goParser::PRINTLN, 0);
}

goParser::WriteArgumentsContext* goParser::WritelnStatementContext::writeArguments() {
  return getRuleContext<goParser::WriteArgumentsContext>(0);
}


size_t goParser::WritelnStatementContext::getRuleIndex() const {
  return goParser::RuleWritelnStatement;
}


antlrcpp::Any goParser::WritelnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitWritelnStatement(this);
  else
    return visitor->visitChildren(this);
}

goParser::WritelnStatementContext* goParser::writelnStatement() {
  WritelnStatementContext *_localctx = _tracker.createInstance<WritelnStatementContext>(_ctx, getState());
  enterRule(_localctx, 120, goParser::RuleWritelnStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    match(goParser::PRINTLN);
    setState(501);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__5) {
      setState(500);
      writeArguments();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteArgumentsContext ------------------------------------------------------------------

goParser::WriteArgumentsContext::WriteArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::WriteArgumentContext *> goParser::WriteArgumentsContext::writeArgument() {
  return getRuleContexts<goParser::WriteArgumentContext>();
}

goParser::WriteArgumentContext* goParser::WriteArgumentsContext::writeArgument(size_t i) {
  return getRuleContext<goParser::WriteArgumentContext>(i);
}


size_t goParser::WriteArgumentsContext::getRuleIndex() const {
  return goParser::RuleWriteArguments;
}


antlrcpp::Any goParser::WriteArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitWriteArguments(this);
  else
    return visitor->visitChildren(this);
}

goParser::WriteArgumentsContext* goParser::writeArguments() {
  WriteArgumentsContext *_localctx = _tracker.createInstance<WriteArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 122, goParser::RuleWriteArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(503);
    match(goParser::T__5);
    setState(504);
    writeArgument();
    setState(509);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(505);
      match(goParser::T__6);
      setState(506);
      writeArgument();
      setState(511);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(512);
    match(goParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteArgumentContext ------------------------------------------------------------------

goParser::WriteArgumentContext::WriteArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::WriteArgumentContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::FieldWidthContext* goParser::WriteArgumentContext::fieldWidth() {
  return getRuleContext<goParser::FieldWidthContext>(0);
}


size_t goParser::WriteArgumentContext::getRuleIndex() const {
  return goParser::RuleWriteArgument;
}


antlrcpp::Any goParser::WriteArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitWriteArgument(this);
  else
    return visitor->visitChildren(this);
}

goParser::WriteArgumentContext* goParser::writeArgument() {
  WriteArgumentContext *_localctx = _tracker.createInstance<WriteArgumentContext>(_ctx, getState());
  enterRule(_localctx, 124, goParser::RuleWriteArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    expression();
    setState(517);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__11) {
      setState(515);
      match(goParser::T__11);
      setState(516);
      fieldWidth();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldWidthContext ------------------------------------------------------------------

goParser::FieldWidthContext::FieldWidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IntegerConstantContext* goParser::FieldWidthContext::integerConstant() {
  return getRuleContext<goParser::IntegerConstantContext>(0);
}

goParser::SignContext* goParser::FieldWidthContext::sign() {
  return getRuleContext<goParser::SignContext>(0);
}

goParser::DecimalPlacesContext* goParser::FieldWidthContext::decimalPlaces() {
  return getRuleContext<goParser::DecimalPlacesContext>(0);
}


size_t goParser::FieldWidthContext::getRuleIndex() const {
  return goParser::RuleFieldWidth;
}


antlrcpp::Any goParser::FieldWidthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFieldWidth(this);
  else
    return visitor->visitChildren(this);
}

goParser::FieldWidthContext* goParser::fieldWidth() {
  FieldWidthContext *_localctx = _tracker.createInstance<FieldWidthContext>(_ctx, getState());
  enterRule(_localctx, 126, goParser::RuleFieldWidth);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__3

    || _la == goParser::T__4) {
      setState(519);
      sign();
    }
    setState(522);
    integerConstant();
    setState(525);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__11) {
      setState(523);
      match(goParser::T__11);
      setState(524);
      decimalPlaces();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalPlacesContext ------------------------------------------------------------------

goParser::DecimalPlacesContext::DecimalPlacesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IntegerConstantContext* goParser::DecimalPlacesContext::integerConstant() {
  return getRuleContext<goParser::IntegerConstantContext>(0);
}


size_t goParser::DecimalPlacesContext::getRuleIndex() const {
  return goParser::RuleDecimalPlaces;
}


antlrcpp::Any goParser::DecimalPlacesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitDecimalPlaces(this);
  else
    return visitor->visitChildren(this);
}

goParser::DecimalPlacesContext* goParser::decimalPlaces() {
  DecimalPlacesContext *_localctx = _tracker.createInstance<DecimalPlacesContext>(_ctx, getState());
  enterRule(_localctx, 128, goParser::RuleDecimalPlaces);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(527);
    integerConstant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

goParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::SimpleExpressionContext *> goParser::ExpressionContext::simpleExpression() {
  return getRuleContexts<goParser::SimpleExpressionContext>();
}

goParser::SimpleExpressionContext* goParser::ExpressionContext::simpleExpression(size_t i) {
  return getRuleContext<goParser::SimpleExpressionContext>(i);
}

goParser::RelOpContext* goParser::ExpressionContext::relOp() {
  return getRuleContext<goParser::RelOpContext>(0);
}


size_t goParser::ExpressionContext::getRuleIndex() const {
  return goParser::RuleExpression;
}


antlrcpp::Any goParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

goParser::ExpressionContext* goParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 130, goParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    simpleExpression();
    setState(533);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__18)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20))) != 0)) {
      setState(530);
      relOp();
      setState(531);
      simpleExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

goParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::TermContext *> goParser::SimpleExpressionContext::term() {
  return getRuleContexts<goParser::TermContext>();
}

goParser::TermContext* goParser::SimpleExpressionContext::term(size_t i) {
  return getRuleContext<goParser::TermContext>(i);
}

goParser::SignContext* goParser::SimpleExpressionContext::sign() {
  return getRuleContext<goParser::SignContext>(0);
}

std::vector<goParser::AddOpContext *> goParser::SimpleExpressionContext::addOp() {
  return getRuleContexts<goParser::AddOpContext>();
}

goParser::AddOpContext* goParser::SimpleExpressionContext::addOp(size_t i) {
  return getRuleContext<goParser::AddOpContext>(i);
}


size_t goParser::SimpleExpressionContext::getRuleIndex() const {
  return goParser::RuleSimpleExpression;
}


antlrcpp::Any goParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

goParser::SimpleExpressionContext* goParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 132, goParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(535);
      sign();
      break;
    }

    default:
      break;
    }
    setState(538);
    term();
    setState(544);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__3)
      | (1ULL << goParser::T__4)
      | (1ULL << goParser::OR))) != 0)) {
      setState(539);
      addOp();
      setState(540);
      term();
      setState(546);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

goParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::FactorContext *> goParser::TermContext::factor() {
  return getRuleContexts<goParser::FactorContext>();
}

goParser::FactorContext* goParser::TermContext::factor(size_t i) {
  return getRuleContext<goParser::FactorContext>(i);
}

std::vector<goParser::MulOpContext *> goParser::TermContext::mulOp() {
  return getRuleContexts<goParser::MulOpContext>();
}

goParser::MulOpContext* goParser::TermContext::mulOp(size_t i) {
  return getRuleContext<goParser::MulOpContext>(i);
}


size_t goParser::TermContext::getRuleIndex() const {
  return goParser::RuleTerm;
}


antlrcpp::Any goParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

goParser::TermContext* goParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 134, goParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    factor();
    setState(553);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__21)
      | (1ULL << goParser::T__22)
      | (1ULL << goParser::DIV)
      | (1ULL << goParser::MOD)
      | (1ULL << goParser::AND))) != 0)) {
      setState(548);
      mulOp();
      setState(549);
      factor();
      setState(555);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

goParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::FactorContext::getRuleIndex() const {
  return goParser::RuleFactor;
}

void goParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- NumberFactorContext ------------------------------------------------------------------

goParser::NumberContext* goParser::NumberFactorContext::number() {
  return getRuleContext<goParser::NumberContext>(0);
}

goParser::NumberFactorContext::NumberFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::NumberFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitNumberFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringFactorContext ------------------------------------------------------------------

goParser::StringConstantContext* goParser::StringFactorContext::stringConstant() {
  return getRuleContext<goParser::StringConstantContext>(0);
}

goParser::StringFactorContext::StringFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::StringFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitStringFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharacterFactorContext ------------------------------------------------------------------

goParser::CharacterConstantContext* goParser::CharacterFactorContext::characterConstant() {
  return getRuleContext<goParser::CharacterConstantContext>(0);
}

goParser::CharacterFactorContext::CharacterFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::CharacterFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCharacterFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariableFactorContext ------------------------------------------------------------------

goParser::VariableContext* goParser::VariableFactorContext::variable() {
  return getRuleContext<goParser::VariableContext>(0);
}

goParser::VariableFactorContext::VariableFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::VariableFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVariableFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallFactorContext ------------------------------------------------------------------

goParser::FunctionCallContext* goParser::FunctionCallFactorContext::functionCall() {
  return getRuleContext<goParser::FunctionCallContext>(0);
}

goParser::FunctionCallFactorContext::FunctionCallFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::FunctionCallFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunctionCallFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotFactorContext ------------------------------------------------------------------

tree::TerminalNode* goParser::NotFactorContext::NOT() {
  return getToken(goParser::NOT, 0);
}

goParser::FactorContext* goParser::NotFactorContext::factor() {
  return getRuleContext<goParser::FactorContext>(0);
}

goParser::NotFactorContext::NotFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::NotFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitNotFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedFactorContext ------------------------------------------------------------------

goParser::ExpressionContext* goParser::ParenthesizedFactorContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::ParenthesizedFactorContext::ParenthesizedFactorContext(FactorContext *ctx) { copyFrom(ctx); }


antlrcpp::Any goParser::ParenthesizedFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParenthesizedFactor(this);
  else
    return visitor->visitChildren(this);
}
goParser::FactorContext* goParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 136, goParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(567);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<goParser::VariableFactorContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(556);
      variable();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<goParser::NumberFactorContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(557);
      number();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<goParser::CharacterFactorContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(558);
      characterConstant();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<goParser::StringFactorContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(559);
      stringConstant();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<goParser::FunctionCallFactorContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(560);
      functionCall();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<goParser::NotFactorContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(561);
      match(goParser::NOT);
      setState(562);
      factor();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<FactorContext *>(_tracker.createInstance<goParser::ParenthesizedFactorContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(563);
      match(goParser::T__5);
      setState(564);
      expression();
      setState(565);
      match(goParser::T__7);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

goParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::VariableIdentifierContext* goParser::VariableContext::variableIdentifier() {
  return getRuleContext<goParser::VariableIdentifierContext>(0);
}

std::vector<goParser::ModifierContext *> goParser::VariableContext::modifier() {
  return getRuleContexts<goParser::ModifierContext>();
}

goParser::ModifierContext* goParser::VariableContext::modifier(size_t i) {
  return getRuleContext<goParser::ModifierContext>(i);
}


size_t goParser::VariableContext::getRuleIndex() const {
  return goParser::RuleVariable;
}


antlrcpp::Any goParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

goParser::VariableContext* goParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 138, goParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(569);
    variableIdentifier();
    setState(573);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__0

    || _la == goParser::T__9) {
      setState(570);
      modifier();
      setState(575);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifierContext ------------------------------------------------------------------

goParser::ModifierContext::ModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IndexListContext* goParser::ModifierContext::indexList() {
  return getRuleContext<goParser::IndexListContext>(0);
}

goParser::FieldContext* goParser::ModifierContext::field() {
  return getRuleContext<goParser::FieldContext>(0);
}


size_t goParser::ModifierContext::getRuleIndex() const {
  return goParser::RuleModifier;
}


antlrcpp::Any goParser::ModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitModifier(this);
  else
    return visitor->visitChildren(this);
}

goParser::ModifierContext* goParser::modifier() {
  ModifierContext *_localctx = _tracker.createInstance<ModifierContext>(_ctx, getState());
  enterRule(_localctx, 140, goParser::RuleModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(582);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(576);
        match(goParser::T__9);
        setState(577);
        indexList();
        setState(578);
        match(goParser::T__10);
        break;
      }

      case goParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(580);
        match(goParser::T__0);
        setState(581);
        field();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexListContext ------------------------------------------------------------------

goParser::IndexListContext::IndexListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::IndexContext *> goParser::IndexListContext::index() {
  return getRuleContexts<goParser::IndexContext>();
}

goParser::IndexContext* goParser::IndexListContext::index(size_t i) {
  return getRuleContext<goParser::IndexContext>(i);
}


size_t goParser::IndexListContext::getRuleIndex() const {
  return goParser::RuleIndexList;
}


antlrcpp::Any goParser::IndexListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitIndexList(this);
  else
    return visitor->visitChildren(this);
}

goParser::IndexListContext* goParser::indexList() {
  IndexListContext *_localctx = _tracker.createInstance<IndexListContext>(_ctx, getState());
  enterRule(_localctx, 142, goParser::RuleIndexList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    index();
    setState(589);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__6) {
      setState(585);
      match(goParser::T__6);
      setState(586);
      index();
      setState(591);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexContext ------------------------------------------------------------------

goParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::IndexContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::IndexContext::getRuleIndex() const {
  return goParser::RuleIndex;
}


antlrcpp::Any goParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}

goParser::IndexContext* goParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 144, goParser::RuleIndex);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

goParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::FieldContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::FieldContext::getRuleIndex() const {
  return goParser::RuleField;
}


antlrcpp::Any goParser::FieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitField(this);
  else
    return visitor->visitChildren(this);
}

goParser::FieldContext* goParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 146, goParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(594);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

goParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::FunctionNameContext* goParser::FunctionCallContext::functionName() {
  return getRuleContext<goParser::FunctionNameContext>(0);
}

goParser::ArgumentListContext* goParser::FunctionCallContext::argumentList() {
  return getRuleContext<goParser::ArgumentListContext>(0);
}


size_t goParser::FunctionCallContext::getRuleIndex() const {
  return goParser::RuleFunctionCall;
}


antlrcpp::Any goParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

goParser::FunctionCallContext* goParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 148, goParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    functionName();
    setState(597);
    match(goParser::T__5);
    setState(599);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__3)
      | (1ULL << goParser::T__4)
      | (1ULL << goParser::T__5)
      | (1ULL << goParser::NOT)
      | (1ULL << goParser::IDENTIFIER)
      | (1ULL << goParser::INT)
      | (1ULL << goParser::DOUBLE)
      | (1ULL << goParser::CHAR)
      | (1ULL << goParser::STRING))) != 0)) {
      setState(598);
      argumentList();
    }
    setState(601);
    match(goParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionNameContext ------------------------------------------------------------------

goParser::FunctionNameContext::FunctionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::FunctionNameContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::FunctionNameContext::getRuleIndex() const {
  return goParser::RuleFunctionName;
}


antlrcpp::Any goParser::FunctionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunctionName(this);
  else
    return visitor->visitChildren(this);
}

goParser::FunctionNameContext* goParser::functionName() {
  FunctionNameContext *_localctx = _tracker.createInstance<FunctionNameContext>(_ctx, getState());
  enterRule(_localctx, 150, goParser::RuleFunctionName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(603);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

goParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::UnsignedNumberContext* goParser::NumberContext::unsignedNumber() {
  return getRuleContext<goParser::UnsignedNumberContext>(0);
}

goParser::SignContext* goParser::NumberContext::sign() {
  return getRuleContext<goParser::SignContext>(0);
}


size_t goParser::NumberContext::getRuleIndex() const {
  return goParser::RuleNumber;
}


antlrcpp::Any goParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

goParser::NumberContext* goParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 152, goParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__3

    || _la == goParser::T__4) {
      setState(605);
      sign();
    }
    setState(608);
    unsignedNumber();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedNumberContext ------------------------------------------------------------------

goParser::UnsignedNumberContext::UnsignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IntegerConstantContext* goParser::UnsignedNumberContext::integerConstant() {
  return getRuleContext<goParser::IntegerConstantContext>(0);
}

goParser::RealConstantContext* goParser::UnsignedNumberContext::realConstant() {
  return getRuleContext<goParser::RealConstantContext>(0);
}


size_t goParser::UnsignedNumberContext::getRuleIndex() const {
  return goParser::RuleUnsignedNumber;
}


antlrcpp::Any goParser::UnsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumber(this);
  else
    return visitor->visitChildren(this);
}

goParser::UnsignedNumberContext* goParser::unsignedNumber() {
  UnsignedNumberContext *_localctx = _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 154, goParser::RuleUnsignedNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(612);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::INT: {
        enterOuterAlt(_localctx, 1);
        setState(610);
        integerConstant();
        break;
      }

      case goParser::DOUBLE: {
        enterOuterAlt(_localctx, 2);
        setState(611);
        realConstant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerConstantContext ------------------------------------------------------------------

goParser::IntegerConstantContext::IntegerConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::IntegerConstantContext::INT() {
  return getToken(goParser::INT, 0);
}


size_t goParser::IntegerConstantContext::getRuleIndex() const {
  return goParser::RuleIntegerConstant;
}


antlrcpp::Any goParser::IntegerConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitIntegerConstant(this);
  else
    return visitor->visitChildren(this);
}

goParser::IntegerConstantContext* goParser::integerConstant() {
  IntegerConstantContext *_localctx = _tracker.createInstance<IntegerConstantContext>(_ctx, getState());
  enterRule(_localctx, 156, goParser::RuleIntegerConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    match(goParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RealConstantContext ------------------------------------------------------------------

goParser::RealConstantContext::RealConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::RealConstantContext::DOUBLE() {
  return getToken(goParser::DOUBLE, 0);
}


size_t goParser::RealConstantContext::getRuleIndex() const {
  return goParser::RuleRealConstant;
}


antlrcpp::Any goParser::RealConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRealConstant(this);
  else
    return visitor->visitChildren(this);
}

goParser::RealConstantContext* goParser::realConstant() {
  RealConstantContext *_localctx = _tracker.createInstance<RealConstantContext>(_ctx, getState());
  enterRule(_localctx, 158, goParser::RuleRealConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    match(goParser::DOUBLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharacterConstantContext ------------------------------------------------------------------

goParser::CharacterConstantContext::CharacterConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::CharacterConstantContext::CHAR() {
  return getToken(goParser::CHAR, 0);
}


size_t goParser::CharacterConstantContext::getRuleIndex() const {
  return goParser::RuleCharacterConstant;
}


antlrcpp::Any goParser::CharacterConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCharacterConstant(this);
  else
    return visitor->visitChildren(this);
}

goParser::CharacterConstantContext* goParser::characterConstant() {
  CharacterConstantContext *_localctx = _tracker.createInstance<CharacterConstantContext>(_ctx, getState());
  enterRule(_localctx, 160, goParser::RuleCharacterConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    match(goParser::CHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringConstantContext ------------------------------------------------------------------

goParser::StringConstantContext::StringConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::StringConstantContext::STRING() {
  return getToken(goParser::STRING, 0);
}


size_t goParser::StringConstantContext::getRuleIndex() const {
  return goParser::RuleStringConstant;
}


antlrcpp::Any goParser::StringConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitStringConstant(this);
  else
    return visitor->visitChildren(this);
}

goParser::StringConstantContext* goParser::stringConstant() {
  StringConstantContext *_localctx = _tracker.createInstance<StringConstantContext>(_ctx, getState());
  enterRule(_localctx, 162, goParser::RuleStringConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    match(goParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

goParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::RelOpContext::getRuleIndex() const {
  return goParser::RuleRelOp;
}


antlrcpp::Any goParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

goParser::RelOpContext* goParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 164, goParser::RuleRelOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(622);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__18)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddOpContext ------------------------------------------------------------------

goParser::AddOpContext::AddOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::AddOpContext::OR() {
  return getToken(goParser::OR, 0);
}


size_t goParser::AddOpContext::getRuleIndex() const {
  return goParser::RuleAddOp;
}


antlrcpp::Any goParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}

goParser::AddOpContext* goParser::addOp() {
  AddOpContext *_localctx = _tracker.createInstance<AddOpContext>(_ctx, getState());
  enterRule(_localctx, 166, goParser::RuleAddOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__3)
      | (1ULL << goParser::T__4)
      | (1ULL << goParser::OR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulOpContext ------------------------------------------------------------------

goParser::MulOpContext::MulOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::MulOpContext::DIV() {
  return getToken(goParser::DIV, 0);
}

tree::TerminalNode* goParser::MulOpContext::MOD() {
  return getToken(goParser::MOD, 0);
}

tree::TerminalNode* goParser::MulOpContext::AND() {
  return getToken(goParser::AND, 0);
}


size_t goParser::MulOpContext::getRuleIndex() const {
  return goParser::RuleMulOp;
}


antlrcpp::Any goParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}

goParser::MulOpContext* goParser::mulOp() {
  MulOpContext *_localctx = _tracker.createInstance<MulOpContext>(_ctx, getState());
  enterRule(_localctx, 168, goParser::RuleMulOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(626);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__21)
      | (1ULL << goParser::T__22)
      | (1ULL << goParser::DIV)
      | (1ULL << goParser::MOD)
      | (1ULL << goParser::AND))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> goParser::_decisionToDFA;
atn::PredictionContextCache goParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN goParser::_atn;
std::vector<uint16_t> goParser::_serializedATN;

std::vector<std::string> goParser::_ruleNames = {
  "program", "programHeader", "programIdentifier", "block", "declarations", 
  "constantsPart", "constantDefinitionsList", "constantDefinition", "constantIdentifier", 
  "constant", "sign", "typesPart", "typeDefinitionsList", "typeDefinition", 
  "typeIdentifier", "typeSpecification", "simpleType", "enumerationType", 
  "enumerationConstant", "subrangeType", "arrayType", "arrayDimensionList", 
  "recordType", "recordFields", "variablesPart", "variableDeclarationsList", 
  "variableDeclarations", "variableIdentifierList", "variableIdentifier", 
  "routinesPart", "routineDefinition", "functionHead", "routineIdentifier", 
  "parameters", "parameterDeclarationsList", "parameterDeclarations", "parameterIdentifierList", 
  "parameterIdentifier", "statement", "compoundStatement", "emptyStatement", 
  "statementList", "assignmentStatement", "lhs", "rhs", "ifStatement", "trueStatement", 
  "falseStatement", "caseStatement", "caseBranchList", "caseBranch", "caseConstantList", 
  "caseConstant", "forStatement", "whileStatement", "procedureCallStatement", 
  "procedureName", "argumentList", "argument", "writeStatement", "writelnStatement", 
  "writeArguments", "writeArgument", "fieldWidth", "decimalPlaces", "expression", 
  "simpleExpression", "term", "factor", "variable", "modifier", "indexList", 
  "index", "field", "functionCall", "functionName", "number", "unsignedNumber", 
  "integerConstant", "realConstant", "characterConstant", "stringConstant", 
  "relOp", "addOp", "mulOp"
};

std::vector<std::string> goParser::_literalNames = {
  "", "'.'", "';'", "'='", "'-'", "'+'", "'('", "','", "')'", "'..'", "'['", 
  "']'", "':'", "'{'", "'}'", "':='", "' '", "'<>'", "'<'", "'<='", "'>'", 
  "'>='", "'*'", "'/'", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "'''"
};

std::vector<std::string> goParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "PACKAGE", "CONST", "TYPE", "ARRAY", "OF", "RECORD", 
  "VAR", "DIV", "MOD", "AND", "OR", "NOT", "IF", "THEN", "ELSE", "SWITCH", 
  "CASE", "FOR", "PRINT", "PRINTLN", "FUNC", "DEFAULT", "IDENTIFIER", "INT", 
  "DOUBLE", "NEWLINE", "WS", "QUOTE", "CHAR", "STRING", "COMMENT"
};

dfa::Vocabulary goParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> goParser::_tokenNames;

goParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x38, 0x277, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xbc, 0xa, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xc1, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x5, 0x6, 0xc6, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x5, 0x6, 0xcb, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0xd3, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
       0xd6, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xb, 0x5, 0xb, 0xdf, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x5, 0xb, 0xe3, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xe7, 0xa, 
       0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xf1, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
       0xf4, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xff, 0xa, 
       0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x104, 0xa, 0x12, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x10a, 0xa, 
       0x13, 0xc, 0x13, 0xe, 0x13, 0x10d, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x121, 0xa, 
       0x17, 0xc, 0x17, 0xe, 0x17, 0x124, 0xb, 0x17, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x5, 0x18, 0x129, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 
       0x1b, 0x133, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x136, 0xb, 0x1b, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x7, 0x1d, 0x13f, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x142, 0xb, 
       0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 
       0x1f, 0x149, 0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x14c, 0xb, 0x1f, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x153, 
       0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x5, 0x21, 0x15a, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x24, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x168, 0xa, 0x24, 0xc, 0x24, 
       0xe, 0x24, 0x16b, 0xb, 0x24, 0x3, 0x25, 0x5, 0x25, 0x16e, 0xa, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x7, 0x26, 0x177, 0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x17a, 
       0xb, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x5, 0x28, 0x187, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
       0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x7, 
       0x2b, 0x192, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 0x195, 0xb, 0x2b, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1a5, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 
       0x1b4, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x1b7, 0xb, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x5, 0x34, 0x1c4, 0xa, 
       0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x7, 0x35, 0x1c9, 0xa, 0x35, 
       0xc, 0x35, 0xe, 0x35, 0x1cc, 0xb, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x1db, 
       0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 
       0x3, 0x39, 0x5, 0x39, 0x1e3, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x7, 0x3b, 0x1ec, 
       0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x1ef, 0xb, 0x3b, 0x3, 0x3c, 0x3, 
       0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x5, 
       0x3e, 0x1f8, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
       0x7, 0x3f, 0x1fe, 0xa, 0x3f, 0xc, 0x3f, 0xe, 0x3f, 0x201, 0xb, 0x3f, 
       0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
       0x208, 0xa, 0x40, 0x3, 0x41, 0x5, 0x41, 0x20b, 0xa, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x210, 0xa, 0x41, 0x3, 0x42, 0x3, 
       0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x218, 
       0xa, 0x43, 0x3, 0x44, 0x5, 0x44, 0x21b, 0xa, 0x44, 0x3, 0x44, 0x3, 
       0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x221, 0xa, 0x44, 0xc, 0x44, 
       0xe, 0x44, 0x224, 0xb, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
       0x45, 0x7, 0x45, 0x22a, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x22d, 0xb, 
       0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
       0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 
       0x46, 0x23a, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x7, 0x47, 0x23e, 0xa, 
       0x47, 0xc, 0x47, 0xe, 0x47, 0x241, 0xb, 0x47, 0x3, 0x48, 0x3, 0x48, 
       0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x249, 0xa, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x7, 0x49, 0x24e, 0xa, 0x49, 
       0xc, 0x49, 0xe, 0x49, 0x251, 0xb, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x25a, 
       0xa, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 
       0x5, 0x4e, 0x261, 0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 
       0x4f, 0x5, 0x4f, 0x267, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x51, 
       0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 
       0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x2, 0x2, 0x57, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
       0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
       0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
       0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
       0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0x2, 0x6, 0x3, 
       0x2, 0x6, 0x7, 0x4, 0x2, 0x5, 0x5, 0x13, 0x17, 0x4, 0x2, 0x6, 0x7, 
       0x24, 0x24, 0x4, 0x2, 0x18, 0x19, 0x21, 0x23, 0x2, 0x25f, 0x2, 0xac, 
       0x3, 0x2, 0x2, 0x2, 0x4, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x6, 0xb3, 0x3, 
       0x2, 0x2, 0x2, 0x8, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xa, 0xbb, 0x3, 0x2, 
       0x2, 0x2, 0xc, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xe, 0xcf, 0x3, 0x2, 0x2, 
       0x2, 0x10, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x12, 0xdb, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x16, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x18, 
       0xea, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xed, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xf5, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x20, 0xfe, 0x3, 
       0x2, 0x2, 0x2, 0x22, 0x103, 0x3, 0x2, 0x2, 0x2, 0x24, 0x105, 0x3, 
       0x2, 0x2, 0x2, 0x26, 0x110, 0x3, 0x2, 0x2, 0x2, 0x28, 0x112, 0x3, 
       0x2, 0x2, 0x2, 0x2a, 0x116, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x11d, 0x3, 
       0x2, 0x2, 0x2, 0x2e, 0x125, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12a, 0x3, 
       0x2, 0x2, 0x2, 0x32, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x12f, 0x3, 
       0x2, 0x2, 0x2, 0x36, 0x137, 0x3, 0x2, 0x2, 0x2, 0x38, 0x13b, 0x3, 
       0x2, 0x2, 0x2, 0x3a, 0x143, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x145, 0x3, 
       0x2, 0x2, 0x2, 0x3e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x156, 0x3, 
       0x2, 0x2, 0x2, 0x42, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x160, 0x3, 
       0x2, 0x2, 0x2, 0x46, 0x164, 0x3, 0x2, 0x2, 0x2, 0x48, 0x16d, 0x3, 
       0x2, 0x2, 0x2, 0x4a, 0x173, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x17b, 0x3, 
       0x2, 0x2, 0x2, 0x4e, 0x186, 0x3, 0x2, 0x2, 0x2, 0x50, 0x188, 0x3, 
       0x2, 0x2, 0x2, 0x52, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x54, 0x18e, 0x3, 
       0x2, 0x2, 0x2, 0x56, 0x196, 0x3, 0x2, 0x2, 0x2, 0x58, 0x19a, 0x3, 
       0x2, 0x2, 0x2, 0x5a, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x19e, 0x3, 
       0x2, 0x2, 0x2, 0x5e, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1a8, 0x3, 
       0x2, 0x2, 0x2, 0x62, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1b0, 0x3, 
       0x2, 0x2, 0x2, 0x66, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x68, 0x1c5, 0x3, 
       0x2, 0x2, 0x2, 0x6a, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x1cf, 0x3, 
       0x2, 0x2, 0x2, 0x6e, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x70, 0x1df, 0x3, 
       0x2, 0x2, 0x2, 0x72, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1e8, 0x3, 
       0x2, 0x2, 0x2, 0x76, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x78, 0x1f2, 0x3, 
       0x2, 0x2, 0x2, 0x7a, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x1f9, 0x3, 
       0x2, 0x2, 0x2, 0x7e, 0x204, 0x3, 0x2, 0x2, 0x2, 0x80, 0x20a, 0x3, 
       0x2, 0x2, 0x2, 0x82, 0x211, 0x3, 0x2, 0x2, 0x2, 0x84, 0x213, 0x3, 
       0x2, 0x2, 0x2, 0x86, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x225, 0x3, 
       0x2, 0x2, 0x2, 0x8a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x23b, 0x3, 
       0x2, 0x2, 0x2, 0x8e, 0x248, 0x3, 0x2, 0x2, 0x2, 0x90, 0x24a, 0x3, 
       0x2, 0x2, 0x2, 0x92, 0x252, 0x3, 0x2, 0x2, 0x2, 0x94, 0x254, 0x3, 
       0x2, 0x2, 0x2, 0x96, 0x256, 0x3, 0x2, 0x2, 0x2, 0x98, 0x25d, 0x3, 
       0x2, 0x2, 0x2, 0x9a, 0x260, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x266, 0x3, 
       0x2, 0x2, 0x2, 0x9e, 0x268, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x26a, 0x3, 
       0x2, 0x2, 0x2, 0xa2, 0x26c, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x26e, 0x3, 
       0x2, 0x2, 0x2, 0xa6, 0x270, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x272, 0x3, 
       0x2, 0x2, 0x2, 0xaa, 0x274, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x5, 
       0x4, 0x3, 0x2, 0xad, 0xae, 0x5, 0x8, 0x5, 0x2, 0xae, 0xaf, 0x7, 0x3, 
       0x2, 0x2, 0xaf, 0x3, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x1a, 0x2, 
       0x2, 0xb1, 0xb2, 0x5, 0x6, 0x4, 0x2, 0xb2, 0x5, 0x3, 0x2, 0x2, 0x2, 
       0xb3, 0xb4, 0x7, 0x30, 0x2, 0x2, 0xb4, 0x7, 0x3, 0x2, 0x2, 0x2, 0xb5, 
       0xb6, 0x5, 0xa, 0x6, 0x2, 0xb6, 0xb7, 0x5, 0x50, 0x29, 0x2, 0xb7, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0xc, 0x7, 0x2, 0xb9, 0xba, 
       0x7, 0x4, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb8, 0x3, 
       0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xc0, 0x3, 0x2, 
       0x2, 0x2, 0xbd, 0xbe, 0x5, 0x18, 0xd, 0x2, 0xbe, 0xbf, 0x7, 0x4, 
       0x2, 0x2, 0xbf, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbd, 0x3, 0x2, 0x2, 
       0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc5, 0x3, 0x2, 0x2, 0x2, 
       0xc2, 0xc3, 0x5, 0x32, 0x1a, 0x2, 0xc3, 0xc4, 0x7, 0x4, 0x2, 0x2, 
       0xc4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc5, 
       0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 
       0x5, 0x3c, 0x1f, 0x2, 0xc8, 0xc9, 0x7, 0x4, 0x2, 0x2, 0xc9, 0xcb, 
       0x3, 0x2, 0x2, 0x2, 0xca, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 
       0x2, 0x2, 0x2, 0xcb, 0xb, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x1b, 
       0x2, 0x2, 0xcd, 0xce, 0x5, 0xe, 0x8, 0x2, 0xce, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0xcf, 0xd4, 0x5, 0x10, 0x9, 0x2, 0xd0, 0xd1, 0x7, 0x4, 0x2, 
       0x2, 0xd1, 0xd3, 0x5, 0x10, 0x9, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 
       0x2, 0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 
       0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd6, 
       0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x12, 0xa, 0x2, 0xd8, 
       0xd9, 0x7, 0x5, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x14, 0xb, 0x2, 0xda, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x30, 0x2, 0x2, 0xdc, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 0x5, 0x16, 0xc, 0x2, 0xde, 
       0xdd, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe2, 
       0x3, 0x2, 0x2, 0x2, 0xe0, 0xe3, 0x7, 0x30, 0x2, 0x2, 0xe1, 0xe3, 
       0x5, 0x9c, 0x4f, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe1, 
       0x3, 0x2, 0x2, 0x2, 0xe3, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x5, 
       0xa2, 0x52, 0x2, 0xe5, 0xe7, 0x5, 0xa4, 0x53, 0x2, 0xe6, 0xde, 0x3, 
       0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 
       0x2, 0x2, 0xe7, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x9, 0x2, 0x2, 
       0x2, 0xe9, 0x17, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x1c, 0x2, 
       0x2, 0xeb, 0xec, 0x5, 0x1a, 0xe, 0x2, 0xec, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0xed, 0xf2, 0x5, 0x1c, 0xf, 0x2, 0xee, 0xef, 0x7, 0x4, 0x2, 
       0x2, 0xef, 0xf1, 0x5, 0x1c, 0xf, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 
       0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 
       0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xf4, 
       0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x1e, 0x10, 0x2, 0xf6, 
       0xf7, 0x7, 0x5, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x20, 0x11, 0x2, 0xf8, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0x30, 0x2, 0x2, 0xfa, 
       0x1f, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xff, 0x5, 0x22, 0x12, 0x2, 0xfc, 
       0xff, 0x5, 0x2a, 0x16, 0x2, 0xfd, 0xff, 0x5, 0x2e, 0x18, 0x2, 0xfe, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0x21, 0x3, 0x2, 0x2, 0x2, 0x100, 0x104, 
       0x5, 0x1e, 0x10, 0x2, 0x101, 0x104, 0x5, 0x24, 0x13, 0x2, 0x102, 
       0x104, 0x5, 0x28, 0x15, 0x2, 0x103, 0x100, 0x3, 0x2, 0x2, 0x2, 0x103, 
       0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 
       0x23, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x8, 0x2, 0x2, 0x106, 
       0x10b, 0x5, 0x26, 0x14, 0x2, 0x107, 0x108, 0x7, 0x9, 0x2, 0x2, 0x108, 
       0x10a, 0x5, 0x26, 0x14, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10a, 
       0x10d, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 
       0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10d, 
       0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0xa, 0x2, 0x2, 0x10f, 
       0x25, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x5, 0x12, 0xa, 0x2, 0x111, 
       0x27, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x5, 0x14, 0xb, 0x2, 0x113, 
       0x114, 0x7, 0xb, 0x2, 0x2, 0x114, 0x115, 0x5, 0x14, 0xb, 0x2, 0x115, 
       0x29, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0x1d, 0x2, 0x2, 0x117, 
       0x118, 0x7, 0xc, 0x2, 0x2, 0x118, 0x119, 0x5, 0x2c, 0x17, 0x2, 0x119, 
       0x11a, 0x7, 0xd, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x1e, 0x2, 0x2, 0x11b, 
       0x11c, 0x5, 0x20, 0x11, 0x2, 0x11c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x11d, 
       0x122, 0x5, 0x22, 0x12, 0x2, 0x11e, 0x11f, 0x7, 0x9, 0x2, 0x2, 0x11f, 
       0x121, 0x5, 0x22, 0x12, 0x2, 0x120, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x121, 
       0x124, 0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 
       0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x124, 
       0x122, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x1f, 0x2, 0x2, 0x126, 
       0x128, 0x5, 0x30, 0x19, 0x2, 0x127, 0x129, 0x7, 0x4, 0x2, 0x2, 0x128, 
       0x127, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x5, 0x34, 0x1b, 0x2, 0x12b, 
       0x31, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x20, 0x2, 0x2, 0x12d, 
       0x12e, 0x5, 0x34, 0x1b, 0x2, 0x12e, 0x33, 0x3, 0x2, 0x2, 0x2, 0x12f, 
       0x134, 0x5, 0x36, 0x1c, 0x2, 0x130, 0x131, 0x7, 0x4, 0x2, 0x2, 0x131, 
       0x133, 0x5, 0x36, 0x1c, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x133, 
       0x136, 0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 
       0x135, 0x3, 0x2, 0x2, 0x2, 0x135, 0x35, 0x3, 0x2, 0x2, 0x2, 0x136, 
       0x134, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x5, 0x38, 0x1d, 0x2, 0x138, 
       0x139, 0x7, 0xe, 0x2, 0x2, 0x139, 0x13a, 0x5, 0x20, 0x11, 0x2, 0x13a, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x140, 0x5, 0x3a, 0x1e, 0x2, 0x13c, 
       0x13d, 0x7, 0x9, 0x2, 0x2, 0x13d, 0x13f, 0x5, 0x3a, 0x1e, 0x2, 0x13e, 
       0x13c, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x142, 0x3, 0x2, 0x2, 0x2, 0x140, 
       0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x143, 
       0x144, 0x7, 0x30, 0x2, 0x2, 0x144, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x145, 
       0x14a, 0x5, 0x3e, 0x20, 0x2, 0x146, 0x147, 0x7, 0x4, 0x2, 0x2, 0x147, 
       0x149, 0x5, 0x3e, 0x20, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x149, 
       0x14c, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14a, 
       0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x40, 0x21, 0x2, 0x14e, 
       0x14f, 0x7, 0x8, 0x2, 0x2, 0x14f, 0x150, 0x5, 0x44, 0x23, 0x2, 0x150, 
       0x152, 0x7, 0xa, 0x2, 0x2, 0x151, 0x153, 0x7, 0x1c, 0x2, 0x2, 0x152, 
       0x151, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 
       0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x5, 0x8, 0x5, 0x2, 0x155, 
       0x3f, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x2e, 0x2, 0x2, 0x157, 
       0x159, 0x5, 0x42, 0x22, 0x2, 0x158, 0x15a, 0x5, 0x44, 0x23, 0x2, 
       0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 
       0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0xe, 0x2, 0x2, 
       0x15c, 0x15d, 0x5, 0x1e, 0x10, 0x2, 0x15d, 0x41, 0x3, 0x2, 0x2, 0x2, 
       0x15e, 0x15f, 0x7, 0x30, 0x2, 0x2, 0x15f, 0x43, 0x3, 0x2, 0x2, 0x2, 
       0x160, 0x161, 0x7, 0x8, 0x2, 0x2, 0x161, 0x162, 0x5, 0x46, 0x24, 
       0x2, 0x162, 0x163, 0x7, 0xa, 0x2, 0x2, 0x163, 0x45, 0x3, 0x2, 0x2, 
       0x2, 0x164, 0x169, 0x5, 0x48, 0x25, 0x2, 0x165, 0x166, 0x7, 0x4, 
       0x2, 0x2, 0x166, 0x168, 0x5, 0x48, 0x25, 0x2, 0x167, 0x165, 0x3, 
       0x2, 0x2, 0x2, 0x168, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 
       0x2, 0x2, 0x2, 0x169, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x47, 0x3, 
       0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16e, 0x7, 
       0x20, 0x2, 0x2, 0x16d, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 
       0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x5, 
       0x4a, 0x26, 0x2, 0x170, 0x171, 0x7, 0xe, 0x2, 0x2, 0x171, 0x172, 
       0x5, 0x1e, 0x10, 0x2, 0x172, 0x49, 0x3, 0x2, 0x2, 0x2, 0x173, 0x178, 
       0x5, 0x4c, 0x27, 0x2, 0x174, 0x175, 0x7, 0x9, 0x2, 0x2, 0x175, 0x177, 
       0x5, 0x4c, 0x27, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x177, 0x17a, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 
       0x3, 0x2, 0x2, 0x2, 0x179, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x178, 
       0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x30, 0x2, 0x2, 0x17c, 0x4d, 
       0x3, 0x2, 0x2, 0x2, 0x17d, 0x187, 0x5, 0x50, 0x29, 0x2, 0x17e, 0x187, 
       0x5, 0x56, 0x2c, 0x2, 0x17f, 0x187, 0x5, 0x5c, 0x2f, 0x2, 0x180, 
       0x187, 0x5, 0x62, 0x32, 0x2, 0x181, 0x187, 0x5, 0x6c, 0x37, 0x2, 
       0x182, 0x187, 0x5, 0x78, 0x3d, 0x2, 0x183, 0x187, 0x5, 0x7a, 0x3e, 
       0x2, 0x184, 0x187, 0x5, 0x70, 0x39, 0x2, 0x185, 0x187, 0x5, 0x52, 
       0x2a, 0x2, 0x186, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x186, 0x17e, 0x3, 0x2, 
       0x2, 0x2, 0x186, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x186, 0x180, 0x3, 0x2, 
       0x2, 0x2, 0x186, 0x181, 0x3, 0x2, 0x2, 0x2, 0x186, 0x182, 0x3, 0x2, 
       0x2, 0x2, 0x186, 0x183, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 
       0x2, 0x2, 0x186, 0x185, 0x3, 0x2, 0x2, 0x2, 0x187, 0x4f, 0x3, 0x2, 
       0x2, 0x2, 0x188, 0x189, 0x7, 0xf, 0x2, 0x2, 0x189, 0x18a, 0x5, 0x54, 
       0x2b, 0x2, 0x18a, 0x18b, 0x7, 0x10, 0x2, 0x2, 0x18b, 0x51, 0x3, 0x2, 
       0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x53, 0x3, 0x2, 
       0x2, 0x2, 0x18e, 0x193, 0x5, 0x4e, 0x28, 0x2, 0x18f, 0x190, 0x7, 
       0x4, 0x2, 0x2, 0x190, 0x192, 0x5, 0x4e, 0x28, 0x2, 0x191, 0x18f, 
       0x3, 0x2, 0x2, 0x2, 0x192, 0x195, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 
       0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 0x2, 0x2, 0x194, 0x55, 
       0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 
       0x5, 0x58, 0x2d, 0x2, 0x197, 0x198, 0x7, 0x11, 0x2, 0x2, 0x198, 0x199, 
       0x5, 0x5a, 0x2e, 0x2, 0x199, 0x57, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 
       0x5, 0x8c, 0x47, 0x2, 0x19b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 
       0x5, 0x84, 0x43, 0x2, 0x19d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 
       0x7, 0x26, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x12, 0x2, 0x2, 0x1a0, 0x1a1, 
       0x5, 0x84, 0x43, 0x2, 0x1a1, 0x1a4, 0x5, 0x5e, 0x30, 0x2, 0x1a2, 
       0x1a3, 0x7, 0x28, 0x2, 0x2, 0x1a3, 0x1a5, 0x5, 0x60, 0x31, 0x2, 0x1a4, 
       0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x4e, 0x28, 0x2, 0x1a7, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x5, 0x4e, 0x28, 0x2, 0x1a9, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x7, 0x29, 0x2, 0x2, 0x1ab, 
       0x1ac, 0x5, 0x84, 0x43, 0x2, 0x1ac, 0x1ad, 0x7, 0xf, 0x2, 0x2, 0x1ad, 
       0x1ae, 0x5, 0x64, 0x33, 0x2, 0x1ae, 0x1af, 0x7, 0x10, 0x2, 0x2, 0x1af, 
       0x63, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b5, 0x5, 0x66, 0x34, 0x2, 0x1b1, 
       0x1b2, 0x7, 0x4, 0x2, 0x2, 0x1b2, 0x1b4, 0x5, 0x66, 0x34, 0x2, 0x1b3, 
       0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
       0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 
       0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
       0x1b9, 0x7, 0x4, 0x2, 0x2, 0x1b9, 0x1ba, 0x7, 0x2f, 0x2, 0x2, 0x1ba, 
       0x1bb, 0x7, 0x4, 0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x4e, 0x28, 0x2, 0x1bc, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x7, 0x2a, 0x2, 0x2, 0x1be, 
       0x1bf, 0x5, 0x68, 0x35, 0x2, 0x1bf, 0x1c0, 0x7, 0xe, 0x2, 0x2, 0x1c0, 
       0x1c1, 0x5, 0x4e, 0x28, 0x2, 0x1c1, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
       0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1c3, 
       0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1c5, 
       0x1ca, 0x5, 0x6a, 0x36, 0x2, 0x1c6, 0x1c7, 0x7, 0x9, 0x2, 0x2, 0x1c7, 
       0x1c9, 0x5, 0x6a, 0x36, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
       0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 
       0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1cc, 
       0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x5, 0x14, 0xb, 0x2, 0x1ce, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1da, 0x7, 0x2b, 0x2, 0x2, 0x1d0, 
       0x1db, 0x5, 0x6e, 0x38, 0x2, 0x1d1, 0x1d2, 0x5, 0x8c, 0x47, 0x2, 
       0x1d2, 0x1d3, 0x7, 0x11, 0x2, 0x2, 0x1d3, 0x1d4, 0x5, 0x84, 0x43, 
       0x2, 0x1d4, 0x1d5, 0x7, 0x4, 0x2, 0x2, 0x1d5, 0x1d6, 0x5, 0x84, 0x43, 
       0x2, 0x1d6, 0x1d7, 0x7, 0x4, 0x2, 0x2, 0x1d7, 0x1d8, 0x5, 0x56, 0x2c, 
       0x2, 0x1d8, 0x1d9, 0x5, 0x4e, 0x28, 0x2, 0x1d9, 0x1db, 0x3, 0x2, 
       0x2, 0x2, 0x1da, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d1, 0x3, 0x2, 
       0x2, 0x2, 0x1db, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x5, 0x84, 
       0x43, 0x2, 0x1dd, 0x1de, 0x5, 0x4e, 0x28, 0x2, 0x1de, 0x6f, 0x3, 
       0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x5, 0x72, 0x3a, 0x2, 0x1e0, 0x1e2, 
       0x7, 0x8, 0x2, 0x2, 0x1e1, 0x1e3, 0x5, 0x74, 0x3b, 0x2, 0x1e2, 0x1e1, 
       0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 
       0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 0xa, 0x2, 0x2, 0x1e5, 0x71, 
       0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x7, 0x30, 0x2, 0x2, 0x1e7, 0x73, 
       0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1ed, 0x5, 0x76, 0x3c, 0x2, 0x1e9, 0x1ea, 
       0x7, 0x9, 0x2, 0x2, 0x1ea, 0x1ec, 0x5, 0x76, 0x3c, 0x2, 0x1eb, 0x1e9, 
       0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1eb, 
       0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 
       0x5, 0x84, 0x43, 0x2, 0x1f1, 0x77, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 
       0x7, 0x2c, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0x7c, 0x3f, 0x2, 0x1f4, 0x79, 
       0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f7, 0x7, 0x2d, 0x2, 0x2, 0x1f6, 0x1f8, 
       0x5, 0x7c, 0x3f, 0x2, 0x1f7, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 
       0x3, 0x2, 0x2, 0x2, 0x1f8, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 
       0x7, 0x8, 0x2, 0x2, 0x1fa, 0x1ff, 0x5, 0x7e, 0x40, 0x2, 0x1fb, 0x1fc, 
       0x7, 0x9, 0x2, 0x2, 0x1fc, 0x1fe, 0x5, 0x7e, 0x40, 0x2, 0x1fd, 0x1fb, 
       0x3, 0x2, 0x2, 0x2, 0x1fe, 0x201, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x1fd, 
       0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x202, 
       0x3, 0x2, 0x2, 0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 
       0x7, 0xa, 0x2, 0x2, 0x203, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x204, 0x207, 
       0x5, 0x84, 0x43, 0x2, 0x205, 0x206, 0x7, 0xe, 0x2, 0x2, 0x206, 0x208, 
       0x5, 0x80, 0x41, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x208, 
       0x3, 0x2, 0x2, 0x2, 0x208, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20b, 
       0x5, 0x16, 0xc, 0x2, 0x20a, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 
       0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20f, 
       0x5, 0x9e, 0x50, 0x2, 0x20d, 0x20e, 0x7, 0xe, 0x2, 0x2, 0x20e, 0x210, 
       0x5, 0x82, 0x42, 0x2, 0x20f, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 
       0x3, 0x2, 0x2, 0x2, 0x210, 0x81, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 
       0x5, 0x9e, 0x50, 0x2, 0x212, 0x83, 0x3, 0x2, 0x2, 0x2, 0x213, 0x217, 
       0x5, 0x86, 0x44, 0x2, 0x214, 0x215, 0x5, 0xa6, 0x54, 0x2, 0x215, 
       0x216, 0x5, 0x86, 0x44, 0x2, 0x216, 0x218, 0x3, 0x2, 0x2, 0x2, 0x217, 
       0x214, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x85, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21b, 0x5, 0x16, 0xc, 0x2, 0x21a, 
       0x219, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21b, 
       0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x222, 0x5, 0x88, 0x45, 0x2, 0x21d, 
       0x21e, 0x5, 0xa8, 0x55, 0x2, 0x21e, 0x21f, 0x5, 0x88, 0x45, 0x2, 
       0x21f, 0x221, 0x3, 0x2, 0x2, 0x2, 0x220, 0x21d, 0x3, 0x2, 0x2, 0x2, 
       0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 
       0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x87, 0x3, 0x2, 0x2, 0x2, 
       0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x225, 0x22b, 0x5, 0x8a, 0x46, 
       0x2, 0x226, 0x227, 0x5, 0xaa, 0x56, 0x2, 0x227, 0x228, 0x5, 0x8a, 
       0x46, 0x2, 0x228, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x229, 0x226, 0x3, 0x2, 
       0x2, 0x2, 0x22a, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x229, 0x3, 0x2, 
       0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x89, 0x3, 0x2, 
       0x2, 0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x23a, 0x5, 0x8c, 
       0x47, 0x2, 0x22f, 0x23a, 0x5, 0x9a, 0x4e, 0x2, 0x230, 0x23a, 0x5, 
       0xa2, 0x52, 0x2, 0x231, 0x23a, 0x5, 0xa4, 0x53, 0x2, 0x232, 0x23a, 
       0x5, 0x96, 0x4c, 0x2, 0x233, 0x234, 0x7, 0x25, 0x2, 0x2, 0x234, 0x23a, 
       0x5, 0x8a, 0x46, 0x2, 0x235, 0x236, 0x7, 0x8, 0x2, 0x2, 0x236, 0x237, 
       0x5, 0x84, 0x43, 0x2, 0x237, 0x238, 0x7, 0xa, 0x2, 0x2, 0x238, 0x23a, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x239, 0x22f, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x230, 0x3, 0x2, 0x2, 0x2, 0x239, 0x231, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x232, 0x3, 0x2, 0x2, 0x2, 0x239, 0x233, 
       0x3, 0x2, 0x2, 0x2, 0x239, 0x235, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x8b, 
       0x3, 0x2, 0x2, 0x2, 0x23b, 0x23f, 0x5, 0x3a, 0x1e, 0x2, 0x23c, 0x23e, 
       0x5, 0x8e, 0x48, 0x2, 0x23d, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x241, 
       0x3, 0x2, 0x2, 0x2, 0x23f, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x241, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x7, 0xc, 0x2, 0x2, 0x243, 0x244, 
       0x5, 0x90, 0x49, 0x2, 0x244, 0x245, 0x7, 0xd, 0x2, 0x2, 0x245, 0x249, 
       0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x7, 0x3, 0x2, 0x2, 0x247, 0x249, 
       0x5, 0x94, 0x4b, 0x2, 0x248, 0x242, 0x3, 0x2, 0x2, 0x2, 0x248, 0x246, 
       0x3, 0x2, 0x2, 0x2, 0x249, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24f, 
       0x5, 0x92, 0x4a, 0x2, 0x24b, 0x24c, 0x7, 0x9, 0x2, 0x2, 0x24c, 0x24e, 
       0x5, 0x92, 0x4a, 0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x251, 
       0x3, 0x2, 0x2, 0x2, 0x24f, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 
       0x3, 0x2, 0x2, 0x2, 0x250, 0x91, 0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 
       0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x5, 0x84, 0x43, 0x2, 0x253, 0x93, 
       0x3, 0x2, 0x2, 0x2, 0x254, 0x255, 0x7, 0x30, 0x2, 0x2, 0x255, 0x95, 
       0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x5, 0x98, 0x4d, 0x2, 0x257, 0x259, 
       0x7, 0x8, 0x2, 0x2, 0x258, 0x25a, 0x5, 0x74, 0x3b, 0x2, 0x259, 0x258, 
       0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 
       0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0xa, 0x2, 0x2, 0x25c, 0x97, 
       0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x7, 0x30, 0x2, 0x2, 0x25e, 0x99, 
       0x3, 0x2, 0x2, 0x2, 0x25f, 0x261, 0x5, 0x16, 0xc, 0x2, 0x260, 0x25f, 
       0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 
       0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 0x5, 0x9c, 0x4f, 0x2, 0x263, 0x9b, 
       0x3, 0x2, 0x2, 0x2, 0x264, 0x267, 0x5, 0x9e, 0x50, 0x2, 0x265, 0x267, 
       0x5, 0xa0, 0x51, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x265, 
       0x3, 0x2, 0x2, 0x2, 0x267, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 
       0x7, 0x31, 0x2, 0x2, 0x269, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 
       0x7, 0x32, 0x2, 0x2, 0x26b, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 
       0x7, 0x36, 0x2, 0x2, 0x26d, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 
       0x7, 0x37, 0x2, 0x2, 0x26f, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x270, 0x271, 
       0x9, 0x3, 0x2, 0x2, 0x271, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 
       0x9, 0x4, 0x2, 0x2, 0x273, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 
       0x9, 0x5, 0x2, 0x2, 0x275, 0xab, 0x3, 0x2, 0x2, 0x2, 0x31, 0xbb, 
       0xc0, 0xc5, 0xca, 0xd4, 0xde, 0xe2, 0xe6, 0xf2, 0xfe, 0x103, 0x10b, 
       0x122, 0x128, 0x134, 0x140, 0x14a, 0x152, 0x159, 0x169, 0x16d, 0x178, 
       0x186, 0x193, 0x1a4, 0x1b5, 0x1c3, 0x1ca, 0x1da, 0x1e2, 0x1ed, 0x1f7, 
       0x1ff, 0x207, 0x20a, 0x20f, 0x217, 0x21a, 0x222, 0x22b, 0x239, 0x23f, 
       0x248, 0x24f, 0x259, 0x260, 0x266, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

goParser::Initializer goParser::_init;
