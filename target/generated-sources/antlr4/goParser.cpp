
// Generated from go.g4 by ANTLR 4.7.2


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


//----------------- SourceFileContext ------------------------------------------------------------------

goParser::SourceFileContext::SourceFileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::PackageClauseContext* goParser::SourceFileContext::packageClause() {
  return getRuleContext<goParser::PackageClauseContext>(0);
}

std::vector<goParser::EosContext *> goParser::SourceFileContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::SourceFileContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
}

std::vector<goParser::ImportDeclContext *> goParser::SourceFileContext::importDecl() {
  return getRuleContexts<goParser::ImportDeclContext>();
}

goParser::ImportDeclContext* goParser::SourceFileContext::importDecl(size_t i) {
  return getRuleContext<goParser::ImportDeclContext>(i);
}

std::vector<goParser::TopLevelDeclContext *> goParser::SourceFileContext::topLevelDecl() {
  return getRuleContexts<goParser::TopLevelDeclContext>();
}

goParser::TopLevelDeclContext* goParser::SourceFileContext::topLevelDecl(size_t i) {
  return getRuleContext<goParser::TopLevelDeclContext>(i);
}


size_t goParser::SourceFileContext::getRuleIndex() const {
  return goParser::RuleSourceFile;
}


antlrcpp::Any goParser::SourceFileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSourceFile(this);
  else
    return visitor->visitChildren(this);
}

goParser::SourceFileContext* goParser::sourceFile() {
  SourceFileContext *_localctx = _tracker.createInstance<SourceFileContext>(_ctx, getState());
  enterRule(_localctx, 0, goParser::RuleSourceFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    packageClause();
    setState(203);
    eos();
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__1) {
      setState(204);
      importDecl();
      setState(205);
      eos();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(217);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__5)
      | (1ULL << goParser::T__8)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__10))) != 0)) {
      setState(212);
      topLevelDecl();
      setState(213);
      eos();
      setState(219);
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

//----------------- PackageClauseContext ------------------------------------------------------------------

goParser::PackageClauseContext::PackageClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::PackageClauseContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::PackageClauseContext::getRuleIndex() const {
  return goParser::RulePackageClause;
}


antlrcpp::Any goParser::PackageClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitPackageClause(this);
  else
    return visitor->visitChildren(this);
}

goParser::PackageClauseContext* goParser::packageClause() {
  PackageClauseContext *_localctx = _tracker.createInstance<PackageClauseContext>(_ctx, getState());
  enterRule(_localctx, 2, goParser::RulePackageClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(goParser::T__0);
    setState(221);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDeclContext ------------------------------------------------------------------

goParser::ImportDeclContext::ImportDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ImportSpecContext *> goParser::ImportDeclContext::importSpec() {
  return getRuleContexts<goParser::ImportSpecContext>();
}

goParser::ImportSpecContext* goParser::ImportDeclContext::importSpec(size_t i) {
  return getRuleContext<goParser::ImportSpecContext>(i);
}

std::vector<goParser::EosContext *> goParser::ImportDeclContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::ImportDeclContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
}


size_t goParser::ImportDeclContext::getRuleIndex() const {
  return goParser::RuleImportDecl;
}


antlrcpp::Any goParser::ImportDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitImportDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::ImportDeclContext* goParser::importDecl() {
  ImportDeclContext *_localctx = _tracker.createInstance<ImportDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, goParser::RuleImportDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(goParser::T__1);
    setState(235);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__4:
      case goParser::IDENTIFIER:
      case goParser::STRING_LIT: {
        setState(224);
        importSpec();
        break;
      }

      case goParser::T__2: {
        setState(225);
        match(goParser::T__2);
        setState(231);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == goParser::T__4

        || _la == goParser::IDENTIFIER || _la == goParser::STRING_LIT) {
          setState(226);
          importSpec();
          setState(227);
          eos();
          setState(233);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(234);
        match(goParser::T__3);
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

//----------------- ImportSpecContext ------------------------------------------------------------------

goParser::ImportSpecContext::ImportSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ImportPathContext* goParser::ImportSpecContext::importPath() {
  return getRuleContext<goParser::ImportPathContext>(0);
}

tree::TerminalNode* goParser::ImportSpecContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::ImportSpecContext::getRuleIndex() const {
  return goParser::RuleImportSpec;
}


antlrcpp::Any goParser::ImportSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitImportSpec(this);
  else
    return visitor->visitChildren(this);
}

goParser::ImportSpecContext* goParser::importSpec() {
  ImportSpecContext *_localctx = _tracker.createInstance<ImportSpecContext>(_ctx, getState());
  enterRule(_localctx, 6, goParser::RuleImportSpec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__4

    || _la == goParser::IDENTIFIER) {
      setState(237);
      _la = _input->LA(1);
      if (!(_la == goParser::T__4

      || _la == goParser::IDENTIFIER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(240);
    importPath();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportPathContext ------------------------------------------------------------------

goParser::ImportPathContext::ImportPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ImportPathContext::STRING_LIT() {
  return getToken(goParser::STRING_LIT, 0);
}


size_t goParser::ImportPathContext::getRuleIndex() const {
  return goParser::RuleImportPath;
}


antlrcpp::Any goParser::ImportPathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitImportPath(this);
  else
    return visitor->visitChildren(this);
}

goParser::ImportPathContext* goParser::importPath() {
  ImportPathContext *_localctx = _tracker.createInstance<ImportPathContext>(_ctx, getState());
  enterRule(_localctx, 8, goParser::RuleImportPath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(goParser::STRING_LIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopLevelDeclContext ------------------------------------------------------------------

goParser::TopLevelDeclContext::TopLevelDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::DeclarationContext* goParser::TopLevelDeclContext::declaration() {
  return getRuleContext<goParser::DeclarationContext>(0);
}

goParser::FunctionDeclContext* goParser::TopLevelDeclContext::functionDecl() {
  return getRuleContext<goParser::FunctionDeclContext>(0);
}

goParser::MethodDeclContext* goParser::TopLevelDeclContext::methodDecl() {
  return getRuleContext<goParser::MethodDeclContext>(0);
}


size_t goParser::TopLevelDeclContext::getRuleIndex() const {
  return goParser::RuleTopLevelDecl;
}


antlrcpp::Any goParser::TopLevelDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTopLevelDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::TopLevelDeclContext* goParser::topLevelDecl() {
  TopLevelDeclContext *_localctx = _tracker.createInstance<TopLevelDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, goParser::RuleTopLevelDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(244);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(245);
      functionDecl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(246);
      methodDecl();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

goParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ConstDeclContext* goParser::DeclarationContext::constDecl() {
  return getRuleContext<goParser::ConstDeclContext>(0);
}

goParser::TypeDeclContext* goParser::DeclarationContext::typeDecl() {
  return getRuleContext<goParser::TypeDeclContext>(0);
}

goParser::VarDeclContext* goParser::DeclarationContext::varDecl() {
  return getRuleContext<goParser::VarDeclContext>(0);
}


size_t goParser::DeclarationContext::getRuleIndex() const {
  return goParser::RuleDeclaration;
}


antlrcpp::Any goParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

goParser::DeclarationContext* goParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, goParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__5: {
        enterOuterAlt(_localctx, 1);
        setState(249);
        constDecl();
        break;
      }

      case goParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(250);
        typeDecl();
        break;
      }

      case goParser::T__10: {
        enterOuterAlt(_localctx, 3);
        setState(251);
        varDecl();
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

//----------------- ConstDeclContext ------------------------------------------------------------------

goParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ConstSpecContext *> goParser::ConstDeclContext::constSpec() {
  return getRuleContexts<goParser::ConstSpecContext>();
}

goParser::ConstSpecContext* goParser::ConstDeclContext::constSpec(size_t i) {
  return getRuleContext<goParser::ConstSpecContext>(i);
}

std::vector<goParser::EosContext *> goParser::ConstDeclContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::ConstDeclContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
}


size_t goParser::ConstDeclContext::getRuleIndex() const {
  return goParser::RuleConstDecl;
}


antlrcpp::Any goParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConstDeclContext* goParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, goParser::RuleConstDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(goParser::T__5);
    setState(266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::IDENTIFIER: {
        setState(255);
        constSpec();
        break;
      }

      case goParser::T__2: {
        setState(256);
        match(goParser::T__2);
        setState(262);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == goParser::IDENTIFIER) {
          setState(257);
          constSpec();
          setState(258);
          eos();
          setState(264);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(265);
        match(goParser::T__3);
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

//----------------- ConstSpecContext ------------------------------------------------------------------

goParser::ConstSpecContext::ConstSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IdentifierListContext* goParser::ConstSpecContext::identifierList() {
  return getRuleContext<goParser::IdentifierListContext>(0);
}

goParser::ExpressionListContext* goParser::ConstSpecContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}

goParser::TypeContext* goParser::ConstSpecContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::ConstSpecContext::getRuleIndex() const {
  return goParser::RuleConstSpec;
}


antlrcpp::Any goParser::ConstSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConstSpec(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConstSpecContext* goParser::constSpec() {
  ConstSpecContext *_localctx = _tracker.createInstance<ConstSpecContext>(_ctx, getState());
  enterRule(_localctx, 16, goParser::RuleConstSpec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    identifierList();
    setState(274);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(270);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << goParser::T__2)
        | (1ULL << goParser::T__9)
        | (1ULL << goParser::T__13)
        | (1ULL << goParser::T__20)
        | (1ULL << goParser::T__45)
        | (1ULL << goParser::T__47)
        | (1ULL << goParser::T__48)
        | (1ULL << goParser::T__49)
        | (1ULL << goParser::T__51)
        | (1ULL << goParser::IDENTIFIER))) != 0)) {
        setState(269);
        type();
      }
      setState(272);
      match(goParser::T__6);
      setState(273);
      expressionList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

goParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> goParser::IdentifierListContext::IDENTIFIER() {
  return getTokens(goParser::IDENTIFIER);
}

tree::TerminalNode* goParser::IdentifierListContext::IDENTIFIER(size_t i) {
  return getToken(goParser::IDENTIFIER, i);
}


size_t goParser::IdentifierListContext::getRuleIndex() const {
  return goParser::RuleIdentifierList;
}


antlrcpp::Any goParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

goParser::IdentifierListContext* goParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 18, goParser::RuleIdentifierList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(goParser::IDENTIFIER);
    setState(281);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(277);
        match(goParser::T__7);
        setState(278);
        match(goParser::IDENTIFIER); 
      }
      setState(283);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

goParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ExpressionContext *> goParser::ExpressionListContext::expression() {
  return getRuleContexts<goParser::ExpressionContext>();
}

goParser::ExpressionContext* goParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<goParser::ExpressionContext>(i);
}


size_t goParser::ExpressionListContext::getRuleIndex() const {
  return goParser::RuleExpressionList;
}


antlrcpp::Any goParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ExpressionListContext* goParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 20, goParser::RuleExpressionList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(284);
    expression(0);
    setState(289);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(285);
        match(goParser::T__7);
        setState(286);
        expression(0); 
      }
      setState(291);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDeclContext ------------------------------------------------------------------

goParser::TypeDeclContext::TypeDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::TypeSpecContext *> goParser::TypeDeclContext::typeSpec() {
  return getRuleContexts<goParser::TypeSpecContext>();
}

goParser::TypeSpecContext* goParser::TypeDeclContext::typeSpec(size_t i) {
  return getRuleContext<goParser::TypeSpecContext>(i);
}

std::vector<goParser::EosContext *> goParser::TypeDeclContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::TypeDeclContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
}


size_t goParser::TypeDeclContext::getRuleIndex() const {
  return goParser::RuleTypeDecl;
}


antlrcpp::Any goParser::TypeDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeDeclContext* goParser::typeDecl() {
  TypeDeclContext *_localctx = _tracker.createInstance<TypeDeclContext>(_ctx, getState());
  enterRule(_localctx, 22, goParser::RuleTypeDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(goParser::T__8);
    setState(304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::IDENTIFIER: {
        setState(293);
        typeSpec();
        break;
      }

      case goParser::T__2: {
        setState(294);
        match(goParser::T__2);
        setState(300);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == goParser::IDENTIFIER) {
          setState(295);
          typeSpec();
          setState(296);
          eos();
          setState(302);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(303);
        match(goParser::T__3);
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

//----------------- TypeSpecContext ------------------------------------------------------------------

goParser::TypeSpecContext::TypeSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::TypeSpecContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::TypeContext* goParser::TypeSpecContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::TypeSpecContext::getRuleIndex() const {
  return goParser::RuleTypeSpec;
}


antlrcpp::Any goParser::TypeSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeSpec(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeSpecContext* goParser::typeSpec() {
  TypeSpecContext *_localctx = _tracker.createInstance<TypeSpecContext>(_ctx, getState());
  enterRule(_localctx, 24, goParser::RuleTypeSpec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(goParser::IDENTIFIER);
    setState(307);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

goParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::FunctionDeclContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::FunctionContext* goParser::FunctionDeclContext::function() {
  return getRuleContext<goParser::FunctionContext>(0);
}

goParser::SignatureContext* goParser::FunctionDeclContext::signature() {
  return getRuleContext<goParser::SignatureContext>(0);
}


size_t goParser::FunctionDeclContext::getRuleIndex() const {
  return goParser::RuleFunctionDecl;
}


antlrcpp::Any goParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::FunctionDeclContext* goParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 26, goParser::RuleFunctionDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(goParser::T__9);
    setState(310);
    match(goParser::IDENTIFIER);
    setState(313);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(311);
      function();
      break;
    }

    case 2: {
      setState(312);
      signature();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

goParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::SignatureContext* goParser::FunctionContext::signature() {
  return getRuleContext<goParser::SignatureContext>(0);
}

goParser::BlockContext* goParser::FunctionContext::block() {
  return getRuleContext<goParser::BlockContext>(0);
}


size_t goParser::FunctionContext::getRuleIndex() const {
  return goParser::RuleFunction;
}


antlrcpp::Any goParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

goParser::FunctionContext* goParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 28, goParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    signature();
    setState(316);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDeclContext ------------------------------------------------------------------

goParser::MethodDeclContext::MethodDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ReceiverContext* goParser::MethodDeclContext::receiver() {
  return getRuleContext<goParser::ReceiverContext>(0);
}

tree::TerminalNode* goParser::MethodDeclContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::FunctionContext* goParser::MethodDeclContext::function() {
  return getRuleContext<goParser::FunctionContext>(0);
}

goParser::SignatureContext* goParser::MethodDeclContext::signature() {
  return getRuleContext<goParser::SignatureContext>(0);
}


size_t goParser::MethodDeclContext::getRuleIndex() const {
  return goParser::RuleMethodDecl;
}


antlrcpp::Any goParser::MethodDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitMethodDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::MethodDeclContext* goParser::methodDecl() {
  MethodDeclContext *_localctx = _tracker.createInstance<MethodDeclContext>(_ctx, getState());
  enterRule(_localctx, 30, goParser::RuleMethodDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    match(goParser::T__9);
    setState(319);
    receiver();
    setState(320);
    match(goParser::IDENTIFIER);
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(321);
      function();
      break;
    }

    case 2: {
      setState(322);
      signature();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReceiverContext ------------------------------------------------------------------

goParser::ReceiverContext::ReceiverContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ParametersContext* goParser::ReceiverContext::parameters() {
  return getRuleContext<goParser::ParametersContext>(0);
}


size_t goParser::ReceiverContext::getRuleIndex() const {
  return goParser::RuleReceiver;
}


antlrcpp::Any goParser::ReceiverContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitReceiver(this);
  else
    return visitor->visitChildren(this);
}

goParser::ReceiverContext* goParser::receiver() {
  ReceiverContext *_localctx = _tracker.createInstance<ReceiverContext>(_ctx, getState());
  enterRule(_localctx, 32, goParser::RuleReceiver);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    parameters();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

goParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::VarSpecContext *> goParser::VarDeclContext::varSpec() {
  return getRuleContexts<goParser::VarSpecContext>();
}

goParser::VarSpecContext* goParser::VarDeclContext::varSpec(size_t i) {
  return getRuleContext<goParser::VarSpecContext>(i);
}

std::vector<goParser::EosContext *> goParser::VarDeclContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::VarDeclContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
}


size_t goParser::VarDeclContext::getRuleIndex() const {
  return goParser::RuleVarDecl;
}


antlrcpp::Any goParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::VarDeclContext* goParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 34, goParser::RuleVarDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(goParser::T__10);
    setState(339);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::IDENTIFIER: {
        setState(328);
        varSpec();
        break;
      }

      case goParser::T__2: {
        setState(329);
        match(goParser::T__2);
        setState(335);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == goParser::IDENTIFIER) {
          setState(330);
          varSpec();
          setState(331);
          eos();
          setState(337);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(338);
        match(goParser::T__3);
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

//----------------- VarSpecContext ------------------------------------------------------------------

goParser::VarSpecContext::VarSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IdentifierListContext* goParser::VarSpecContext::identifierList() {
  return getRuleContext<goParser::IdentifierListContext>(0);
}

goParser::TypeContext* goParser::VarSpecContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}

goParser::ExpressionListContext* goParser::VarSpecContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}


size_t goParser::VarSpecContext::getRuleIndex() const {
  return goParser::RuleVarSpec;
}


antlrcpp::Any goParser::VarSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitVarSpec(this);
  else
    return visitor->visitChildren(this);
}

goParser::VarSpecContext* goParser::varSpec() {
  VarSpecContext *_localctx = _tracker.createInstance<VarSpecContext>(_ctx, getState());
  enterRule(_localctx, 36, goParser::RuleVarSpec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    identifierList();
    setState(349);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__2:
      case goParser::T__9:
      case goParser::T__13:
      case goParser::T__20:
      case goParser::T__45:
      case goParser::T__47:
      case goParser::T__48:
      case goParser::T__49:
      case goParser::T__51:
      case goParser::IDENTIFIER: {
        setState(342);
        type();
        setState(345);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          setState(343);
          match(goParser::T__6);
          setState(344);
          expressionList();
          break;
        }

        }
        break;
      }

      case goParser::T__6: {
        setState(347);
        match(goParser::T__6);
        setState(348);
        expressionList();
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

//----------------- BlockContext ------------------------------------------------------------------

goParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::StatementListContext* goParser::BlockContext::statementList() {
  return getRuleContext<goParser::StatementListContext>(0);
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
  enterRule(_localctx, 38, goParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    match(goParser::T__11);
    setState(352);
    statementList();
    setState(353);
    match(goParser::T__12);
   
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

std::vector<goParser::EosContext *> goParser::StatementListContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::StatementListContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
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
  enterRule(_localctx, 40, goParser::RuleStatementList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__5)
      | (1ULL << goParser::T__8)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__10)
      | (1ULL << goParser::T__11)
      | (1ULL << goParser::T__13)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__25)
      | (1ULL << goParser::T__28)
      | (1ULL << goParser::T__30)
      | (1ULL << goParser::T__31)
      | (1ULL << goParser::T__32)
      | (1ULL << goParser::T__33)
      | (1ULL << goParser::T__34)
      | (1ULL << goParser::T__35)
      | (1ULL << goParser::T__36)
      | (1ULL << goParser::T__38)
      | (1ULL << goParser::T__41)
      | (1ULL << goParser::T__42)
      | (1ULL << goParser::T__44)
      | (1ULL << goParser::T__45)
      | (1ULL << goParser::T__47)
      | (1ULL << goParser::T__48)
      | (1ULL << goParser::T__49)
      | (1ULL << goParser::T__51)
      | (1ULL << goParser::T__60)
      | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
      | (1ULL << (goParser::FLOAT_LIT - 65))
      | (1ULL << (goParser::IMAGINARY_LIT - 65))
      | (1ULL << (goParser::RUNE_LIT - 65))
      | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
      setState(355);
      statement();
      setState(356);
      eos();
      setState(362);
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

//----------------- StatementContext ------------------------------------------------------------------

goParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::DeclarationContext* goParser::StatementContext::declaration() {
  return getRuleContext<goParser::DeclarationContext>(0);
}

goParser::LabeledStmtContext* goParser::StatementContext::labeledStmt() {
  return getRuleContext<goParser::LabeledStmtContext>(0);
}

goParser::SimpleStmtContext* goParser::StatementContext::simpleStmt() {
  return getRuleContext<goParser::SimpleStmtContext>(0);
}

goParser::GoStmtContext* goParser::StatementContext::goStmt() {
  return getRuleContext<goParser::GoStmtContext>(0);
}

goParser::ReturnStmtContext* goParser::StatementContext::returnStmt() {
  return getRuleContext<goParser::ReturnStmtContext>(0);
}

goParser::BreakStmtContext* goParser::StatementContext::breakStmt() {
  return getRuleContext<goParser::BreakStmtContext>(0);
}

goParser::ContinueStmtContext* goParser::StatementContext::continueStmt() {
  return getRuleContext<goParser::ContinueStmtContext>(0);
}

goParser::GotoStmtContext* goParser::StatementContext::gotoStmt() {
  return getRuleContext<goParser::GotoStmtContext>(0);
}

goParser::FallthroughStmtContext* goParser::StatementContext::fallthroughStmt() {
  return getRuleContext<goParser::FallthroughStmtContext>(0);
}

goParser::BlockContext* goParser::StatementContext::block() {
  return getRuleContext<goParser::BlockContext>(0);
}

goParser::IfStmtContext* goParser::StatementContext::ifStmt() {
  return getRuleContext<goParser::IfStmtContext>(0);
}

goParser::SwitchStmtContext* goParser::StatementContext::switchStmt() {
  return getRuleContext<goParser::SwitchStmtContext>(0);
}

goParser::SelectStmtContext* goParser::StatementContext::selectStmt() {
  return getRuleContext<goParser::SelectStmtContext>(0);
}

goParser::ForStmtContext* goParser::StatementContext::forStmt() {
  return getRuleContext<goParser::ForStmtContext>(0);
}

goParser::DeferStmtContext* goParser::StatementContext::deferStmt() {
  return getRuleContext<goParser::DeferStmtContext>(0);
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
  enterRule(_localctx, 42, goParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(363);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(364);
      labeledStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(365);
      simpleStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(366);
      goStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(367);
      returnStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(368);
      breakStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(369);
      continueStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(370);
      gotoStmt();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(371);
      fallthroughStmt();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(372);
      block();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(373);
      ifStmt();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(374);
      switchStmt();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(375);
      selectStmt();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(376);
      forStmt();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(377);
      deferStmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStmtContext ------------------------------------------------------------------

goParser::SimpleStmtContext::SimpleStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::SendStmtContext* goParser::SimpleStmtContext::sendStmt() {
  return getRuleContext<goParser::SendStmtContext>(0);
}

goParser::ExpressionStmtContext* goParser::SimpleStmtContext::expressionStmt() {
  return getRuleContext<goParser::ExpressionStmtContext>(0);
}

goParser::IncDecStmtContext* goParser::SimpleStmtContext::incDecStmt() {
  return getRuleContext<goParser::IncDecStmtContext>(0);
}

goParser::AssignmentContext* goParser::SimpleStmtContext::assignment() {
  return getRuleContext<goParser::AssignmentContext>(0);
}

goParser::ShortVarDeclContext* goParser::SimpleStmtContext::shortVarDecl() {
  return getRuleContext<goParser::ShortVarDeclContext>(0);
}

goParser::EmptyStmtContext* goParser::SimpleStmtContext::emptyStmt() {
  return getRuleContext<goParser::EmptyStmtContext>(0);
}


size_t goParser::SimpleStmtContext::getRuleIndex() const {
  return goParser::RuleSimpleStmt;
}


antlrcpp::Any goParser::SimpleStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSimpleStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::SimpleStmtContext* goParser::simpleStmt() {
  SimpleStmtContext *_localctx = _tracker.createInstance<SimpleStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, goParser::RuleSimpleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(386);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(380);
      sendStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(381);
      expressionStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(382);
      incDecStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(383);
      assignment();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(384);
      shortVarDecl();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(385);
      emptyStmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStmtContext ------------------------------------------------------------------

goParser::ExpressionStmtContext::ExpressionStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::ExpressionStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::ExpressionStmtContext::getRuleIndex() const {
  return goParser::RuleExpressionStmt;
}


antlrcpp::Any goParser::ExpressionStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitExpressionStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::ExpressionStmtContext* goParser::expressionStmt() {
  ExpressionStmtContext *_localctx = _tracker.createInstance<ExpressionStmtContext>(_ctx, getState());
  enterRule(_localctx, 46, goParser::RuleExpressionStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SendStmtContext ------------------------------------------------------------------

goParser::SendStmtContext::SendStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ExpressionContext *> goParser::SendStmtContext::expression() {
  return getRuleContexts<goParser::ExpressionContext>();
}

goParser::ExpressionContext* goParser::SendStmtContext::expression(size_t i) {
  return getRuleContext<goParser::ExpressionContext>(i);
}


size_t goParser::SendStmtContext::getRuleIndex() const {
  return goParser::RuleSendStmt;
}


antlrcpp::Any goParser::SendStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSendStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::SendStmtContext* goParser::sendStmt() {
  SendStmtContext *_localctx = _tracker.createInstance<SendStmtContext>(_ctx, getState());
  enterRule(_localctx, 48, goParser::RuleSendStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    expression(0);
    setState(391);
    match(goParser::T__13);
    setState(392);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncDecStmtContext ------------------------------------------------------------------

goParser::IncDecStmtContext::IncDecStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::IncDecStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::IncDecStmtContext::getRuleIndex() const {
  return goParser::RuleIncDecStmt;
}


antlrcpp::Any goParser::IncDecStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitIncDecStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::IncDecStmtContext* goParser::incDecStmt() {
  IncDecStmtContext *_localctx = _tracker.createInstance<IncDecStmtContext>(_ctx, getState());
  enterRule(_localctx, 50, goParser::RuleIncDecStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    expression(0);
    setState(395);
    _la = _input->LA(1);
    if (!(_la == goParser::T__14

    || _la == goParser::T__15)) {
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

//----------------- AssignmentContext ------------------------------------------------------------------

goParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ExpressionListContext *> goParser::AssignmentContext::expressionList() {
  return getRuleContexts<goParser::ExpressionListContext>();
}

goParser::ExpressionListContext* goParser::AssignmentContext::expressionList(size_t i) {
  return getRuleContext<goParser::ExpressionListContext>(i);
}

goParser::Assign_opContext* goParser::AssignmentContext::assign_op() {
  return getRuleContext<goParser::Assign_opContext>(0);
}


size_t goParser::AssignmentContext::getRuleIndex() const {
  return goParser::RuleAssignment;
}


antlrcpp::Any goParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

goParser::AssignmentContext* goParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 52, goParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    expressionList();
    setState(398);
    assign_op();
    setState(399);
    expressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_opContext ------------------------------------------------------------------

goParser::Assign_opContext::Assign_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::Assign_opContext::getRuleIndex() const {
  return goParser::RuleAssign_op;
}


antlrcpp::Any goParser::Assign_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitAssign_op(this);
  else
    return visitor->visitChildren(this);
}

goParser::Assign_opContext* goParser::assign_op() {
  Assign_opContext *_localctx = _tracker.createInstance<Assign_opContext>(_ctx, getState());
  enterRule(_localctx, 54, goParser::RuleAssign_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__18)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__21)
      | (1ULL << goParser::T__22)
      | (1ULL << goParser::T__23)
      | (1ULL << goParser::T__24)
      | (1ULL << goParser::T__25)
      | (1ULL << goParser::T__26))) != 0)) {
      setState(401);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << goParser::T__16)
        | (1ULL << goParser::T__17)
        | (1ULL << goParser::T__18)
        | (1ULL << goParser::T__19)
        | (1ULL << goParser::T__20)
        | (1ULL << goParser::T__21)
        | (1ULL << goParser::T__22)
        | (1ULL << goParser::T__23)
        | (1ULL << goParser::T__24)
        | (1ULL << goParser::T__25)
        | (1ULL << goParser::T__26))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(404);
    match(goParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShortVarDeclContext ------------------------------------------------------------------

goParser::ShortVarDeclContext::ShortVarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IdentifierListContext* goParser::ShortVarDeclContext::identifierList() {
  return getRuleContext<goParser::IdentifierListContext>(0);
}

goParser::ExpressionListContext* goParser::ShortVarDeclContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}


size_t goParser::ShortVarDeclContext::getRuleIndex() const {
  return goParser::RuleShortVarDecl;
}


antlrcpp::Any goParser::ShortVarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitShortVarDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::ShortVarDeclContext* goParser::shortVarDecl() {
  ShortVarDeclContext *_localctx = _tracker.createInstance<ShortVarDeclContext>(_ctx, getState());
  enterRule(_localctx, 56, goParser::RuleShortVarDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    identifierList();
    setState(407);
    match(goParser::T__27);
    setState(408);
    expressionList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStmtContext ------------------------------------------------------------------

goParser::EmptyStmtContext::EmptyStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::EmptyStmtContext::getRuleIndex() const {
  return goParser::RuleEmptyStmt;
}


antlrcpp::Any goParser::EmptyStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitEmptyStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::EmptyStmtContext* goParser::emptyStmt() {
  EmptyStmtContext *_localctx = _tracker.createInstance<EmptyStmtContext>(_ctx, getState());
  enterRule(_localctx, 58, goParser::RuleEmptyStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(410);
    match(goParser::T__28);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabeledStmtContext ------------------------------------------------------------------

goParser::LabeledStmtContext::LabeledStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::LabeledStmtContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::StatementContext* goParser::LabeledStmtContext::statement() {
  return getRuleContext<goParser::StatementContext>(0);
}


size_t goParser::LabeledStmtContext::getRuleIndex() const {
  return goParser::RuleLabeledStmt;
}


antlrcpp::Any goParser::LabeledStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitLabeledStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::LabeledStmtContext* goParser::labeledStmt() {
  LabeledStmtContext *_localctx = _tracker.createInstance<LabeledStmtContext>(_ctx, getState());
  enterRule(_localctx, 60, goParser::RuleLabeledStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    match(goParser::IDENTIFIER);
    setState(413);
    match(goParser::T__29);
    setState(414);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

goParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionListContext* goParser::ReturnStmtContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}


size_t goParser::ReturnStmtContext::getRuleIndex() const {
  return goParser::RuleReturnStmt;
}


antlrcpp::Any goParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::ReturnStmtContext* goParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 62, goParser::RuleReturnStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(goParser::T__30);
    setState(418);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(417);
      expressionList();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStmtContext ------------------------------------------------------------------

goParser::BreakStmtContext::BreakStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::BreakStmtContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::BreakStmtContext::getRuleIndex() const {
  return goParser::RuleBreakStmt;
}


antlrcpp::Any goParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::BreakStmtContext* goParser::breakStmt() {
  BreakStmtContext *_localctx = _tracker.createInstance<BreakStmtContext>(_ctx, getState());
  enterRule(_localctx, 64, goParser::RuleBreakStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(goParser::T__31);
    setState(422);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(421);
      match(goParser::IDENTIFIER);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ContinueStmtContext ------------------------------------------------------------------

goParser::ContinueStmtContext::ContinueStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::ContinueStmtContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::ContinueStmtContext::getRuleIndex() const {
  return goParser::RuleContinueStmt;
}


antlrcpp::Any goParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::ContinueStmtContext* goParser::continueStmt() {
  ContinueStmtContext *_localctx = _tracker.createInstance<ContinueStmtContext>(_ctx, getState());
  enterRule(_localctx, 66, goParser::RuleContinueStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(424);
    match(goParser::T__32);
    setState(426);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(425);
      match(goParser::IDENTIFIER);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStmtContext ------------------------------------------------------------------

goParser::GotoStmtContext::GotoStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::GotoStmtContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::GotoStmtContext::getRuleIndex() const {
  return goParser::RuleGotoStmt;
}


antlrcpp::Any goParser::GotoStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitGotoStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::GotoStmtContext* goParser::gotoStmt() {
  GotoStmtContext *_localctx = _tracker.createInstance<GotoStmtContext>(_ctx, getState());
  enterRule(_localctx, 68, goParser::RuleGotoStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(goParser::T__33);
    setState(429);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FallthroughStmtContext ------------------------------------------------------------------

goParser::FallthroughStmtContext::FallthroughStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t goParser::FallthroughStmtContext::getRuleIndex() const {
  return goParser::RuleFallthroughStmt;
}


antlrcpp::Any goParser::FallthroughStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFallthroughStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::FallthroughStmtContext* goParser::fallthroughStmt() {
  FallthroughStmtContext *_localctx = _tracker.createInstance<FallthroughStmtContext>(_ctx, getState());
  enterRule(_localctx, 70, goParser::RuleFallthroughStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(goParser::T__34);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeferStmtContext ------------------------------------------------------------------

goParser::DeferStmtContext::DeferStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::DeferStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::DeferStmtContext::getRuleIndex() const {
  return goParser::RuleDeferStmt;
}


antlrcpp::Any goParser::DeferStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitDeferStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::DeferStmtContext* goParser::deferStmt() {
  DeferStmtContext *_localctx = _tracker.createInstance<DeferStmtContext>(_ctx, getState());
  enterRule(_localctx, 72, goParser::RuleDeferStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    match(goParser::T__35);
    setState(434);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

goParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::IfStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

std::vector<goParser::BlockContext *> goParser::IfStmtContext::block() {
  return getRuleContexts<goParser::BlockContext>();
}

goParser::BlockContext* goParser::IfStmtContext::block(size_t i) {
  return getRuleContext<goParser::BlockContext>(i);
}

goParser::SimpleStmtContext* goParser::IfStmtContext::simpleStmt() {
  return getRuleContext<goParser::SimpleStmtContext>(0);
}

goParser::IfStmtContext* goParser::IfStmtContext::ifStmt() {
  return getRuleContext<goParser::IfStmtContext>(0);
}


size_t goParser::IfStmtContext::getRuleIndex() const {
  return goParser::RuleIfStmt;
}


antlrcpp::Any goParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::IfStmtContext* goParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 74, goParser::RuleIfStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    match(goParser::T__36);
    setState(440);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(437);
      simpleStmt();
      setState(438);
      match(goParser::T__28);
      break;
    }

    }
    setState(442);
    expression(0);
    setState(443);
    block();
    setState(449);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(444);
      match(goParser::T__37);
      setState(447);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case goParser::T__36: {
          setState(445);
          ifStmt();
          break;
        }

        case goParser::T__11: {
          setState(446);
          block();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStmtContext ------------------------------------------------------------------

goParser::SwitchStmtContext::SwitchStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExprSwitchStmtContext* goParser::SwitchStmtContext::exprSwitchStmt() {
  return getRuleContext<goParser::ExprSwitchStmtContext>(0);
}

goParser::TypeSwitchStmtContext* goParser::SwitchStmtContext::typeSwitchStmt() {
  return getRuleContext<goParser::TypeSwitchStmtContext>(0);
}


size_t goParser::SwitchStmtContext::getRuleIndex() const {
  return goParser::RuleSwitchStmt;
}


antlrcpp::Any goParser::SwitchStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSwitchStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::SwitchStmtContext* goParser::switchStmt() {
  SwitchStmtContext *_localctx = _tracker.createInstance<SwitchStmtContext>(_ctx, getState());
  enterRule(_localctx, 76, goParser::RuleSwitchStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(453);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(451);
      exprSwitchStmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(452);
      typeSwitchStmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprSwitchStmtContext ------------------------------------------------------------------

goParser::ExprSwitchStmtContext::ExprSwitchStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::SimpleStmtContext* goParser::ExprSwitchStmtContext::simpleStmt() {
  return getRuleContext<goParser::SimpleStmtContext>(0);
}

goParser::ExpressionContext* goParser::ExprSwitchStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

std::vector<goParser::ExprCaseClauseContext *> goParser::ExprSwitchStmtContext::exprCaseClause() {
  return getRuleContexts<goParser::ExprCaseClauseContext>();
}

goParser::ExprCaseClauseContext* goParser::ExprSwitchStmtContext::exprCaseClause(size_t i) {
  return getRuleContext<goParser::ExprCaseClauseContext>(i);
}


size_t goParser::ExprSwitchStmtContext::getRuleIndex() const {
  return goParser::RuleExprSwitchStmt;
}


antlrcpp::Any goParser::ExprSwitchStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitExprSwitchStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::ExprSwitchStmtContext* goParser::exprSwitchStmt() {
  ExprSwitchStmtContext *_localctx = _tracker.createInstance<ExprSwitchStmtContext>(_ctx, getState());
  enterRule(_localctx, 78, goParser::RuleExprSwitchStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(goParser::T__38);
    setState(459);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(456);
      simpleStmt();
      setState(457);
      match(goParser::T__28);
      break;
    }

    }
    setState(462);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__13)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__25)
      | (1ULL << goParser::T__45)
      | (1ULL << goParser::T__47)
      | (1ULL << goParser::T__48)
      | (1ULL << goParser::T__49)
      | (1ULL << goParser::T__51)
      | (1ULL << goParser::T__60)
      | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
      | (1ULL << (goParser::FLOAT_LIT - 65))
      | (1ULL << (goParser::IMAGINARY_LIT - 65))
      | (1ULL << (goParser::RUNE_LIT - 65))
      | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
      setState(461);
      expression(0);
    }
    setState(464);
    match(goParser::T__11);
    setState(468);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__39

    || _la == goParser::T__40) {
      setState(465);
      exprCaseClause();
      setState(470);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(471);
    match(goParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprCaseClauseContext ------------------------------------------------------------------

goParser::ExprCaseClauseContext::ExprCaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExprSwitchCaseContext* goParser::ExprCaseClauseContext::exprSwitchCase() {
  return getRuleContext<goParser::ExprSwitchCaseContext>(0);
}

goParser::StatementListContext* goParser::ExprCaseClauseContext::statementList() {
  return getRuleContext<goParser::StatementListContext>(0);
}


size_t goParser::ExprCaseClauseContext::getRuleIndex() const {
  return goParser::RuleExprCaseClause;
}


antlrcpp::Any goParser::ExprCaseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitExprCaseClause(this);
  else
    return visitor->visitChildren(this);
}

goParser::ExprCaseClauseContext* goParser::exprCaseClause() {
  ExprCaseClauseContext *_localctx = _tracker.createInstance<ExprCaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 80, goParser::RuleExprCaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    exprSwitchCase();
    setState(474);
    match(goParser::T__29);
    setState(475);
    statementList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprSwitchCaseContext ------------------------------------------------------------------

goParser::ExprSwitchCaseContext::ExprSwitchCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionListContext* goParser::ExprSwitchCaseContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}


size_t goParser::ExprSwitchCaseContext::getRuleIndex() const {
  return goParser::RuleExprSwitchCase;
}


antlrcpp::Any goParser::ExprSwitchCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitExprSwitchCase(this);
  else
    return visitor->visitChildren(this);
}

goParser::ExprSwitchCaseContext* goParser::exprSwitchCase() {
  ExprSwitchCaseContext *_localctx = _tracker.createInstance<ExprSwitchCaseContext>(_ctx, getState());
  enterRule(_localctx, 82, goParser::RuleExprSwitchCase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(480);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__39: {
        enterOuterAlt(_localctx, 1);
        setState(477);
        match(goParser::T__39);
        setState(478);
        expressionList();
        break;
      }

      case goParser::T__40: {
        enterOuterAlt(_localctx, 2);
        setState(479);
        match(goParser::T__40);
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

//----------------- TypeSwitchStmtContext ------------------------------------------------------------------

goParser::TypeSwitchStmtContext::TypeSwitchStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeSwitchGuardContext* goParser::TypeSwitchStmtContext::typeSwitchGuard() {
  return getRuleContext<goParser::TypeSwitchGuardContext>(0);
}

goParser::SimpleStmtContext* goParser::TypeSwitchStmtContext::simpleStmt() {
  return getRuleContext<goParser::SimpleStmtContext>(0);
}

std::vector<goParser::TypeCaseClauseContext *> goParser::TypeSwitchStmtContext::typeCaseClause() {
  return getRuleContexts<goParser::TypeCaseClauseContext>();
}

goParser::TypeCaseClauseContext* goParser::TypeSwitchStmtContext::typeCaseClause(size_t i) {
  return getRuleContext<goParser::TypeCaseClauseContext>(i);
}


size_t goParser::TypeSwitchStmtContext::getRuleIndex() const {
  return goParser::RuleTypeSwitchStmt;
}


antlrcpp::Any goParser::TypeSwitchStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeSwitchStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeSwitchStmtContext* goParser::typeSwitchStmt() {
  TypeSwitchStmtContext *_localctx = _tracker.createInstance<TypeSwitchStmtContext>(_ctx, getState());
  enterRule(_localctx, 84, goParser::RuleTypeSwitchStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    match(goParser::T__38);
    setState(486);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(483);
      simpleStmt();
      setState(484);
      match(goParser::T__28);
      break;
    }

    }
    setState(488);
    typeSwitchGuard();
    setState(489);
    match(goParser::T__11);
    setState(493);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__39

    || _la == goParser::T__40) {
      setState(490);
      typeCaseClause();
      setState(495);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(496);
    match(goParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSwitchGuardContext ------------------------------------------------------------------

goParser::TypeSwitchGuardContext::TypeSwitchGuardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::PrimaryExprContext* goParser::TypeSwitchGuardContext::primaryExpr() {
  return getRuleContext<goParser::PrimaryExprContext>(0);
}

tree::TerminalNode* goParser::TypeSwitchGuardContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::TypeSwitchGuardContext::getRuleIndex() const {
  return goParser::RuleTypeSwitchGuard;
}


antlrcpp::Any goParser::TypeSwitchGuardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeSwitchGuard(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeSwitchGuardContext* goParser::typeSwitchGuard() {
  TypeSwitchGuardContext *_localctx = _tracker.createInstance<TypeSwitchGuardContext>(_ctx, getState());
  enterRule(_localctx, 86, goParser::RuleTypeSwitchGuard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(498);
      match(goParser::IDENTIFIER);
      setState(499);
      match(goParser::T__27);
      break;
    }

    }
    setState(502);
    primaryExpr(0);
    setState(503);
    match(goParser::T__4);
    setState(504);
    match(goParser::T__2);
    setState(505);
    match(goParser::T__8);
    setState(506);
    match(goParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeCaseClauseContext ------------------------------------------------------------------

goParser::TypeCaseClauseContext::TypeCaseClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeSwitchCaseContext* goParser::TypeCaseClauseContext::typeSwitchCase() {
  return getRuleContext<goParser::TypeSwitchCaseContext>(0);
}

goParser::StatementListContext* goParser::TypeCaseClauseContext::statementList() {
  return getRuleContext<goParser::StatementListContext>(0);
}


size_t goParser::TypeCaseClauseContext::getRuleIndex() const {
  return goParser::RuleTypeCaseClause;
}


antlrcpp::Any goParser::TypeCaseClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeCaseClause(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeCaseClauseContext* goParser::typeCaseClause() {
  TypeCaseClauseContext *_localctx = _tracker.createInstance<TypeCaseClauseContext>(_ctx, getState());
  enterRule(_localctx, 88, goParser::RuleTypeCaseClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    typeSwitchCase();
    setState(509);
    match(goParser::T__29);
    setState(510);
    statementList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSwitchCaseContext ------------------------------------------------------------------

goParser::TypeSwitchCaseContext::TypeSwitchCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeListContext* goParser::TypeSwitchCaseContext::typeList() {
  return getRuleContext<goParser::TypeListContext>(0);
}


size_t goParser::TypeSwitchCaseContext::getRuleIndex() const {
  return goParser::RuleTypeSwitchCase;
}


antlrcpp::Any goParser::TypeSwitchCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeSwitchCase(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeSwitchCaseContext* goParser::typeSwitchCase() {
  TypeSwitchCaseContext *_localctx = _tracker.createInstance<TypeSwitchCaseContext>(_ctx, getState());
  enterRule(_localctx, 90, goParser::RuleTypeSwitchCase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(515);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__39: {
        enterOuterAlt(_localctx, 1);
        setState(512);
        match(goParser::T__39);
        setState(513);
        typeList();
        break;
      }

      case goParser::T__40: {
        enterOuterAlt(_localctx, 2);
        setState(514);
        match(goParser::T__40);
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

//----------------- TypeListContext ------------------------------------------------------------------

goParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::TypeContext *> goParser::TypeListContext::type() {
  return getRuleContexts<goParser::TypeContext>();
}

goParser::TypeContext* goParser::TypeListContext::type(size_t i) {
  return getRuleContext<goParser::TypeContext>(i);
}


size_t goParser::TypeListContext::getRuleIndex() const {
  return goParser::RuleTypeList;
}


antlrcpp::Any goParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeListContext* goParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 92, goParser::RuleTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(517);
    type();
    setState(522);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__7) {
      setState(518);
      match(goParser::T__7);
      setState(519);
      type();
      setState(524);
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

//----------------- SelectStmtContext ------------------------------------------------------------------

goParser::SelectStmtContext::SelectStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::CommClauseContext *> goParser::SelectStmtContext::commClause() {
  return getRuleContexts<goParser::CommClauseContext>();
}

goParser::CommClauseContext* goParser::SelectStmtContext::commClause(size_t i) {
  return getRuleContext<goParser::CommClauseContext>(i);
}


size_t goParser::SelectStmtContext::getRuleIndex() const {
  return goParser::RuleSelectStmt;
}


antlrcpp::Any goParser::SelectStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSelectStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::SelectStmtContext* goParser::selectStmt() {
  SelectStmtContext *_localctx = _tracker.createInstance<SelectStmtContext>(_ctx, getState());
  enterRule(_localctx, 94, goParser::RuleSelectStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(goParser::T__41);
    setState(526);
    match(goParser::T__11);
    setState(530);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == goParser::T__39

    || _la == goParser::T__40) {
      setState(527);
      commClause();
      setState(532);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(533);
    match(goParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommClauseContext ------------------------------------------------------------------

goParser::CommClauseContext::CommClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::CommCaseContext* goParser::CommClauseContext::commCase() {
  return getRuleContext<goParser::CommCaseContext>(0);
}

goParser::StatementListContext* goParser::CommClauseContext::statementList() {
  return getRuleContext<goParser::StatementListContext>(0);
}


size_t goParser::CommClauseContext::getRuleIndex() const {
  return goParser::RuleCommClause;
}


antlrcpp::Any goParser::CommClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCommClause(this);
  else
    return visitor->visitChildren(this);
}

goParser::CommClauseContext* goParser::commClause() {
  CommClauseContext *_localctx = _tracker.createInstance<CommClauseContext>(_ctx, getState());
  enterRule(_localctx, 96, goParser::RuleCommClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    commCase();
    setState(536);
    match(goParser::T__29);
    setState(537);
    statementList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommCaseContext ------------------------------------------------------------------

goParser::CommCaseContext::CommCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::SendStmtContext* goParser::CommCaseContext::sendStmt() {
  return getRuleContext<goParser::SendStmtContext>(0);
}

goParser::RecvStmtContext* goParser::CommCaseContext::recvStmt() {
  return getRuleContext<goParser::RecvStmtContext>(0);
}


size_t goParser::CommCaseContext::getRuleIndex() const {
  return goParser::RuleCommCase;
}


antlrcpp::Any goParser::CommCaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCommCase(this);
  else
    return visitor->visitChildren(this);
}

goParser::CommCaseContext* goParser::commCase() {
  CommCaseContext *_localctx = _tracker.createInstance<CommCaseContext>(_ctx, getState());
  enterRule(_localctx, 98, goParser::RuleCommCase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(545);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__39: {
        enterOuterAlt(_localctx, 1);
        setState(539);
        match(goParser::T__39);
        setState(542);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          setState(540);
          sendStmt();
          break;
        }

        case 2: {
          setState(541);
          recvStmt();
          break;
        }

        }
        break;
      }

      case goParser::T__40: {
        enterOuterAlt(_localctx, 2);
        setState(544);
        match(goParser::T__40);
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

//----------------- RecvStmtContext ------------------------------------------------------------------

goParser::RecvStmtContext::RecvStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::RecvStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::ExpressionListContext* goParser::RecvStmtContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}

goParser::IdentifierListContext* goParser::RecvStmtContext::identifierList() {
  return getRuleContext<goParser::IdentifierListContext>(0);
}


size_t goParser::RecvStmtContext::getRuleIndex() const {
  return goParser::RuleRecvStmt;
}


antlrcpp::Any goParser::RecvStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRecvStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::RecvStmtContext* goParser::recvStmt() {
  RecvStmtContext *_localctx = _tracker.createInstance<RecvStmtContext>(_ctx, getState());
  enterRule(_localctx, 100, goParser::RuleRecvStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(547);
      expressionList();
      setState(548);
      match(goParser::T__6);
      break;
    }

    case 2: {
      setState(550);
      identifierList();
      setState(551);
      match(goParser::T__27);
      break;
    }

    }
    setState(555);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

goParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::BlockContext* goParser::ForStmtContext::block() {
  return getRuleContext<goParser::BlockContext>(0);
}

goParser::ExpressionContext* goParser::ForStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::ForClauseContext* goParser::ForStmtContext::forClause() {
  return getRuleContext<goParser::ForClauseContext>(0);
}

goParser::RangeClauseContext* goParser::ForStmtContext::rangeClause() {
  return getRuleContext<goParser::RangeClauseContext>(0);
}


size_t goParser::ForStmtContext::getRuleIndex() const {
  return goParser::RuleForStmt;
}


antlrcpp::Any goParser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::ForStmtContext* goParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 102, goParser::RuleForStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(goParser::T__42);
    setState(561);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      setState(558);
      expression(0);
      break;
    }

    case 2: {
      setState(559);
      forClause();
      break;
    }

    case 3: {
      setState(560);
      rangeClause();
      break;
    }

    }
    setState(563);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForClauseContext ------------------------------------------------------------------

goParser::ForClauseContext::ForClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::SimpleStmtContext *> goParser::ForClauseContext::simpleStmt() {
  return getRuleContexts<goParser::SimpleStmtContext>();
}

goParser::SimpleStmtContext* goParser::ForClauseContext::simpleStmt(size_t i) {
  return getRuleContext<goParser::SimpleStmtContext>(i);
}

goParser::ExpressionContext* goParser::ForClauseContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::ForClauseContext::getRuleIndex() const {
  return goParser::RuleForClause;
}


antlrcpp::Any goParser::ForClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitForClause(this);
  else
    return visitor->visitChildren(this);
}

goParser::ForClauseContext* goParser::forClause() {
  ForClauseContext *_localctx = _tracker.createInstance<ForClauseContext>(_ctx, getState());
  enterRule(_localctx, 104, goParser::RuleForClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(566);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(565);
      simpleStmt();
      break;
    }

    }
    setState(568);
    match(goParser::T__28);
    setState(570);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__13)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__25)
      | (1ULL << goParser::T__45)
      | (1ULL << goParser::T__47)
      | (1ULL << goParser::T__48)
      | (1ULL << goParser::T__49)
      | (1ULL << goParser::T__51)
      | (1ULL << goParser::T__60)
      | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
      | (1ULL << (goParser::FLOAT_LIT - 65))
      | (1ULL << (goParser::IMAGINARY_LIT - 65))
      | (1ULL << (goParser::RUNE_LIT - 65))
      | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
      setState(569);
      expression(0);
    }
    setState(572);
    match(goParser::T__28);
    setState(574);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__13)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__25)
      | (1ULL << goParser::T__28)
      | (1ULL << goParser::T__45)
      | (1ULL << goParser::T__47)
      | (1ULL << goParser::T__48)
      | (1ULL << goParser::T__49)
      | (1ULL << goParser::T__51)
      | (1ULL << goParser::T__60)
      | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
      | (1ULL << (goParser::FLOAT_LIT - 65))
      | (1ULL << (goParser::IMAGINARY_LIT - 65))
      | (1ULL << (goParser::RUNE_LIT - 65))
      | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
      setState(573);
      simpleStmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeClauseContext ------------------------------------------------------------------

goParser::RangeClauseContext::RangeClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::RangeClauseContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::ExpressionListContext* goParser::RangeClauseContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}

goParser::IdentifierListContext* goParser::RangeClauseContext::identifierList() {
  return getRuleContext<goParser::IdentifierListContext>(0);
}


size_t goParser::RangeClauseContext::getRuleIndex() const {
  return goParser::RuleRangeClause;
}


antlrcpp::Any goParser::RangeClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitRangeClause(this);
  else
    return visitor->visitChildren(this);
}

goParser::RangeClauseContext* goParser::rangeClause() {
  RangeClauseContext *_localctx = _tracker.createInstance<RangeClauseContext>(_ctx, getState());
  enterRule(_localctx, 106, goParser::RuleRangeClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(582);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(576);
      expressionList();
      setState(577);
      match(goParser::T__6);
      break;
    }

    case 2: {
      setState(579);
      identifierList();
      setState(580);
      match(goParser::T__27);
      break;
    }

    }
    setState(584);
    match(goParser::T__43);
    setState(585);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GoStmtContext ------------------------------------------------------------------

goParser::GoStmtContext::GoStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::GoStmtContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::GoStmtContext::getRuleIndex() const {
  return goParser::RuleGoStmt;
}


antlrcpp::Any goParser::GoStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitGoStmt(this);
  else
    return visitor->visitChildren(this);
}

goParser::GoStmtContext* goParser::goStmt() {
  GoStmtContext *_localctx = _tracker.createInstance<GoStmtContext>(_ctx, getState());
  enterRule(_localctx, 108, goParser::RuleGoStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    match(goParser::T__44);
    setState(588);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

goParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeNameContext* goParser::TypeContext::typeName() {
  return getRuleContext<goParser::TypeNameContext>(0);
}

goParser::TypeLitContext* goParser::TypeContext::typeLit() {
  return getRuleContext<goParser::TypeLitContext>(0);
}

goParser::TypeContext* goParser::TypeContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::TypeContext::getRuleIndex() const {
  return goParser::RuleType;
}


antlrcpp::Any goParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeContext* goParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 110, goParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(596);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(590);
        typeName();
        break;
      }

      case goParser::T__9:
      case goParser::T__13:
      case goParser::T__20:
      case goParser::T__45:
      case goParser::T__47:
      case goParser::T__48:
      case goParser::T__49:
      case goParser::T__51: {
        enterOuterAlt(_localctx, 2);
        setState(591);
        typeLit();
        break;
      }

      case goParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(592);
        match(goParser::T__2);
        setState(593);
        type();
        setState(594);
        match(goParser::T__3);
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

//----------------- TypeNameContext ------------------------------------------------------------------

goParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::TypeNameContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::QualifiedIdentContext* goParser::TypeNameContext::qualifiedIdent() {
  return getRuleContext<goParser::QualifiedIdentContext>(0);
}


size_t goParser::TypeNameContext::getRuleIndex() const {
  return goParser::RuleTypeName;
}


antlrcpp::Any goParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeNameContext* goParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 112, goParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(600);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(598);
      match(goParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(599);
      qualifiedIdent();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeLitContext ------------------------------------------------------------------

goParser::TypeLitContext::TypeLitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ArrayTypeContext* goParser::TypeLitContext::arrayType() {
  return getRuleContext<goParser::ArrayTypeContext>(0);
}

goParser::StructTypeContext* goParser::TypeLitContext::structType() {
  return getRuleContext<goParser::StructTypeContext>(0);
}

goParser::PointerTypeContext* goParser::TypeLitContext::pointerType() {
  return getRuleContext<goParser::PointerTypeContext>(0);
}

goParser::FunctionTypeContext* goParser::TypeLitContext::functionType() {
  return getRuleContext<goParser::FunctionTypeContext>(0);
}

goParser::InterfaceTypeContext* goParser::TypeLitContext::interfaceType() {
  return getRuleContext<goParser::InterfaceTypeContext>(0);
}

goParser::SliceTypeContext* goParser::TypeLitContext::sliceType() {
  return getRuleContext<goParser::SliceTypeContext>(0);
}

goParser::MapTypeContext* goParser::TypeLitContext::mapType() {
  return getRuleContext<goParser::MapTypeContext>(0);
}

goParser::ChannelTypeContext* goParser::TypeLitContext::channelType() {
  return getRuleContext<goParser::ChannelTypeContext>(0);
}


size_t goParser::TypeLitContext::getRuleIndex() const {
  return goParser::RuleTypeLit;
}


antlrcpp::Any goParser::TypeLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeLit(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeLitContext* goParser::typeLit() {
  TypeLitContext *_localctx = _tracker.createInstance<TypeLitContext>(_ctx, getState());
  enterRule(_localctx, 114, goParser::RuleTypeLit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(610);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(602);
      arrayType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(603);
      structType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(604);
      pointerType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(605);
      functionType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(606);
      interfaceType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(607);
      sliceType();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(608);
      mapType();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(609);
      channelType();
      break;
    }

    }
   
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

goParser::ArrayLengthContext* goParser::ArrayTypeContext::arrayLength() {
  return getRuleContext<goParser::ArrayLengthContext>(0);
}

goParser::ElementTypeContext* goParser::ArrayTypeContext::elementType() {
  return getRuleContext<goParser::ElementTypeContext>(0);
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
  enterRule(_localctx, 116, goParser::RuleArrayType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(goParser::T__45);
    setState(613);
    arrayLength();
    setState(614);
    match(goParser::T__46);
    setState(615);
    elementType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayLengthContext ------------------------------------------------------------------

goParser::ArrayLengthContext::ArrayLengthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::ArrayLengthContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::ArrayLengthContext::getRuleIndex() const {
  return goParser::RuleArrayLength;
}


antlrcpp::Any goParser::ArrayLengthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitArrayLength(this);
  else
    return visitor->visitChildren(this);
}

goParser::ArrayLengthContext* goParser::arrayLength() {
  ArrayLengthContext *_localctx = _tracker.createInstance<ArrayLengthContext>(_ctx, getState());
  enterRule(_localctx, 118, goParser::RuleArrayLength);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(617);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementTypeContext ------------------------------------------------------------------

goParser::ElementTypeContext::ElementTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeContext* goParser::ElementTypeContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::ElementTypeContext::getRuleIndex() const {
  return goParser::RuleElementType;
}


antlrcpp::Any goParser::ElementTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitElementType(this);
  else
    return visitor->visitChildren(this);
}

goParser::ElementTypeContext* goParser::elementType() {
  ElementTypeContext *_localctx = _tracker.createInstance<ElementTypeContext>(_ctx, getState());
  enterRule(_localctx, 120, goParser::RuleElementType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerTypeContext ------------------------------------------------------------------

goParser::PointerTypeContext::PointerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeContext* goParser::PointerTypeContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::PointerTypeContext::getRuleIndex() const {
  return goParser::RulePointerType;
}


antlrcpp::Any goParser::PointerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitPointerType(this);
  else
    return visitor->visitChildren(this);
}

goParser::PointerTypeContext* goParser::pointerType() {
  PointerTypeContext *_localctx = _tracker.createInstance<PointerTypeContext>(_ctx, getState());
  enterRule(_localctx, 122, goParser::RulePointerType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    match(goParser::T__20);
    setState(622);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterfaceTypeContext ------------------------------------------------------------------

goParser::InterfaceTypeContext::InterfaceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::MethodSpecContext *> goParser::InterfaceTypeContext::methodSpec() {
  return getRuleContexts<goParser::MethodSpecContext>();
}

goParser::MethodSpecContext* goParser::InterfaceTypeContext::methodSpec(size_t i) {
  return getRuleContext<goParser::MethodSpecContext>(i);
}

std::vector<goParser::EosContext *> goParser::InterfaceTypeContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::InterfaceTypeContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
}


size_t goParser::InterfaceTypeContext::getRuleIndex() const {
  return goParser::RuleInterfaceType;
}


antlrcpp::Any goParser::InterfaceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitInterfaceType(this);
  else
    return visitor->visitChildren(this);
}

goParser::InterfaceTypeContext* goParser::interfaceType() {
  InterfaceTypeContext *_localctx = _tracker.createInstance<InterfaceTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, goParser::RuleInterfaceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(624);
    match(goParser::T__47);
    setState(625);
    match(goParser::T__11);
    setState(631);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(626);
        methodSpec();
        setState(627);
        eos(); 
      }
      setState(633);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(634);
    match(goParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SliceTypeContext ------------------------------------------------------------------

goParser::SliceTypeContext::SliceTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ElementTypeContext* goParser::SliceTypeContext::elementType() {
  return getRuleContext<goParser::ElementTypeContext>(0);
}


size_t goParser::SliceTypeContext::getRuleIndex() const {
  return goParser::RuleSliceType;
}


antlrcpp::Any goParser::SliceTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSliceType(this);
  else
    return visitor->visitChildren(this);
}

goParser::SliceTypeContext* goParser::sliceType() {
  SliceTypeContext *_localctx = _tracker.createInstance<SliceTypeContext>(_ctx, getState());
  enterRule(_localctx, 126, goParser::RuleSliceType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(636);
    match(goParser::T__45);
    setState(637);
    match(goParser::T__46);
    setState(638);
    elementType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MapTypeContext ------------------------------------------------------------------

goParser::MapTypeContext::MapTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeContext* goParser::MapTypeContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}

goParser::ElementTypeContext* goParser::MapTypeContext::elementType() {
  return getRuleContext<goParser::ElementTypeContext>(0);
}


size_t goParser::MapTypeContext::getRuleIndex() const {
  return goParser::RuleMapType;
}


antlrcpp::Any goParser::MapTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitMapType(this);
  else
    return visitor->visitChildren(this);
}

goParser::MapTypeContext* goParser::mapType() {
  MapTypeContext *_localctx = _tracker.createInstance<MapTypeContext>(_ctx, getState());
  enterRule(_localctx, 128, goParser::RuleMapType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(640);
    match(goParser::T__48);
    setState(641);
    match(goParser::T__45);
    setState(642);
    type();
    setState(643);
    match(goParser::T__46);
    setState(644);
    elementType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChannelTypeContext ------------------------------------------------------------------

goParser::ChannelTypeContext::ChannelTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ElementTypeContext* goParser::ChannelTypeContext::elementType() {
  return getRuleContext<goParser::ElementTypeContext>(0);
}


size_t goParser::ChannelTypeContext::getRuleIndex() const {
  return goParser::RuleChannelType;
}


antlrcpp::Any goParser::ChannelTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitChannelType(this);
  else
    return visitor->visitChildren(this);
}

goParser::ChannelTypeContext* goParser::channelType() {
  ChannelTypeContext *_localctx = _tracker.createInstance<ChannelTypeContext>(_ctx, getState());
  enterRule(_localctx, 130, goParser::RuleChannelType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(646);
      match(goParser::T__49);
      break;
    }

    case 2: {
      setState(647);
      match(goParser::T__49);
      setState(648);
      match(goParser::T__13);
      break;
    }

    case 3: {
      setState(649);
      match(goParser::T__13);
      setState(650);
      match(goParser::T__49);
      break;
    }

    }
    setState(653);
    elementType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodSpecContext ------------------------------------------------------------------

goParser::MethodSpecContext::MethodSpecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::MethodSpecContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::ParametersContext* goParser::MethodSpecContext::parameters() {
  return getRuleContext<goParser::ParametersContext>(0);
}

goParser::ResultContext* goParser::MethodSpecContext::result() {
  return getRuleContext<goParser::ResultContext>(0);
}

goParser::TypeNameContext* goParser::MethodSpecContext::typeName() {
  return getRuleContext<goParser::TypeNameContext>(0);
}


size_t goParser::MethodSpecContext::getRuleIndex() const {
  return goParser::RuleMethodSpec;
}


antlrcpp::Any goParser::MethodSpecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitMethodSpec(this);
  else
    return visitor->visitChildren(this);
}

goParser::MethodSpecContext* goParser::methodSpec() {
  MethodSpecContext *_localctx = _tracker.createInstance<MethodSpecContext>(_ctx, getState());
  enterRule(_localctx, 132, goParser::RuleMethodSpec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(663);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(655);

      if (!(noTerminatorAfterParams(2))) throw FailedPredicateException(this, "noTerminatorAfterParams(2)");
      setState(656);
      match(goParser::IDENTIFIER);
      setState(657);
      parameters();
      setState(658);
      result();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(660);
      typeName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(661);
      match(goParser::IDENTIFIER);
      setState(662);
      parameters();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeContext ------------------------------------------------------------------

goParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::SignatureContext* goParser::FunctionTypeContext::signature() {
  return getRuleContext<goParser::SignatureContext>(0);
}


size_t goParser::FunctionTypeContext::getRuleIndex() const {
  return goParser::RuleFunctionType;
}


antlrcpp::Any goParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

goParser::FunctionTypeContext* goParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 134, goParser::RuleFunctionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(goParser::T__9);
    setState(666);
    signature();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignatureContext ------------------------------------------------------------------

goParser::SignatureContext::SignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ParametersContext* goParser::SignatureContext::parameters() {
  return getRuleContext<goParser::ParametersContext>(0);
}

goParser::ResultContext* goParser::SignatureContext::result() {
  return getRuleContext<goParser::ResultContext>(0);
}


size_t goParser::SignatureContext::getRuleIndex() const {
  return goParser::RuleSignature;
}


antlrcpp::Any goParser::SignatureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSignature(this);
  else
    return visitor->visitChildren(this);
}

goParser::SignatureContext* goParser::signature() {
  SignatureContext *_localctx = _tracker.createInstance<SignatureContext>(_ctx, getState());
  enterRule(_localctx, 136, goParser::RuleSignature);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(673);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(668);

      if (!(noTerminatorAfterParams(1))) throw FailedPredicateException(this, "noTerminatorAfterParams(1)");
      setState(669);
      parameters();
      setState(670);
      result();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(672);
      parameters();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultContext ------------------------------------------------------------------

goParser::ResultContext::ResultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ParametersContext* goParser::ResultContext::parameters() {
  return getRuleContext<goParser::ParametersContext>(0);
}

goParser::TypeContext* goParser::ResultContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::ResultContext::getRuleIndex() const {
  return goParser::RuleResult;
}


antlrcpp::Any goParser::ResultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitResult(this);
  else
    return visitor->visitChildren(this);
}

goParser::ResultContext* goParser::result() {
  ResultContext *_localctx = _tracker.createInstance<ResultContext>(_ctx, getState());
  enterRule(_localctx, 138, goParser::RuleResult);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(677);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(675);
      parameters();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(676);
      type();
      break;
    }

    }
   
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

goParser::ParameterListContext* goParser::ParametersContext::parameterList() {
  return getRuleContext<goParser::ParameterListContext>(0);
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
  enterRule(_localctx, 140, goParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(679);
    match(goParser::T__2);
    setState(684);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__13)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__45)
      | (1ULL << goParser::T__47)
      | (1ULL << goParser::T__48)
      | (1ULL << goParser::T__49)
      | (1ULL << goParser::T__50)
      | (1ULL << goParser::T__51)
      | (1ULL << goParser::IDENTIFIER))) != 0)) {
      setState(680);
      parameterList();
      setState(682);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == goParser::T__7) {
        setState(681);
        match(goParser::T__7);
      }
    }
    setState(686);
    match(goParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

goParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ParameterDeclContext *> goParser::ParameterListContext::parameterDecl() {
  return getRuleContexts<goParser::ParameterDeclContext>();
}

goParser::ParameterDeclContext* goParser::ParameterListContext::parameterDecl(size_t i) {
  return getRuleContext<goParser::ParameterDeclContext>(i);
}


size_t goParser::ParameterListContext::getRuleIndex() const {
  return goParser::RuleParameterList;
}


antlrcpp::Any goParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ParameterListContext* goParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 142, goParser::RuleParameterList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(688);
    parameterDecl();
    setState(693);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(689);
        match(goParser::T__7);
        setState(690);
        parameterDecl(); 
      }
      setState(695);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterDeclContext ------------------------------------------------------------------

goParser::ParameterDeclContext::ParameterDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeContext* goParser::ParameterDeclContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}

goParser::IdentifierListContext* goParser::ParameterDeclContext::identifierList() {
  return getRuleContext<goParser::IdentifierListContext>(0);
}


size_t goParser::ParameterDeclContext::getRuleIndex() const {
  return goParser::RuleParameterDecl;
}


antlrcpp::Any goParser::ParameterDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitParameterDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::ParameterDeclContext* goParser::parameterDecl() {
  ParameterDeclContext *_localctx = _tracker.createInstance<ParameterDeclContext>(_ctx, getState());
  enterRule(_localctx, 144, goParser::RuleParameterDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      setState(696);
      identifierList();
      break;
    }

    }
    setState(700);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__50) {
      setState(699);
      match(goParser::T__50);
    }
    setState(702);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperandContext ------------------------------------------------------------------

goParser::OperandContext::OperandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::LiteralContext* goParser::OperandContext::literal() {
  return getRuleContext<goParser::LiteralContext>(0);
}

goParser::OperandNameContext* goParser::OperandContext::operandName() {
  return getRuleContext<goParser::OperandNameContext>(0);
}

goParser::MethodExprContext* goParser::OperandContext::methodExpr() {
  return getRuleContext<goParser::MethodExprContext>(0);
}

goParser::ExpressionContext* goParser::OperandContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::OperandContext::getRuleIndex() const {
  return goParser::RuleOperand;
}


antlrcpp::Any goParser::OperandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitOperand(this);
  else
    return visitor->visitChildren(this);
}

goParser::OperandContext* goParser::operand() {
  OperandContext *_localctx = _tracker.createInstance<OperandContext>(_ctx, getState());
  enterRule(_localctx, 146, goParser::RuleOperand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(711);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(704);
      literal();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(705);
      operandName();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(706);
      methodExpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(707);
      match(goParser::T__2);
      setState(708);
      expression(0);
      setState(709);
      match(goParser::T__3);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

goParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::BasicLitContext* goParser::LiteralContext::basicLit() {
  return getRuleContext<goParser::BasicLitContext>(0);
}

goParser::CompositeLitContext* goParser::LiteralContext::compositeLit() {
  return getRuleContext<goParser::CompositeLitContext>(0);
}

goParser::FunctionLitContext* goParser::LiteralContext::functionLit() {
  return getRuleContext<goParser::FunctionLitContext>(0);
}


size_t goParser::LiteralContext::getRuleIndex() const {
  return goParser::RuleLiteral;
}


antlrcpp::Any goParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

goParser::LiteralContext* goParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 148, goParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(716);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::INT_LIT:
      case goParser::FLOAT_LIT:
      case goParser::IMAGINARY_LIT:
      case goParser::RUNE_LIT:
      case goParser::STRING_LIT: {
        enterOuterAlt(_localctx, 1);
        setState(713);
        basicLit();
        break;
      }

      case goParser::T__45:
      case goParser::T__48:
      case goParser::T__51:
      case goParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(714);
        compositeLit();
        break;
      }

      case goParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(715);
        functionLit();
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

//----------------- BasicLitContext ------------------------------------------------------------------

goParser::BasicLitContext::BasicLitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::BasicLitContext::INT_LIT() {
  return getToken(goParser::INT_LIT, 0);
}

tree::TerminalNode* goParser::BasicLitContext::FLOAT_LIT() {
  return getToken(goParser::FLOAT_LIT, 0);
}

tree::TerminalNode* goParser::BasicLitContext::IMAGINARY_LIT() {
  return getToken(goParser::IMAGINARY_LIT, 0);
}

tree::TerminalNode* goParser::BasicLitContext::RUNE_LIT() {
  return getToken(goParser::RUNE_LIT, 0);
}

tree::TerminalNode* goParser::BasicLitContext::STRING_LIT() {
  return getToken(goParser::STRING_LIT, 0);
}


size_t goParser::BasicLitContext::getRuleIndex() const {
  return goParser::RuleBasicLit;
}


antlrcpp::Any goParser::BasicLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitBasicLit(this);
  else
    return visitor->visitChildren(this);
}

goParser::BasicLitContext* goParser::basicLit() {
  BasicLitContext *_localctx = _tracker.createInstance<BasicLitContext>(_ctx, getState());
  enterRule(_localctx, 150, goParser::RuleBasicLit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(718);
    _la = _input->LA(1);
    if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
      | (1ULL << (goParser::FLOAT_LIT - 65))
      | (1ULL << (goParser::IMAGINARY_LIT - 65))
      | (1ULL << (goParser::RUNE_LIT - 65))
      | (1ULL << (goParser::STRING_LIT - 65)))) != 0))) {
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

//----------------- OperandNameContext ------------------------------------------------------------------

goParser::OperandNameContext::OperandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::OperandNameContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::QualifiedIdentContext* goParser::OperandNameContext::qualifiedIdent() {
  return getRuleContext<goParser::QualifiedIdentContext>(0);
}


size_t goParser::OperandNameContext::getRuleIndex() const {
  return goParser::RuleOperandName;
}


antlrcpp::Any goParser::OperandNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitOperandName(this);
  else
    return visitor->visitChildren(this);
}

goParser::OperandNameContext* goParser::operandName() {
  OperandNameContext *_localctx = _tracker.createInstance<OperandNameContext>(_ctx, getState());
  enterRule(_localctx, 152, goParser::RuleOperandName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(722);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(720);
      match(goParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(721);
      qualifiedIdent();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QualifiedIdentContext ------------------------------------------------------------------

goParser::QualifiedIdentContext::QualifiedIdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> goParser::QualifiedIdentContext::IDENTIFIER() {
  return getTokens(goParser::IDENTIFIER);
}

tree::TerminalNode* goParser::QualifiedIdentContext::IDENTIFIER(size_t i) {
  return getToken(goParser::IDENTIFIER, i);
}


size_t goParser::QualifiedIdentContext::getRuleIndex() const {
  return goParser::RuleQualifiedIdent;
}


antlrcpp::Any goParser::QualifiedIdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitQualifiedIdent(this);
  else
    return visitor->visitChildren(this);
}

goParser::QualifiedIdentContext* goParser::qualifiedIdent() {
  QualifiedIdentContext *_localctx = _tracker.createInstance<QualifiedIdentContext>(_ctx, getState());
  enterRule(_localctx, 154, goParser::RuleQualifiedIdent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(724);
    match(goParser::IDENTIFIER);
    setState(725);
    match(goParser::T__4);
    setState(726);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompositeLitContext ------------------------------------------------------------------

goParser::CompositeLitContext::CompositeLitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::LiteralTypeContext* goParser::CompositeLitContext::literalType() {
  return getRuleContext<goParser::LiteralTypeContext>(0);
}

goParser::LiteralValueContext* goParser::CompositeLitContext::literalValue() {
  return getRuleContext<goParser::LiteralValueContext>(0);
}


size_t goParser::CompositeLitContext::getRuleIndex() const {
  return goParser::RuleCompositeLit;
}


antlrcpp::Any goParser::CompositeLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitCompositeLit(this);
  else
    return visitor->visitChildren(this);
}

goParser::CompositeLitContext* goParser::compositeLit() {
  CompositeLitContext *_localctx = _tracker.createInstance<CompositeLitContext>(_ctx, getState());
  enterRule(_localctx, 156, goParser::RuleCompositeLit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    literalType();
    setState(729);
    literalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralTypeContext ------------------------------------------------------------------

goParser::LiteralTypeContext::LiteralTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::StructTypeContext* goParser::LiteralTypeContext::structType() {
  return getRuleContext<goParser::StructTypeContext>(0);
}

goParser::ArrayTypeContext* goParser::LiteralTypeContext::arrayType() {
  return getRuleContext<goParser::ArrayTypeContext>(0);
}

goParser::ElementTypeContext* goParser::LiteralTypeContext::elementType() {
  return getRuleContext<goParser::ElementTypeContext>(0);
}

goParser::SliceTypeContext* goParser::LiteralTypeContext::sliceType() {
  return getRuleContext<goParser::SliceTypeContext>(0);
}

goParser::MapTypeContext* goParser::LiteralTypeContext::mapType() {
  return getRuleContext<goParser::MapTypeContext>(0);
}

goParser::TypeNameContext* goParser::LiteralTypeContext::typeName() {
  return getRuleContext<goParser::TypeNameContext>(0);
}


size_t goParser::LiteralTypeContext::getRuleIndex() const {
  return goParser::RuleLiteralType;
}


antlrcpp::Any goParser::LiteralTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitLiteralType(this);
  else
    return visitor->visitChildren(this);
}

goParser::LiteralTypeContext* goParser::literalType() {
  LiteralTypeContext *_localctx = _tracker.createInstance<LiteralTypeContext>(_ctx, getState());
  enterRule(_localctx, 158, goParser::RuleLiteralType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(740);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(731);
      structType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(732);
      arrayType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(733);
      match(goParser::T__45);
      setState(734);
      match(goParser::T__50);
      setState(735);
      match(goParser::T__46);
      setState(736);
      elementType();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(737);
      sliceType();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(738);
      mapType();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(739);
      typeName();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralValueContext ------------------------------------------------------------------

goParser::LiteralValueContext::LiteralValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ElementListContext* goParser::LiteralValueContext::elementList() {
  return getRuleContext<goParser::ElementListContext>(0);
}


size_t goParser::LiteralValueContext::getRuleIndex() const {
  return goParser::RuleLiteralValue;
}


antlrcpp::Any goParser::LiteralValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitLiteralValue(this);
  else
    return visitor->visitChildren(this);
}

goParser::LiteralValueContext* goParser::literalValue() {
  LiteralValueContext *_localctx = _tracker.createInstance<LiteralValueContext>(_ctx, getState());
  enterRule(_localctx, 160, goParser::RuleLiteralValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(742);
    match(goParser::T__11);
    setState(747);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__11)
      | (1ULL << goParser::T__13)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__25)
      | (1ULL << goParser::T__45)
      | (1ULL << goParser::T__47)
      | (1ULL << goParser::T__48)
      | (1ULL << goParser::T__49)
      | (1ULL << goParser::T__51)
      | (1ULL << goParser::T__60)
      | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
      | (1ULL << (goParser::FLOAT_LIT - 65))
      | (1ULL << (goParser::IMAGINARY_LIT - 65))
      | (1ULL << (goParser::RUNE_LIT - 65))
      | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
      setState(743);
      elementList();
      setState(745);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == goParser::T__7) {
        setState(744);
        match(goParser::T__7);
      }
    }
    setState(749);
    match(goParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementListContext ------------------------------------------------------------------

goParser::ElementListContext::ElementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::KeyedElementContext *> goParser::ElementListContext::keyedElement() {
  return getRuleContexts<goParser::KeyedElementContext>();
}

goParser::KeyedElementContext* goParser::ElementListContext::keyedElement(size_t i) {
  return getRuleContext<goParser::KeyedElementContext>(i);
}


size_t goParser::ElementListContext::getRuleIndex() const {
  return goParser::RuleElementList;
}


antlrcpp::Any goParser::ElementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitElementList(this);
  else
    return visitor->visitChildren(this);
}

goParser::ElementListContext* goParser::elementList() {
  ElementListContext *_localctx = _tracker.createInstance<ElementListContext>(_ctx, getState());
  enterRule(_localctx, 162, goParser::RuleElementList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(751);
    keyedElement();
    setState(756);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(752);
        match(goParser::T__7);
        setState(753);
        keyedElement(); 
      }
      setState(758);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyedElementContext ------------------------------------------------------------------

goParser::KeyedElementContext::KeyedElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ElementContext* goParser::KeyedElementContext::element() {
  return getRuleContext<goParser::ElementContext>(0);
}

goParser::KeyContext* goParser::KeyedElementContext::key() {
  return getRuleContext<goParser::KeyContext>(0);
}


size_t goParser::KeyedElementContext::getRuleIndex() const {
  return goParser::RuleKeyedElement;
}


antlrcpp::Any goParser::KeyedElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitKeyedElement(this);
  else
    return visitor->visitChildren(this);
}

goParser::KeyedElementContext* goParser::keyedElement() {
  KeyedElementContext *_localctx = _tracker.createInstance<KeyedElementContext>(_ctx, getState());
  enterRule(_localctx, 164, goParser::RuleKeyedElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(762);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      setState(759);
      key();
      setState(760);
      match(goParser::T__29);
      break;
    }

    }
    setState(764);
    element();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyContext ------------------------------------------------------------------

goParser::KeyContext::KeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::KeyContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}

goParser::ExpressionContext* goParser::KeyContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::LiteralValueContext* goParser::KeyContext::literalValue() {
  return getRuleContext<goParser::LiteralValueContext>(0);
}


size_t goParser::KeyContext::getRuleIndex() const {
  return goParser::RuleKey;
}


antlrcpp::Any goParser::KeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitKey(this);
  else
    return visitor->visitChildren(this);
}

goParser::KeyContext* goParser::key() {
  KeyContext *_localctx = _tracker.createInstance<KeyContext>(_ctx, getState());
  enterRule(_localctx, 166, goParser::RuleKey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(769);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(766);
      match(goParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(767);
      expression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(768);
      literalValue();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

goParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionContext* goParser::ElementContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}

goParser::LiteralValueContext* goParser::ElementContext::literalValue() {
  return getRuleContext<goParser::LiteralValueContext>(0);
}


size_t goParser::ElementContext::getRuleIndex() const {
  return goParser::RuleElement;
}


antlrcpp::Any goParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

goParser::ElementContext* goParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 168, goParser::RuleElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(773);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case goParser::T__2:
      case goParser::T__9:
      case goParser::T__13:
      case goParser::T__16:
      case goParser::T__17:
      case goParser::T__19:
      case goParser::T__20:
      case goParser::T__25:
      case goParser::T__45:
      case goParser::T__47:
      case goParser::T__48:
      case goParser::T__49:
      case goParser::T__51:
      case goParser::T__60:
      case goParser::IDENTIFIER:
      case goParser::INT_LIT:
      case goParser::FLOAT_LIT:
      case goParser::IMAGINARY_LIT:
      case goParser::RUNE_LIT:
      case goParser::STRING_LIT: {
        enterOuterAlt(_localctx, 1);
        setState(771);
        expression(0);
        break;
      }

      case goParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(772);
        literalValue();
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

//----------------- StructTypeContext ------------------------------------------------------------------

goParser::StructTypeContext::StructTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::FieldDeclContext *> goParser::StructTypeContext::fieldDecl() {
  return getRuleContexts<goParser::FieldDeclContext>();
}

goParser::FieldDeclContext* goParser::StructTypeContext::fieldDecl(size_t i) {
  return getRuleContext<goParser::FieldDeclContext>(i);
}

std::vector<goParser::EosContext *> goParser::StructTypeContext::eos() {
  return getRuleContexts<goParser::EosContext>();
}

goParser::EosContext* goParser::StructTypeContext::eos(size_t i) {
  return getRuleContext<goParser::EosContext>(i);
}


size_t goParser::StructTypeContext::getRuleIndex() const {
  return goParser::RuleStructType;
}


antlrcpp::Any goParser::StructTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitStructType(this);
  else
    return visitor->visitChildren(this);
}

goParser::StructTypeContext* goParser::structType() {
  StructTypeContext *_localctx = _tracker.createInstance<StructTypeContext>(_ctx, getState());
  enterRule(_localctx, 170, goParser::RuleStructType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(775);
    match(goParser::T__51);
    setState(776);
    match(goParser::T__11);
    setState(782);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(777);
        fieldDecl();
        setState(778);
        eos(); 
      }
      setState(784);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
    setState(785);
    match(goParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldDeclContext ------------------------------------------------------------------

goParser::FieldDeclContext::FieldDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::IdentifierListContext* goParser::FieldDeclContext::identifierList() {
  return getRuleContext<goParser::IdentifierListContext>(0);
}

goParser::TypeContext* goParser::FieldDeclContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}

goParser::AnonymousFieldContext* goParser::FieldDeclContext::anonymousField() {
  return getRuleContext<goParser::AnonymousFieldContext>(0);
}

tree::TerminalNode* goParser::FieldDeclContext::STRING_LIT() {
  return getToken(goParser::STRING_LIT, 0);
}


size_t goParser::FieldDeclContext::getRuleIndex() const {
  return goParser::RuleFieldDecl;
}


antlrcpp::Any goParser::FieldDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFieldDecl(this);
  else
    return visitor->visitChildren(this);
}

goParser::FieldDeclContext* goParser::fieldDecl() {
  FieldDeclContext *_localctx = _tracker.createInstance<FieldDeclContext>(_ctx, getState());
  enterRule(_localctx, 172, goParser::RuleFieldDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(792);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      setState(787);

      if (!(noTerminatorBetween(2))) throw FailedPredicateException(this, "noTerminatorBetween(2)");
      setState(788);
      identifierList();
      setState(789);
      type();
      break;
    }

    case 2: {
      setState(791);
      anonymousField();
      break;
    }

    }
    setState(795);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      setState(794);
      match(goParser::STRING_LIT);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnonymousFieldContext ------------------------------------------------------------------

goParser::AnonymousFieldContext::AnonymousFieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeNameContext* goParser::AnonymousFieldContext::typeName() {
  return getRuleContext<goParser::TypeNameContext>(0);
}


size_t goParser::AnonymousFieldContext::getRuleIndex() const {
  return goParser::RuleAnonymousField;
}


antlrcpp::Any goParser::AnonymousFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitAnonymousField(this);
  else
    return visitor->visitChildren(this);
}

goParser::AnonymousFieldContext* goParser::anonymousField() {
  AnonymousFieldContext *_localctx = _tracker.createInstance<AnonymousFieldContext>(_ctx, getState());
  enterRule(_localctx, 174, goParser::RuleAnonymousField);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__20) {
      setState(797);
      match(goParser::T__20);
    }
    setState(800);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionLitContext ------------------------------------------------------------------

goParser::FunctionLitContext::FunctionLitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::FunctionContext* goParser::FunctionLitContext::function() {
  return getRuleContext<goParser::FunctionContext>(0);
}


size_t goParser::FunctionLitContext::getRuleIndex() const {
  return goParser::RuleFunctionLit;
}


antlrcpp::Any goParser::FunctionLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitFunctionLit(this);
  else
    return visitor->visitChildren(this);
}

goParser::FunctionLitContext* goParser::functionLit() {
  FunctionLitContext *_localctx = _tracker.createInstance<FunctionLitContext>(_ctx, getState());
  enterRule(_localctx, 176, goParser::RuleFunctionLit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(802);
    match(goParser::T__9);
    setState(803);
    function();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExprContext ------------------------------------------------------------------

goParser::PrimaryExprContext::PrimaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::OperandContext* goParser::PrimaryExprContext::operand() {
  return getRuleContext<goParser::OperandContext>(0);
}

goParser::ConversionContext* goParser::PrimaryExprContext::conversion() {
  return getRuleContext<goParser::ConversionContext>(0);
}

goParser::PrimaryExprContext* goParser::PrimaryExprContext::primaryExpr() {
  return getRuleContext<goParser::PrimaryExprContext>(0);
}

goParser::SelectorContext* goParser::PrimaryExprContext::selector() {
  return getRuleContext<goParser::SelectorContext>(0);
}

goParser::IndexContext* goParser::PrimaryExprContext::index() {
  return getRuleContext<goParser::IndexContext>(0);
}

goParser::SliceContext* goParser::PrimaryExprContext::slice() {
  return getRuleContext<goParser::SliceContext>(0);
}

goParser::TypeAssertionContext* goParser::PrimaryExprContext::typeAssertion() {
  return getRuleContext<goParser::TypeAssertionContext>(0);
}

goParser::ArgumentsContext* goParser::PrimaryExprContext::arguments() {
  return getRuleContext<goParser::ArgumentsContext>(0);
}


size_t goParser::PrimaryExprContext::getRuleIndex() const {
  return goParser::RulePrimaryExpr;
}


antlrcpp::Any goParser::PrimaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitPrimaryExpr(this);
  else
    return visitor->visitChildren(this);
}


goParser::PrimaryExprContext* goParser::primaryExpr() {
   return primaryExpr(0);
}

goParser::PrimaryExprContext* goParser::primaryExpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  goParser::PrimaryExprContext *_localctx = _tracker.createInstance<PrimaryExprContext>(_ctx, parentState);
  goParser::PrimaryExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 178;
  enterRecursionRule(_localctx, 178, goParser::RulePrimaryExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(808);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      setState(806);
      operand();
      break;
    }

    case 2: {
      setState(807);
      conversion();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(822);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(820);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PrimaryExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePrimaryExpr);
          setState(810);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(811);
          selector();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PrimaryExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePrimaryExpr);
          setState(812);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(813);
          index();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PrimaryExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePrimaryExpr);
          setState(814);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(815);
          slice();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PrimaryExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePrimaryExpr);
          setState(816);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(817);
          typeAssertion();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PrimaryExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePrimaryExpr);
          setState(818);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(819);
          arguments();
          break;
        }

        } 
      }
      setState(824);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SelectorContext ------------------------------------------------------------------

goParser::SelectorContext::SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::SelectorContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::SelectorContext::getRuleIndex() const {
  return goParser::RuleSelector;
}


antlrcpp::Any goParser::SelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSelector(this);
  else
    return visitor->visitChildren(this);
}

goParser::SelectorContext* goParser::selector() {
  SelectorContext *_localctx = _tracker.createInstance<SelectorContext>(_ctx, getState());
  enterRule(_localctx, 180, goParser::RuleSelector);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(825);
    match(goParser::T__4);
    setState(826);
    match(goParser::IDENTIFIER);
   
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
  enterRule(_localctx, 182, goParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    match(goParser::T__45);
    setState(829);
    expression(0);
    setState(830);
    match(goParser::T__46);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SliceContext ------------------------------------------------------------------

goParser::SliceContext::SliceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<goParser::ExpressionContext *> goParser::SliceContext::expression() {
  return getRuleContexts<goParser::ExpressionContext>();
}

goParser::ExpressionContext* goParser::SliceContext::expression(size_t i) {
  return getRuleContext<goParser::ExpressionContext>(i);
}


size_t goParser::SliceContext::getRuleIndex() const {
  return goParser::RuleSlice;
}


antlrcpp::Any goParser::SliceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitSlice(this);
  else
    return visitor->visitChildren(this);
}

goParser::SliceContext* goParser::slice() {
  SliceContext *_localctx = _tracker.createInstance<SliceContext>(_ctx, getState());
  enterRule(_localctx, 184, goParser::RuleSlice);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(832);
    match(goParser::T__45);
    setState(848);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      setState(834);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << goParser::T__2)
        | (1ULL << goParser::T__9)
        | (1ULL << goParser::T__13)
        | (1ULL << goParser::T__16)
        | (1ULL << goParser::T__17)
        | (1ULL << goParser::T__19)
        | (1ULL << goParser::T__20)
        | (1ULL << goParser::T__25)
        | (1ULL << goParser::T__45)
        | (1ULL << goParser::T__47)
        | (1ULL << goParser::T__48)
        | (1ULL << goParser::T__49)
        | (1ULL << goParser::T__51)
        | (1ULL << goParser::T__60)
        | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
        | (1ULL << (goParser::FLOAT_LIT - 65))
        | (1ULL << (goParser::IMAGINARY_LIT - 65))
        | (1ULL << (goParser::RUNE_LIT - 65))
        | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
        setState(833);
        expression(0);
      }
      setState(836);
      match(goParser::T__29);
      setState(838);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << goParser::T__2)
        | (1ULL << goParser::T__9)
        | (1ULL << goParser::T__13)
        | (1ULL << goParser::T__16)
        | (1ULL << goParser::T__17)
        | (1ULL << goParser::T__19)
        | (1ULL << goParser::T__20)
        | (1ULL << goParser::T__25)
        | (1ULL << goParser::T__45)
        | (1ULL << goParser::T__47)
        | (1ULL << goParser::T__48)
        | (1ULL << goParser::T__49)
        | (1ULL << goParser::T__51)
        | (1ULL << goParser::T__60)
        | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
        | (1ULL << (goParser::FLOAT_LIT - 65))
        | (1ULL << (goParser::IMAGINARY_LIT - 65))
        | (1ULL << (goParser::RUNE_LIT - 65))
        | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
        setState(837);
        expression(0);
      }
      break;
    }

    case 2: {
      setState(841);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << goParser::T__2)
        | (1ULL << goParser::T__9)
        | (1ULL << goParser::T__13)
        | (1ULL << goParser::T__16)
        | (1ULL << goParser::T__17)
        | (1ULL << goParser::T__19)
        | (1ULL << goParser::T__20)
        | (1ULL << goParser::T__25)
        | (1ULL << goParser::T__45)
        | (1ULL << goParser::T__47)
        | (1ULL << goParser::T__48)
        | (1ULL << goParser::T__49)
        | (1ULL << goParser::T__51)
        | (1ULL << goParser::T__60)
        | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
        | (1ULL << (goParser::FLOAT_LIT - 65))
        | (1ULL << (goParser::IMAGINARY_LIT - 65))
        | (1ULL << (goParser::RUNE_LIT - 65))
        | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
        setState(840);
        expression(0);
      }
      setState(843);
      match(goParser::T__29);
      setState(844);
      expression(0);
      setState(845);
      match(goParser::T__29);
      setState(846);
      expression(0);
      break;
    }

    }
    setState(850);
    match(goParser::T__46);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAssertionContext ------------------------------------------------------------------

goParser::TypeAssertionContext::TypeAssertionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeContext* goParser::TypeAssertionContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::TypeAssertionContext::getRuleIndex() const {
  return goParser::RuleTypeAssertion;
}


antlrcpp::Any goParser::TypeAssertionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitTypeAssertion(this);
  else
    return visitor->visitChildren(this);
}

goParser::TypeAssertionContext* goParser::typeAssertion() {
  TypeAssertionContext *_localctx = _tracker.createInstance<TypeAssertionContext>(_ctx, getState());
  enterRule(_localctx, 186, goParser::RuleTypeAssertion);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(852);
    match(goParser::T__4);
    setState(853);
    match(goParser::T__2);
    setState(854);
    type();
    setState(855);
    match(goParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentsContext ------------------------------------------------------------------

goParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ExpressionListContext* goParser::ArgumentsContext::expressionList() {
  return getRuleContext<goParser::ExpressionListContext>(0);
}

goParser::TypeContext* goParser::ArgumentsContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}


size_t goParser::ArgumentsContext::getRuleIndex() const {
  return goParser::RuleArguments;
}


antlrcpp::Any goParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

goParser::ArgumentsContext* goParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 188, goParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(857);
    match(goParser::T__2);
    setState(872);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << goParser::T__2)
      | (1ULL << goParser::T__9)
      | (1ULL << goParser::T__13)
      | (1ULL << goParser::T__16)
      | (1ULL << goParser::T__17)
      | (1ULL << goParser::T__19)
      | (1ULL << goParser::T__20)
      | (1ULL << goParser::T__25)
      | (1ULL << goParser::T__45)
      | (1ULL << goParser::T__47)
      | (1ULL << goParser::T__48)
      | (1ULL << goParser::T__49)
      | (1ULL << goParser::T__51)
      | (1ULL << goParser::T__60)
      | (1ULL << goParser::IDENTIFIER))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (goParser::INT_LIT - 65))
      | (1ULL << (goParser::FLOAT_LIT - 65))
      | (1ULL << (goParser::IMAGINARY_LIT - 65))
      | (1ULL << (goParser::RUNE_LIT - 65))
      | (1ULL << (goParser::STRING_LIT - 65)))) != 0)) {
      setState(864);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
      case 1: {
        setState(858);
        expressionList();
        break;
      }

      case 2: {
        setState(859);
        type();
        setState(862);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
        case 1: {
          setState(860);
          match(goParser::T__7);
          setState(861);
          expressionList();
          break;
        }

        }
        break;
      }

      }
      setState(867);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == goParser::T__50) {
        setState(866);
        match(goParser::T__50);
      }
      setState(870);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == goParser::T__7) {
        setState(869);
        match(goParser::T__7);
      }
    }
    setState(874);
    match(goParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodExprContext ------------------------------------------------------------------

goParser::MethodExprContext::MethodExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::ReceiverTypeContext* goParser::MethodExprContext::receiverType() {
  return getRuleContext<goParser::ReceiverTypeContext>(0);
}

tree::TerminalNode* goParser::MethodExprContext::IDENTIFIER() {
  return getToken(goParser::IDENTIFIER, 0);
}


size_t goParser::MethodExprContext::getRuleIndex() const {
  return goParser::RuleMethodExpr;
}


antlrcpp::Any goParser::MethodExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitMethodExpr(this);
  else
    return visitor->visitChildren(this);
}

goParser::MethodExprContext* goParser::methodExpr() {
  MethodExprContext *_localctx = _tracker.createInstance<MethodExprContext>(_ctx, getState());
  enterRule(_localctx, 190, goParser::RuleMethodExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(876);
    receiverType();
    setState(877);
    match(goParser::T__4);
    setState(878);
    match(goParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReceiverTypeContext ------------------------------------------------------------------

goParser::ReceiverTypeContext::ReceiverTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeNameContext* goParser::ReceiverTypeContext::typeName() {
  return getRuleContext<goParser::TypeNameContext>(0);
}

goParser::ReceiverTypeContext* goParser::ReceiverTypeContext::receiverType() {
  return getRuleContext<goParser::ReceiverTypeContext>(0);
}


size_t goParser::ReceiverTypeContext::getRuleIndex() const {
  return goParser::RuleReceiverType;
}


antlrcpp::Any goParser::ReceiverTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitReceiverType(this);
  else
    return visitor->visitChildren(this);
}

goParser::ReceiverTypeContext* goParser::receiverType() {
  ReceiverTypeContext *_localctx = _tracker.createInstance<ReceiverTypeContext>(_ctx, getState());
  enterRule(_localctx, 192, goParser::RuleReceiverType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(890);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(880);
      typeName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(881);
      match(goParser::T__2);
      setState(882);
      match(goParser::T__20);
      setState(883);
      typeName();
      setState(884);
      match(goParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(886);
      match(goParser::T__2);
      setState(887);
      receiverType();
      setState(888);
      match(goParser::T__3);
      break;
    }

    }
   
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

goParser::UnaryExprContext* goParser::ExpressionContext::unaryExpr() {
  return getRuleContext<goParser::UnaryExprContext>(0);
}

std::vector<goParser::ExpressionContext *> goParser::ExpressionContext::expression() {
  return getRuleContexts<goParser::ExpressionContext>();
}

goParser::ExpressionContext* goParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<goParser::ExpressionContext>(i);
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
   return expression(0);
}

goParser::ExpressionContext* goParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  goParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  goParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 194;
  enterRecursionRule(_localctx, 194, goParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(893);
    unaryExpr();
    _ctx->stop = _input->LT(-1);
    setState(900);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(895);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(896);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << goParser::T__16)
          | (1ULL << goParser::T__17)
          | (1ULL << goParser::T__18)
          | (1ULL << goParser::T__19)
          | (1ULL << goParser::T__20)
          | (1ULL << goParser::T__21)
          | (1ULL << goParser::T__22)
          | (1ULL << goParser::T__23)
          | (1ULL << goParser::T__24)
          | (1ULL << goParser::T__25)
          | (1ULL << goParser::T__26)
          | (1ULL << goParser::T__52)
          | (1ULL << goParser::T__53)
          | (1ULL << goParser::T__54)
          | (1ULL << goParser::T__55)
          | (1ULL << goParser::T__56)
          | (1ULL << goParser::T__57)
          | (1ULL << goParser::T__58)
          | (1ULL << goParser::T__59))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(897);
        expression(2); 
      }
      setState(902);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExprContext ------------------------------------------------------------------

goParser::UnaryExprContext::UnaryExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::PrimaryExprContext* goParser::UnaryExprContext::primaryExpr() {
  return getRuleContext<goParser::PrimaryExprContext>(0);
}

goParser::UnaryExprContext* goParser::UnaryExprContext::unaryExpr() {
  return getRuleContext<goParser::UnaryExprContext>(0);
}


size_t goParser::UnaryExprContext::getRuleIndex() const {
  return goParser::RuleUnaryExpr;
}


antlrcpp::Any goParser::UnaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitUnaryExpr(this);
  else
    return visitor->visitChildren(this);
}

goParser::UnaryExprContext* goParser::unaryExpr() {
  UnaryExprContext *_localctx = _tracker.createInstance<UnaryExprContext>(_ctx, getState());
  enterRule(_localctx, 196, goParser::RuleUnaryExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(906);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(903);
      primaryExpr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(904);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << goParser::T__13)
        | (1ULL << goParser::T__16)
        | (1ULL << goParser::T__17)
        | (1ULL << goParser::T__19)
        | (1ULL << goParser::T__20)
        | (1ULL << goParser::T__25)
        | (1ULL << goParser::T__60))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(905);
      unaryExpr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConversionContext ------------------------------------------------------------------

goParser::ConversionContext::ConversionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

goParser::TypeContext* goParser::ConversionContext::type() {
  return getRuleContext<goParser::TypeContext>(0);
}

goParser::ExpressionContext* goParser::ConversionContext::expression() {
  return getRuleContext<goParser::ExpressionContext>(0);
}


size_t goParser::ConversionContext::getRuleIndex() const {
  return goParser::RuleConversion;
}


antlrcpp::Any goParser::ConversionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitConversion(this);
  else
    return visitor->visitChildren(this);
}

goParser::ConversionContext* goParser::conversion() {
  ConversionContext *_localctx = _tracker.createInstance<ConversionContext>(_ctx, getState());
  enterRule(_localctx, 198, goParser::RuleConversion);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(908);
    type();
    setState(909);
    match(goParser::T__2);
    setState(910);
    expression(0);
    setState(912);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == goParser::T__7) {
      setState(911);
      match(goParser::T__7);
    }
    setState(914);
    match(goParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

goParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* goParser::EosContext::EOF() {
  return getToken(goParser::EOF, 0);
}


size_t goParser::EosContext::getRuleIndex() const {
  return goParser::RuleEos;
}


antlrcpp::Any goParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<goVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

goParser::EosContext* goParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 200, goParser::RuleEos);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(920);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(916);
      match(goParser::T__28);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(917);
      match(goParser::EOF);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(918);

      if (!(lineTerminatorAhead())) throw FailedPredicateException(this, "lineTerminatorAhead()");
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(919);

      if (!(_input.LT(1).getText().equals("}") )) throw FailedPredicateException(this, "_input.LT(1).getText().equals(\"}\") ");
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool goParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 66: return methodSpecSempred(dynamic_cast<MethodSpecContext *>(context), predicateIndex);
    case 68: return signatureSempred(dynamic_cast<SignatureContext *>(context), predicateIndex);
    case 86: return fieldDeclSempred(dynamic_cast<FieldDeclContext *>(context), predicateIndex);
    case 89: return primaryExprSempred(dynamic_cast<PrimaryExprContext *>(context), predicateIndex);
    case 97: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 100: return eosSempred(dynamic_cast<EosContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool goParser::methodSpecSempred(MethodSpecContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return noTerminatorAfterParams(2);

  default:
    break;
  }
  return true;
}

bool goParser::signatureSempred(SignatureContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return noTerminatorAfterParams(1);

  default:
    break;
  }
  return true;
}

bool goParser::fieldDeclSempred(FieldDeclContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return noTerminatorBetween(2);

  default:
    break;
  }
  return true;
}

bool goParser::primaryExprSempred(PrimaryExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool goParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool goParser::eosSempred(EosContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return lineTerminatorAhead();
    case 10: return _input.LT(1).getText().equals("}") ;

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> goParser::_decisionToDFA;
atn::PredictionContextCache goParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN goParser::_atn;
std::vector<uint16_t> goParser::_serializedATN;

std::vector<std::string> goParser::_ruleNames = {
  "sourceFile", "packageClause", "importDecl", "importSpec", "importPath", 
  "topLevelDecl", "declaration", "constDecl", "constSpec", "identifierList", 
  "expressionList", "typeDecl", "typeSpec", "functionDecl", "function", 
  "methodDecl", "receiver", "varDecl", "varSpec", "block", "statementList", 
  "statement", "simpleStmt", "expressionStmt", "sendStmt", "incDecStmt", 
  "assignment", "assign_op", "shortVarDecl", "emptyStmt", "labeledStmt", 
  "returnStmt", "breakStmt", "continueStmt", "gotoStmt", "fallthroughStmt", 
  "deferStmt", "ifStmt", "switchStmt", "exprSwitchStmt", "exprCaseClause", 
  "exprSwitchCase", "typeSwitchStmt", "typeSwitchGuard", "typeCaseClause", 
  "typeSwitchCase", "typeList", "selectStmt", "commClause", "commCase", 
  "recvStmt", "forStmt", "forClause", "rangeClause", "goStmt", "type", "typeName", 
  "typeLit", "arrayType", "arrayLength", "elementType", "pointerType", "interfaceType", 
  "sliceType", "mapType", "channelType", "methodSpec", "functionType", "signature", 
  "result", "parameters", "parameterList", "parameterDecl", "operand", "literal", 
  "basicLit", "operandName", "qualifiedIdent", "compositeLit", "literalType", 
  "literalValue", "elementList", "keyedElement", "key", "element", "structType", 
  "fieldDecl", "anonymousField", "functionLit", "primaryExpr", "selector", 
  "index", "slice", "typeAssertion", "arguments", "methodExpr", "receiverType", 
  "expression", "unaryExpr", "conversion", "eos"
};

std::vector<std::string> goParser::_literalNames = {
  "", "'package'", "'import'", "'('", "')'", "'.'", "'const'", "'='", "','", 
  "'type'", "'func'", "'var'", "'{'", "'}'", "'<-'", "'++'", "'--'", "'+'", 
  "'-'", "'|'", "'^'", "'*'", "'/'", "'%'", "'<<'", "'>>'", "'&'", "'&^'", 
  "':='", "';'", "':'", "'return'", "'break'", "'continue'", "'goto'", "'fallthrough'", 
  "'defer'", "'if'", "'else'", "'switch'", "'case'", "'default'", "'select'", 
  "'for'", "'range'", "'go'", "'['", "']'", "'interface'", "'map'", "'chan'", 
  "'...'", "'struct'", "'||'", "'&&'", "'=='", "'!='", "'<'", "'<='", "'>'", 
  "'>='", "'!'"
};

std::vector<std::string> goParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "IDENTIFIER", "KEYWORD", "BINARY_OP", 
  "INT_LIT", "FLOAT_LIT", "IMAGINARY_LIT", "RUNE_LIT", "LITTLE_U_VALUE", 
  "BIG_U_VALUE", "STRING_LIT", "WS", "COMMENT", "TERMINATOR", "LINE_COMMENT"
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x4d, 0x39d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xd2, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xd5, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0xda, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xdd, 0xb, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0xe8, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xeb, 0xb, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0xee, 0xa, 0x4, 0x3, 0x5, 0x5, 0x5, 0xf1, 0xa, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0xfa, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xff, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0x107, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x10a, 0xb, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0x10d, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x111, 
    0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x115, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x7, 0xb, 0x11a, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x11d, 
    0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x122, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x125, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x12d, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x130, 
    0xb, 0xd, 0x3, 0xd, 0x5, 0xd, 0x133, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x13c, 0xa, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x146, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0x150, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x153, 0xb, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0x156, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x15c, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 
    0x160, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x169, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0x16c, 0xb, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x17d, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
    0x18, 0x185, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x5, 0x1d, 0x195, 0xa, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x1a5, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0x1a9, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1ad, 0xa, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 
    0x1bb, 0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x1c2, 0xa, 0x27, 0x5, 0x27, 0x1c4, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x5, 0x28, 0x1c8, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x1ce, 0xa, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1d1, 
    0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 0x1d5, 0xa, 0x29, 0xc, 0x29, 
    0xe, 0x29, 0x1d8, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1e3, 
    0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x1e9, 
    0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x1ee, 0xa, 0x2c, 
    0xc, 0x2c, 0xe, 0x2c, 0x1f1, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x1f7, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x206, 0xa, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x20b, 0xa, 0x30, 0xc, 0x30, 
    0xe, 0x30, 0x20e, 0xb, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x7, 0x31, 
    0x213, 0xa, 0x31, 0xc, 0x31, 0xe, 0x31, 0x216, 0xb, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 
    0x33, 0x3, 0x33, 0x5, 0x33, 0x221, 0xa, 0x33, 0x3, 0x33, 0x5, 0x33, 
    0x224, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x5, 0x34, 0x22c, 0xa, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x234, 0xa, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x36, 0x5, 0x36, 0x239, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x5, 0x36, 0x23d, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x241, 
    0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x5, 0x37, 0x249, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x5, 0x39, 0x257, 0xa, 0x39, 0x3, 0x3a, 
    0x3, 0x3a, 0x5, 0x3a, 0x25b, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x265, 
    0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x7, 0x40, 0x278, 
    0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x27b, 0xb, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x28e, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x5, 0x44, 0x29a, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 
    0x46, 0x2a4, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x2a8, 0xa, 
    0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x2ad, 0xa, 0x48, 
    0x5, 0x48, 0x2af, 0xa, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x49, 0x7, 0x49, 0x2b6, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x2b9, 
    0xb, 0x49, 0x3, 0x4a, 0x5, 0x4a, 0x2bc, 0xa, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 
    0x2bf, 0xa, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x2ca, 0xa, 0x4b, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x2cf, 0xa, 0x4c, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x2d5, 0xa, 0x4e, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x2e7, 0xa, 0x51, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x5, 0x52, 0x2ec, 0xa, 0x52, 0x5, 0x52, 0x2ee, 0xa, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 0x2f5, 
    0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x2f8, 0xb, 0x53, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x5, 0x54, 0x2fd, 0xa, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x304, 0xa, 0x55, 0x3, 0x56, 0x3, 0x56, 
    0x5, 0x56, 0x308, 0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x7, 0x57, 0x30f, 0xa, 0x57, 0xc, 0x57, 0xe, 0x57, 0x312, 
    0xb, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x58, 0x5, 0x58, 0x31b, 0xa, 0x58, 0x3, 0x58, 0x5, 0x58, 
    0x31e, 0xa, 0x58, 0x3, 0x59, 0x5, 0x59, 0x321, 0xa, 0x59, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
    0x5b, 0x5, 0x5b, 0x32b, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
    0x5b, 0x7, 0x5b, 0x337, 0xa, 0x5b, 0xc, 0x5b, 0xe, 0x5b, 0x33a, 0xb, 
    0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x345, 0xa, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x5, 0x5e, 0x349, 0xa, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x34c, 
    0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 
    0x5e, 0x353, 0xa, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x3, 0x60, 0x5, 0x60, 0x361, 0xa, 0x60, 0x5, 0x60, 0x363, 0xa, 
    0x60, 0x3, 0x60, 0x5, 0x60, 0x366, 0xa, 0x60, 0x3, 0x60, 0x5, 0x60, 
    0x369, 0xa, 0x60, 0x5, 0x60, 0x36b, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x5, 0x62, 0x37d, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x7, 0x63, 0x385, 0xa, 0x63, 0xc, 0x63, 
    0xe, 0x63, 0x388, 0xb, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 
    0x38d, 0xa, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 
    0x393, 0xa, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x5, 0x66, 0x39b, 0xa, 0x66, 0x3, 0x66, 0x2, 0x4, 0xb4, 0xc4, 
    0x67, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
    0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
    0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
    0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
    0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0x2, 0x8, 0x4, 0x2, 0x7, 0x7, 0x40, 0x40, 
    0x3, 0x2, 0x11, 0x12, 0x3, 0x2, 0x13, 0x1d, 0x4, 0x2, 0x43, 0x46, 0x49, 
    0x49, 0x4, 0x2, 0x13, 0x1d, 0x37, 0x3e, 0x7, 0x2, 0x10, 0x10, 0x13, 
    0x14, 0x16, 0x17, 0x1c, 0x1c, 0x3f, 0x3f, 0x2, 0x3c3, 0x2, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0xde, 0x3, 0x2, 0x2, 0x2, 0x6, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xa, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0xe, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x10, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x18, 0x126, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x134, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x137, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x140, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x147, 0x3, 0x2, 0x2, 0x2, 0x24, 0x149, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x157, 0x3, 0x2, 0x2, 0x2, 0x28, 0x161, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x184, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x186, 0x3, 0x2, 0x2, 0x2, 0x32, 0x188, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x36, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x194, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x1a2, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1aa, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1b1, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1b6, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x1fe, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x205, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x207, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x219, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x223, 0x3, 0x2, 0x2, 0x2, 0x66, 0x22b, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x238, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x248, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x70, 0x256, 0x3, 0x2, 0x2, 0x2, 0x72, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x264, 0x3, 0x2, 0x2, 0x2, 0x76, 0x266, 0x3, 0x2, 0x2, 0x2, 0x78, 0x26b, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x26f, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x272, 0x3, 0x2, 0x2, 0x2, 0x80, 0x27e, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x282, 0x3, 0x2, 0x2, 0x2, 0x84, 0x28d, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x299, 0x3, 0x2, 0x2, 0x2, 0x88, 0x29b, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x2a9, 0x3, 0x2, 0x2, 0x2, 0x90, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x92, 0x2bb, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x96, 0x2ce, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x2d4, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x2e8, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0xa8, 
    0x303, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x307, 0x3, 0x2, 0x2, 0x2, 0xac, 0x309, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0x31a, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x320, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0x324, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x32a, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0x33b, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x33e, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0x342, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x356, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0x35b, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x36e, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0x37c, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x37e, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x38c, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0x38e, 0x3, 0x2, 0x2, 0x2, 0xca, 0x39a, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x4, 0x3, 0x2, 0xcd, 0xd3, 0x5, 0xca, 
    0x66, 0x2, 0xce, 0xcf, 0x5, 0x6, 0x4, 0x2, 0xcf, 0xd0, 0x5, 0xca, 0x66, 
    0x2, 0xd0, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 
    0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0xc, 0x7, 0x2, 0xd7, 0xd8, 0x5, 
    0xca, 0x66, 0x2, 0xd8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x3, 0x2, 0x2, 0xdf, 
    0xe0, 0x7, 0x40, 0x2, 0x2, 0xe0, 0x5, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xed, 
    0x7, 0x4, 0x2, 0x2, 0xe2, 0xee, 0x5, 0x8, 0x5, 0x2, 0xe3, 0xe9, 0x7, 
    0x5, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x8, 0x5, 0x2, 0xe5, 0xe6, 0x5, 0xca, 
    0x66, 0x2, 0xe6, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0xec, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x7, 0x6, 0x2, 0x2, 0xed, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xee, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0xef, 0xf1, 0x9, 0x2, 0x2, 0x2, 0xf0, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0xf3, 0x5, 0xa, 0x6, 0x2, 0xf3, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0xf4, 0xf5, 0x7, 0x49, 0x2, 0x2, 0xf5, 0xb, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xfa, 0x5, 0xe, 0x8, 0x2, 0xf7, 0xfa, 0x5, 0x1c, 0xf, 0x2, 0xf8, 0xfa, 
    0x5, 0x20, 0x11, 0x2, 0xf9, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xff, 0x5, 0x10, 0x9, 0x2, 0xfc, 0xff, 0x5, 0x18, 0xd, 
    0x2, 0xfd, 0xff, 0x5, 0x24, 0x13, 0x2, 0xfe, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x100, 0x10c, 0x7, 0x8, 0x2, 0x2, 0x101, 0x10d, 
    0x5, 0x12, 0xa, 0x2, 0x102, 0x108, 0x7, 0x5, 0x2, 0x2, 0x103, 0x104, 
    0x5, 0x12, 0xa, 0x2, 0x104, 0x105, 0x5, 0xca, 0x66, 0x2, 0x105, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x103, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x10d, 0x7, 0x6, 0x2, 0x2, 0x10c, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x102, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x10e, 0x114, 0x5, 0x14, 0xb, 0x2, 0x10f, 0x111, 0x5, 
    0x70, 0x39, 0x2, 0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x7, 
    0x9, 0x2, 0x2, 0x113, 0x115, 0x5, 0x16, 0xc, 0x2, 0x114, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x116, 0x11b, 0x7, 0x40, 0x2, 0x2, 0x117, 0x118, 0x7, 0xa, 
    0x2, 0x2, 0x118, 0x11a, 0x7, 0x40, 0x2, 0x2, 0x119, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x123, 0x5, 0xc4, 0x63, 
    0x2, 0x11f, 0x120, 0x7, 0xa, 0x2, 0x2, 0x120, 0x122, 0x5, 0xc4, 0x63, 
    0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 
    0x2, 0x124, 0x17, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 
    0x126, 0x132, 0x7, 0xb, 0x2, 0x2, 0x127, 0x133, 0x5, 0x1a, 0xe, 0x2, 
    0x128, 0x12e, 0x7, 0x5, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x1a, 0xe, 0x2, 
    0x12a, 0x12b, 0x5, 0xca, 0x66, 0x2, 0x12b, 0x12d, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x130, 0x3, 0x2, 0x2, 0x2, 
    0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x12f, 0x131, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x133, 0x7, 0x6, 0x2, 0x2, 0x132, 0x127, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x128, 0x3, 0x2, 0x2, 0x2, 0x133, 0x19, 0x3, 0x2, 0x2, 0x2, 0x134, 
    0x135, 0x7, 0x40, 0x2, 0x2, 0x135, 0x136, 0x5, 0x70, 0x39, 0x2, 0x136, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 0xc, 0x2, 0x2, 0x138, 0x13b, 
    0x7, 0x40, 0x2, 0x2, 0x139, 0x13c, 0x5, 0x1e, 0x10, 0x2, 0x13a, 0x13c, 
    0x5, 0x8a, 0x46, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x5, 
    0x8a, 0x46, 0x2, 0x13e, 0x13f, 0x5, 0x28, 0x15, 0x2, 0x13f, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x141, 0x7, 0xc, 0x2, 0x2, 0x141, 0x142, 0x5, 
    0x22, 0x12, 0x2, 0x142, 0x145, 0x7, 0x40, 0x2, 0x2, 0x143, 0x146, 0x5, 
    0x1e, 0x10, 0x2, 0x144, 0x146, 0x5, 0x8a, 0x46, 0x2, 0x145, 0x143, 0x3, 
    0x2, 0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x147, 0x148, 0x5, 0x8e, 0x48, 0x2, 0x148, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x155, 0x7, 0xd, 0x2, 0x2, 0x14a, 0x156, 0x5, 0x26, 
    0x14, 0x2, 0x14b, 0x151, 0x7, 0x5, 0x2, 0x2, 0x14c, 0x14d, 0x5, 0x26, 
    0x14, 0x2, 0x14d, 0x14e, 0x5, 0xca, 0x66, 0x2, 0x14e, 0x150, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x154, 0x156, 0x7, 0x6, 0x2, 0x2, 0x155, 0x14a, 0x3, 0x2, 
    0x2, 0x2, 0x155, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x156, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x157, 0x15f, 0x5, 0x14, 0xb, 0x2, 0x158, 0x15b, 0x5, 0x70, 0x39, 
    0x2, 0x159, 0x15a, 0x7, 0x9, 0x2, 0x2, 0x15a, 0x15c, 0x5, 0x16, 0xc, 
    0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x160, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x9, 0x2, 
    0x2, 0x15e, 0x160, 0x5, 0x16, 0xc, 0x2, 0x15f, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x162, 0x7, 0xe, 0x2, 0x2, 0x162, 0x163, 0x5, 0x2a, 0x16, 0x2, 
    0x163, 0x164, 0x7, 0xf, 0x2, 0x2, 0x164, 0x29, 0x3, 0x2, 0x2, 0x2, 0x165, 
    0x166, 0x5, 0x2c, 0x17, 0x2, 0x166, 0x167, 0x5, 0xca, 0x66, 0x2, 0x167, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x168, 0x165, 0x3, 0x2, 0x2, 0x2, 0x169, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x16d, 0x17d, 0x5, 0xe, 0x8, 0x2, 0x16e, 0x17d, 
    0x5, 0x3e, 0x20, 0x2, 0x16f, 0x17d, 0x5, 0x2e, 0x18, 0x2, 0x170, 0x17d, 
    0x5, 0x6e, 0x38, 0x2, 0x171, 0x17d, 0x5, 0x40, 0x21, 0x2, 0x172, 0x17d, 
    0x5, 0x42, 0x22, 0x2, 0x173, 0x17d, 0x5, 0x44, 0x23, 0x2, 0x174, 0x17d, 
    0x5, 0x46, 0x24, 0x2, 0x175, 0x17d, 0x5, 0x48, 0x25, 0x2, 0x176, 0x17d, 
    0x5, 0x28, 0x15, 0x2, 0x177, 0x17d, 0x5, 0x4c, 0x27, 0x2, 0x178, 0x17d, 
    0x5, 0x4e, 0x28, 0x2, 0x179, 0x17d, 0x5, 0x60, 0x31, 0x2, 0x17a, 0x17d, 
    0x5, 0x68, 0x35, 0x2, 0x17b, 0x17d, 0x5, 0x4a, 0x26, 0x2, 0x17c, 0x16d, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x16f, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x170, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x171, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x172, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x173, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x174, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x176, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x177, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x179, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17b, 
    0x3, 0x2, 0x2, 0x2, 0x17d, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x185, 0x5, 
    0x32, 0x1a, 0x2, 0x17f, 0x185, 0x5, 0x30, 0x19, 0x2, 0x180, 0x185, 0x5, 
    0x34, 0x1b, 0x2, 0x181, 0x185, 0x5, 0x36, 0x1c, 0x2, 0x182, 0x185, 0x5, 
    0x3a, 0x1e, 0x2, 0x183, 0x185, 0x5, 0x3c, 0x1f, 0x2, 0x184, 0x17e, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x184, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x181, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x186, 0x187, 0x5, 0xc4, 0x63, 0x2, 0x187, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x188, 0x189, 0x5, 0xc4, 0x63, 0x2, 0x189, 0x18a, 0x7, 0x10, 
    0x2, 0x2, 0x18a, 0x18b, 0x5, 0xc4, 0x63, 0x2, 0x18b, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x18c, 0x18d, 0x5, 0xc4, 0x63, 0x2, 0x18d, 0x18e, 0x9, 0x3, 
    0x2, 0x2, 0x18e, 0x35, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x5, 0x16, 
    0xc, 0x2, 0x190, 0x191, 0x5, 0x38, 0x1d, 0x2, 0x191, 0x192, 0x5, 0x16, 
    0xc, 0x2, 0x192, 0x37, 0x3, 0x2, 0x2, 0x2, 0x193, 0x195, 0x9, 0x4, 0x2, 
    0x2, 0x194, 0x193, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x7, 0x9, 0x2, 
    0x2, 0x197, 0x39, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x5, 0x14, 0xb, 
    0x2, 0x199, 0x19a, 0x7, 0x1e, 0x2, 0x2, 0x19a, 0x19b, 0x5, 0x16, 0xc, 
    0x2, 0x19b, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x1f, 0x2, 
    0x2, 0x19d, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x40, 0x2, 
    0x2, 0x19f, 0x1a0, 0x7, 0x20, 0x2, 0x2, 0x1a0, 0x1a1, 0x5, 0x2c, 0x17, 
    0x2, 0x1a1, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a4, 0x7, 0x21, 0x2, 
    0x2, 0x1a3, 0x1a5, 0x5, 0x16, 0xc, 0x2, 0x1a4, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a4, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x1a6, 0x1a8, 0x7, 0x22, 0x2, 0x2, 0x1a7, 0x1a9, 0x7, 0x40, 0x2, 0x2, 
    0x1a8, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1a9, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ac, 0x7, 0x23, 0x2, 0x2, 
    0x1ab, 0x1ad, 0x7, 0x40, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 0x2, 
    0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1ae, 
    0x1af, 0x7, 0x24, 0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x40, 0x2, 0x2, 0x1b0, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x25, 0x2, 0x2, 0x1b2, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x26, 0x2, 0x2, 0x1b4, 
    0x1b5, 0x5, 0xc4, 0x63, 0x2, 0x1b5, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1b6, 
    0x1ba, 0x7, 0x27, 0x2, 0x2, 0x1b7, 0x1b8, 0x5, 0x2e, 0x18, 0x2, 0x1b8, 
    0x1b9, 0x7, 0x1f, 0x2, 0x2, 0x1b9, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
    0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
    0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x5, 0xc4, 0x63, 0x2, 0x1bd, 
    0x1c3, 0x5, 0x28, 0x15, 0x2, 0x1be, 0x1c1, 0x7, 0x28, 0x2, 0x2, 0x1bf, 
    0x1c2, 0x5, 0x4c, 0x27, 0x2, 0x1c0, 0x1c2, 0x5, 0x28, 0x15, 0x2, 0x1c1, 
    0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
    0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c3, 
    0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c8, 
    0x5, 0x50, 0x29, 0x2, 0x1c6, 0x1c8, 0x5, 0x56, 0x2c, 0x2, 0x1c7, 0x1c5, 
    0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x1c9, 0x1cd, 0x7, 0x29, 0x2, 0x2, 0x1ca, 0x1cb, 0x5, 
    0x2e, 0x18, 0x2, 0x1cb, 0x1cc, 0x7, 0x1f, 0x2, 0x2, 0x1cc, 0x1ce, 0x3, 
    0x2, 0x2, 0x2, 0x1cd, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 
    0x2, 0x2, 0x2, 0x1ce, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d1, 0x5, 
    0xc4, 0x63, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 
    0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d6, 0x7, 
    0xe, 0x2, 0x2, 0x1d3, 0x1d5, 0x5, 0x52, 0x2a, 0x2, 0x1d4, 0x1d3, 0x3, 
    0x2, 0x2, 0x2, 0x1d5, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 
    0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d9, 0x3, 
    0x2, 0x2, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 
    0xf, 0x2, 0x2, 0x1da, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x5, 0x54, 
    0x2b, 0x2, 0x1dc, 0x1dd, 0x7, 0x20, 0x2, 0x2, 0x1dd, 0x1de, 0x5, 0x2a, 
    0x16, 0x2, 0x1de, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x7, 0x2a, 
    0x2, 0x2, 0x1e0, 0x1e3, 0x5, 0x16, 0xc, 0x2, 0x1e1, 0x1e3, 0x7, 0x2b, 
    0x2, 0x2, 0x1e2, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e1, 0x3, 0x2, 
    0x2, 0x2, 0x1e3, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e8, 0x7, 0x29, 
    0x2, 0x2, 0x1e5, 0x1e6, 0x5, 0x2e, 0x18, 0x2, 0x1e6, 0x1e7, 0x7, 0x1f, 
    0x2, 0x2, 0x1e7, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e5, 0x3, 0x2, 
    0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1ea, 0x1eb, 0x5, 0x58, 0x2d, 0x2, 0x1eb, 0x1ef, 0x7, 0xe, 
    0x2, 0x2, 0x1ec, 0x1ee, 0x5, 0x5a, 0x2e, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 
    0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0xf, 
    0x2, 0x2, 0x1f3, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x7, 0x40, 
    0x2, 0x2, 0x1f5, 0x1f7, 0x7, 0x1e, 0x2, 0x2, 0x1f6, 0x1f4, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 
    0x2, 0x2, 0x1f8, 0x1f9, 0x5, 0xb4, 0x5b, 0x2, 0x1f9, 0x1fa, 0x7, 0x7, 
    0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x5, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0xb, 
    0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x6, 0x2, 0x2, 0x1fd, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x1fe, 0x1ff, 0x5, 0x5c, 0x2f, 0x2, 0x1ff, 0x200, 0x7, 0x20, 0x2, 
    0x2, 0x200, 0x201, 0x5, 0x2a, 0x16, 0x2, 0x201, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x202, 0x203, 0x7, 0x2a, 0x2, 0x2, 0x203, 0x206, 0x5, 0x5e, 0x30, 
    0x2, 0x204, 0x206, 0x7, 0x2b, 0x2, 0x2, 0x205, 0x202, 0x3, 0x2, 0x2, 
    0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x207, 0x20c, 0x5, 0x70, 0x39, 0x2, 0x208, 0x209, 0x7, 0xa, 0x2, 0x2, 
    0x209, 0x20b, 0x5, 0x70, 0x39, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 
    0x20b, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 
    0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x20e, 
    0x20c, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x2c, 0x2, 0x2, 0x210, 
    0x214, 0x7, 0xe, 0x2, 0x2, 0x211, 0x213, 0x5, 0x62, 0x32, 0x2, 0x212, 
    0x211, 0x3, 0x2, 0x2, 0x2, 0x213, 0x216, 0x3, 0x2, 0x2, 0x2, 0x214, 
    0x212, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 
    0x217, 0x3, 0x2, 0x2, 0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x217, 
    0x218, 0x7, 0xf, 0x2, 0x2, 0x218, 0x61, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 
    0x5, 0x64, 0x33, 0x2, 0x21a, 0x21b, 0x7, 0x20, 0x2, 0x2, 0x21b, 0x21c, 
    0x5, 0x2a, 0x16, 0x2, 0x21c, 0x63, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x220, 
    0x7, 0x2a, 0x2, 0x2, 0x21e, 0x221, 0x5, 0x32, 0x1a, 0x2, 0x21f, 0x221, 
    0x5, 0x66, 0x34, 0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 0x21f, 
    0x3, 0x2, 0x2, 0x2, 0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x224, 
    0x7, 0x2b, 0x2, 0x2, 0x223, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x223, 0x222, 
    0x3, 0x2, 0x2, 0x2, 0x224, 0x65, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x5, 
    0x16, 0xc, 0x2, 0x226, 0x227, 0x7, 0x9, 0x2, 0x2, 0x227, 0x22c, 0x3, 
    0x2, 0x2, 0x2, 0x228, 0x229, 0x5, 0x14, 0xb, 0x2, 0x229, 0x22a, 0x7, 
    0x1e, 0x2, 0x2, 0x22a, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x225, 0x3, 
    0x2, 0x2, 0x2, 0x22b, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 
    0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x5, 
    0xc4, 0x63, 0x2, 0x22e, 0x67, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x233, 0x7, 
    0x2d, 0x2, 0x2, 0x230, 0x234, 0x5, 0xc4, 0x63, 0x2, 0x231, 0x234, 0x5, 
    0x6a, 0x36, 0x2, 0x232, 0x234, 0x5, 0x6c, 0x37, 0x2, 0x233, 0x230, 0x3, 
    0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x232, 0x3, 
    0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x3, 
    0x2, 0x2, 0x2, 0x235, 0x236, 0x5, 0x28, 0x15, 0x2, 0x236, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x237, 0x239, 0x5, 0x2e, 0x18, 0x2, 0x238, 0x237, 0x3, 
    0x2, 0x2, 0x2, 0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 
    0x2, 0x2, 0x2, 0x23a, 0x23c, 0x7, 0x1f, 0x2, 0x2, 0x23b, 0x23d, 0x5, 
    0xc4, 0x63, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x3, 
    0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x240, 0x7, 
    0x1f, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x2e, 0x18, 0x2, 0x240, 0x23f, 0x3, 
    0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x242, 0x243, 0x5, 0x16, 0xc, 0x2, 0x243, 0x244, 0x7, 0x9, 
    0x2, 0x2, 0x244, 0x249, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x5, 0x14, 
    0xb, 0x2, 0x246, 0x247, 0x7, 0x1e, 0x2, 0x2, 0x247, 0x249, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x242, 0x3, 0x2, 0x2, 0x2, 0x248, 0x245, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 0x2, 
    0x2, 0x2, 0x24a, 0x24b, 0x7, 0x2e, 0x2, 0x2, 0x24b, 0x24c, 0x5, 0xc4, 
    0x63, 0x2, 0x24c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x7, 0x2f, 
    0x2, 0x2, 0x24e, 0x24f, 0x5, 0xc4, 0x63, 0x2, 0x24f, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x250, 0x257, 0x5, 0x72, 0x3a, 0x2, 0x251, 0x257, 0x5, 0x74, 
    0x3b, 0x2, 0x252, 0x253, 0x7, 0x5, 0x2, 0x2, 0x253, 0x254, 0x5, 0x70, 
    0x39, 0x2, 0x254, 0x255, 0x7, 0x6, 0x2, 0x2, 0x255, 0x257, 0x3, 0x2, 
    0x2, 0x2, 0x256, 0x250, 0x3, 0x2, 0x2, 0x2, 0x256, 0x251, 0x3, 0x2, 
    0x2, 0x2, 0x256, 0x252, 0x3, 0x2, 0x2, 0x2, 0x257, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x258, 0x25b, 0x7, 0x40, 0x2, 0x2, 0x259, 0x25b, 0x5, 0x9c, 0x4f, 
    0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x259, 0x3, 0x2, 0x2, 
    0x2, 0x25b, 0x73, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x265, 0x5, 0x76, 0x3c, 
    0x2, 0x25d, 0x265, 0x5, 0xac, 0x57, 0x2, 0x25e, 0x265, 0x5, 0x7c, 0x3f, 
    0x2, 0x25f, 0x265, 0x5, 0x88, 0x45, 0x2, 0x260, 0x265, 0x5, 0x7e, 0x40, 
    0x2, 0x261, 0x265, 0x5, 0x80, 0x41, 0x2, 0x262, 0x265, 0x5, 0x82, 0x42, 
    0x2, 0x263, 0x265, 0x5, 0x84, 0x43, 0x2, 0x264, 0x25c, 0x3, 0x2, 0x2, 
    0x2, 0x264, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x264, 0x25e, 0x3, 0x2, 0x2, 
    0x2, 0x264, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x264, 0x260, 0x3, 0x2, 0x2, 
    0x2, 0x264, 0x261, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 
    0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x266, 0x267, 0x7, 0x30, 0x2, 0x2, 0x267, 0x268, 0x5, 0x78, 0x3d, 0x2, 
    0x268, 0x269, 0x7, 0x31, 0x2, 0x2, 0x269, 0x26a, 0x5, 0x7a, 0x3e, 0x2, 
    0x26a, 0x77, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x5, 0xc4, 0x63, 0x2, 
    0x26c, 0x79, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x5, 0x70, 0x39, 0x2, 
    0x26e, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x7, 0x17, 0x2, 0x2, 
    0x270, 0x271, 0x5, 0x70, 0x39, 0x2, 0x271, 0x7d, 0x3, 0x2, 0x2, 0x2, 
    0x272, 0x273, 0x7, 0x32, 0x2, 0x2, 0x273, 0x279, 0x7, 0xe, 0x2, 0x2, 
    0x274, 0x275, 0x5, 0x86, 0x44, 0x2, 0x275, 0x276, 0x5, 0xca, 0x66, 0x2, 
    0x276, 0x278, 0x3, 0x2, 0x2, 0x2, 0x277, 0x274, 0x3, 0x2, 0x2, 0x2, 
    0x278, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 
    0x279, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27c, 0x3, 0x2, 0x2, 0x2, 
    0x27b, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0xf, 0x2, 0x2, 
    0x27d, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x30, 0x2, 0x2, 
    0x27f, 0x280, 0x7, 0x31, 0x2, 0x2, 0x280, 0x281, 0x5, 0x7a, 0x3e, 0x2, 
    0x281, 0x81, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x7, 0x33, 0x2, 0x2, 
    0x283, 0x284, 0x7, 0x30, 0x2, 0x2, 0x284, 0x285, 0x5, 0x70, 0x39, 0x2, 
    0x285, 0x286, 0x7, 0x31, 0x2, 0x2, 0x286, 0x287, 0x5, 0x7a, 0x3e, 0x2, 
    0x287, 0x83, 0x3, 0x2, 0x2, 0x2, 0x288, 0x28e, 0x7, 0x34, 0x2, 0x2, 
    0x289, 0x28a, 0x7, 0x34, 0x2, 0x2, 0x28a, 0x28e, 0x7, 0x10, 0x2, 0x2, 
    0x28b, 0x28c, 0x7, 0x10, 0x2, 0x2, 0x28c, 0x28e, 0x7, 0x34, 0x2, 0x2, 
    0x28d, 0x288, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x289, 0x3, 0x2, 0x2, 0x2, 
    0x28d, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 0x2, 
    0x28f, 0x290, 0x5, 0x7a, 0x3e, 0x2, 0x290, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x291, 0x292, 0x6, 0x44, 0x2, 0x2, 0x292, 0x293, 0x7, 0x40, 0x2, 0x2, 
    0x293, 0x294, 0x5, 0x8e, 0x48, 0x2, 0x294, 0x295, 0x5, 0x8c, 0x47, 0x2, 
    0x295, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x296, 0x29a, 0x5, 0x72, 0x3a, 0x2, 
    0x297, 0x298, 0x7, 0x40, 0x2, 0x2, 0x298, 0x29a, 0x5, 0x8e, 0x48, 0x2, 
    0x299, 0x291, 0x3, 0x2, 0x2, 0x2, 0x299, 0x296, 0x3, 0x2, 0x2, 0x2, 
    0x299, 0x297, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x29b, 
    0x29c, 0x7, 0xc, 0x2, 0x2, 0x29c, 0x29d, 0x5, 0x8a, 0x46, 0x2, 0x29d, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x6, 0x46, 0x3, 0x2, 0x29f, 
    0x2a0, 0x5, 0x8e, 0x48, 0x2, 0x2a0, 0x2a1, 0x5, 0x8c, 0x47, 0x2, 0x2a1, 
    0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a4, 0x5, 0x8e, 0x48, 0x2, 0x2a3, 
    0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a8, 0x5, 0x8e, 0x48, 0x2, 0x2a6, 
    0x2a8, 0x5, 0x70, 0x39, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a7, 
    0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2ae, 
    0x7, 0x5, 0x2, 0x2, 0x2aa, 0x2ac, 0x5, 0x90, 0x49, 0x2, 0x2ab, 0x2ad, 
    0x7, 0xa, 0x2, 0x2, 0x2ac, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 
    0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2aa, 
    0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 
    0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b1, 0x7, 0x6, 0x2, 0x2, 0x2b1, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x2b2, 0x2b7, 0x5, 0x92, 0x4a, 0x2, 0x2b3, 0x2b4, 0x7, 
    0xa, 0x2, 0x2, 0x2b4, 0x2b6, 0x5, 0x92, 0x4a, 0x2, 0x2b5, 0x2b3, 0x3, 
    0x2, 0x2, 0x2, 0x2b6, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b5, 0x3, 
    0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bc, 0x5, 0x14, 
    0xb, 0x2, 0x2bb, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x3, 0x2, 
    0x2, 0x2, 0x2bc, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2bf, 0x7, 0x35, 
    0x2, 0x2, 0x2be, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x3, 0x2, 
    0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x5, 0x70, 
    0x39, 0x2, 0x2c1, 0x93, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2ca, 0x5, 0x96, 
    0x4c, 0x2, 0x2c3, 0x2ca, 0x5, 0x9a, 0x4e, 0x2, 0x2c4, 0x2ca, 0x5, 0xc0, 
    0x61, 0x2, 0x2c5, 0x2c6, 0x7, 0x5, 0x2, 0x2, 0x2c6, 0x2c7, 0x5, 0xc4, 
    0x63, 0x2, 0x2c7, 0x2c8, 0x7, 0x6, 0x2, 0x2, 0x2c8, 0x2ca, 0x3, 0x2, 
    0x2, 0x2, 0x2c9, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2c3, 0x3, 0x2, 
    0x2, 0x2, 0x2c9, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2c5, 0x3, 0x2, 
    0x2, 0x2, 0x2ca, 0x95, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cf, 0x5, 0x98, 
    0x4d, 0x2, 0x2cc, 0x2cf, 0x5, 0x9e, 0x50, 0x2, 0x2cd, 0x2cf, 0x5, 0xb2, 
    0x5a, 0x2, 0x2ce, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 
    0x2, 0x2, 0x2ce, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x2d0, 0x2d1, 0x9, 0x5, 0x2, 0x2, 0x2d1, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x2d2, 0x2d5, 0x7, 0x40, 0x2, 0x2, 0x2d3, 0x2d5, 0x5, 0x9c, 0x4f, 0x2, 
    0x2d4, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d3, 0x3, 0x2, 0x2, 0x2, 
    0x2d5, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0x40, 0x2, 0x2, 
    0x2d7, 0x2d8, 0x7, 0x7, 0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0x40, 0x2, 0x2, 
    0x2d9, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x5, 0xa0, 0x51, 0x2, 
    0x2db, 0x2dc, 0x5, 0xa2, 0x52, 0x2, 0x2dc, 0x9f, 0x3, 0x2, 0x2, 0x2, 
    0x2dd, 0x2e7, 0x5, 0xac, 0x57, 0x2, 0x2de, 0x2e7, 0x5, 0x76, 0x3c, 0x2, 
    0x2df, 0x2e0, 0x7, 0x30, 0x2, 0x2, 0x2e0, 0x2e1, 0x7, 0x35, 0x2, 0x2, 
    0x2e1, 0x2e2, 0x7, 0x31, 0x2, 0x2, 0x2e2, 0x2e7, 0x5, 0x7a, 0x3e, 0x2, 
    0x2e3, 0x2e7, 0x5, 0x80, 0x41, 0x2, 0x2e4, 0x2e7, 0x5, 0x82, 0x42, 0x2, 
    0x2e5, 0x2e7, 0x5, 0x72, 0x3a, 0x2, 0x2e6, 0x2dd, 0x3, 0x2, 0x2, 0x2, 
    0x2e6, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2df, 0x3, 0x2, 0x2, 0x2, 
    0x2e6, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e4, 0x3, 0x2, 0x2, 0x2, 
    0x2e6, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x2e8, 
    0x2ed, 0x7, 0xe, 0x2, 0x2, 0x2e9, 0x2eb, 0x5, 0xa4, 0x53, 0x2, 0x2ea, 
    0x2ec, 0x7, 0xa, 0x2, 0x2, 0x2eb, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2eb, 
    0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ed, 
    0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ee, 
    0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x7, 0xf, 0x2, 0x2, 0x2f0, 
    0xa3, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f6, 0x5, 0xa6, 0x54, 0x2, 0x2f2, 
    0x2f3, 0x7, 0xa, 0x2, 0x2, 0x2f3, 0x2f5, 0x5, 0xa6, 0x54, 0x2, 0x2f4, 
    0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f6, 
    0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 
    0x5, 0xa8, 0x55, 0x2, 0x2fa, 0x2fb, 0x7, 0x20, 0x2, 0x2, 0x2fb, 0x2fd, 
    0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 
    0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2ff, 
    0x5, 0xaa, 0x56, 0x2, 0x2ff, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x300, 0x304, 
    0x7, 0x40, 0x2, 0x2, 0x301, 0x304, 0x5, 0xc4, 0x63, 0x2, 0x302, 0x304, 
    0x5, 0xa2, 0x52, 0x2, 0x303, 0x300, 0x3, 0x2, 0x2, 0x2, 0x303, 0x301, 
    0x3, 0x2, 0x2, 0x2, 0x303, 0x302, 0x3, 0x2, 0x2, 0x2, 0x304, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0x305, 0x308, 0x5, 0xc4, 0x63, 0x2, 0x306, 0x308, 0x5, 
    0xa2, 0x52, 0x2, 0x307, 0x305, 0x3, 0x2, 0x2, 0x2, 0x307, 0x306, 0x3, 
    0x2, 0x2, 0x2, 0x308, 0xab, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x7, 0x36, 
    0x2, 0x2, 0x30a, 0x310, 0x7, 0xe, 0x2, 0x2, 0x30b, 0x30c, 0x5, 0xae, 
    0x58, 0x2, 0x30c, 0x30d, 0x5, 0xca, 0x66, 0x2, 0x30d, 0x30f, 0x3, 0x2, 
    0x2, 0x2, 0x30e, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x312, 0x3, 0x2, 
    0x2, 0x2, 0x310, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x310, 0x311, 0x3, 0x2, 
    0x2, 0x2, 0x311, 0x313, 0x3, 0x2, 0x2, 0x2, 0x312, 0x310, 0x3, 0x2, 
    0x2, 0x2, 0x313, 0x314, 0x7, 0xf, 0x2, 0x2, 0x314, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x316, 0x6, 0x58, 0x4, 0x2, 0x316, 0x317, 0x5, 0x14, 0xb, 
    0x2, 0x317, 0x318, 0x5, 0x70, 0x39, 0x2, 0x318, 0x31b, 0x3, 0x2, 0x2, 
    0x2, 0x319, 0x31b, 0x5, 0xb0, 0x59, 0x2, 0x31a, 0x315, 0x3, 0x2, 0x2, 
    0x2, 0x31a, 0x319, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31d, 0x3, 0x2, 0x2, 
    0x2, 0x31c, 0x31e, 0x7, 0x49, 0x2, 0x2, 0x31d, 0x31c, 0x3, 0x2, 0x2, 
    0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31e, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0x31f, 0x321, 0x7, 0x17, 0x2, 0x2, 0x320, 0x31f, 0x3, 0x2, 0x2, 0x2, 
    0x320, 0x321, 0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x3, 0x2, 0x2, 0x2, 
    0x322, 0x323, 0x5, 0x72, 0x3a, 0x2, 0x323, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x325, 0x7, 0xc, 0x2, 0x2, 0x325, 0x326, 0x5, 0x1e, 0x10, 0x2, 
    0x326, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x8, 0x5b, 0x1, 0x2, 
    0x328, 0x32b, 0x5, 0x94, 0x4b, 0x2, 0x329, 0x32b, 0x5, 0xc8, 0x65, 0x2, 
    0x32a, 0x327, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x329, 0x3, 0x2, 0x2, 0x2, 
    0x32b, 0x338, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0xc, 0x7, 0x2, 0x2, 
    0x32d, 0x337, 0x5, 0xb6, 0x5c, 0x2, 0x32e, 0x32f, 0xc, 0x6, 0x2, 0x2, 
    0x32f, 0x337, 0x5, 0xb8, 0x5d, 0x2, 0x330, 0x331, 0xc, 0x5, 0x2, 0x2, 
    0x331, 0x337, 0x5, 0xba, 0x5e, 0x2, 0x332, 0x333, 0xc, 0x4, 0x2, 0x2, 
    0x333, 0x337, 0x5, 0xbc, 0x5f, 0x2, 0x334, 0x335, 0xc, 0x3, 0x2, 0x2, 
    0x335, 0x337, 0x5, 0xbe, 0x60, 0x2, 0x336, 0x32c, 0x3, 0x2, 0x2, 0x2, 
    0x336, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x336, 0x330, 0x3, 0x2, 0x2, 0x2, 
    0x336, 0x332, 0x3, 0x2, 0x2, 0x2, 0x336, 0x334, 0x3, 0x2, 0x2, 0x2, 
    0x337, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x338, 0x336, 0x3, 0x2, 0x2, 0x2, 
    0x338, 0x339, 0x3, 0x2, 0x2, 0x2, 0x339, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x33a, 
    0x338, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x33c, 0x7, 0x7, 0x2, 0x2, 0x33c, 
    0x33d, 0x7, 0x40, 0x2, 0x2, 0x33d, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x33e, 
    0x33f, 0x7, 0x30, 0x2, 0x2, 0x33f, 0x340, 0x5, 0xc4, 0x63, 0x2, 0x340, 
    0x341, 0x7, 0x31, 0x2, 0x2, 0x341, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x342, 
    0x352, 0x7, 0x30, 0x2, 0x2, 0x343, 0x345, 0x5, 0xc4, 0x63, 0x2, 0x344, 
    0x343, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 0x3, 0x2, 0x2, 0x2, 0x345, 
    0x346, 0x3, 0x2, 0x2, 0x2, 0x346, 0x348, 0x7, 0x20, 0x2, 0x2, 0x347, 
    0x349, 0x5, 0xc4, 0x63, 0x2, 0x348, 0x347, 0x3, 0x2, 0x2, 0x2, 0x348, 
    0x349, 0x3, 0x2, 0x2, 0x2, 0x349, 0x353, 0x3, 0x2, 0x2, 0x2, 0x34a, 
    0x34c, 0x5, 0xc4, 0x63, 0x2, 0x34b, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x34b, 
    0x34c, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34d, 
    0x34e, 0x7, 0x20, 0x2, 0x2, 0x34e, 0x34f, 0x5, 0xc4, 0x63, 0x2, 0x34f, 
    0x350, 0x7, 0x20, 0x2, 0x2, 0x350, 0x351, 0x5, 0xc4, 0x63, 0x2, 0x351, 
    0x353, 0x3, 0x2, 0x2, 0x2, 0x352, 0x344, 0x3, 0x2, 0x2, 0x2, 0x352, 
    0x34b, 0x3, 0x2, 0x2, 0x2, 0x353, 0x354, 0x3, 0x2, 0x2, 0x2, 0x354, 
    0x355, 0x7, 0x31, 0x2, 0x2, 0x355, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x356, 
    0x357, 0x7, 0x7, 0x2, 0x2, 0x357, 0x358, 0x7, 0x5, 0x2, 0x2, 0x358, 
    0x359, 0x5, 0x70, 0x39, 0x2, 0x359, 0x35a, 0x7, 0x6, 0x2, 0x2, 0x35a, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x36a, 0x7, 0x5, 0x2, 0x2, 0x35c, 0x363, 
    0x5, 0x16, 0xc, 0x2, 0x35d, 0x360, 0x5, 0x70, 0x39, 0x2, 0x35e, 0x35f, 
    0x7, 0xa, 0x2, 0x2, 0x35f, 0x361, 0x5, 0x16, 0xc, 0x2, 0x360, 0x35e, 
    0x3, 0x2, 0x2, 0x2, 0x360, 0x361, 0x3, 0x2, 0x2, 0x2, 0x361, 0x363, 
    0x3, 0x2, 0x2, 0x2, 0x362, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x362, 0x35d, 
    0x3, 0x2, 0x2, 0x2, 0x363, 0x365, 0x3, 0x2, 0x2, 0x2, 0x364, 0x366, 
    0x7, 0x35, 0x2, 0x2, 0x365, 0x364, 0x3, 0x2, 0x2, 0x2, 0x365, 0x366, 
    0x3, 0x2, 0x2, 0x2, 0x366, 0x368, 0x3, 0x2, 0x2, 0x2, 0x367, 0x369, 
    0x7, 0xa, 0x2, 0x2, 0x368, 0x367, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 
    0x3, 0x2, 0x2, 0x2, 0x369, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x362, 
    0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 
    0x3, 0x2, 0x2, 0x2, 0x36c, 0x36d, 0x7, 0x6, 0x2, 0x2, 0x36d, 0xbf, 0x3, 
    0x2, 0x2, 0x2, 0x36e, 0x36f, 0x5, 0xc2, 0x62, 0x2, 0x36f, 0x370, 0x7, 
    0x7, 0x2, 0x2, 0x370, 0x371, 0x7, 0x40, 0x2, 0x2, 0x371, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0x372, 0x37d, 0x5, 0x72, 0x3a, 0x2, 0x373, 0x374, 0x7, 
    0x5, 0x2, 0x2, 0x374, 0x375, 0x7, 0x17, 0x2, 0x2, 0x375, 0x376, 0x5, 
    0x72, 0x3a, 0x2, 0x376, 0x377, 0x7, 0x6, 0x2, 0x2, 0x377, 0x37d, 0x3, 
    0x2, 0x2, 0x2, 0x378, 0x379, 0x7, 0x5, 0x2, 0x2, 0x379, 0x37a, 0x5, 
    0xc2, 0x62, 0x2, 0x37a, 0x37b, 0x7, 0x6, 0x2, 0x2, 0x37b, 0x37d, 0x3, 
    0x2, 0x2, 0x2, 0x37c, 0x372, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x373, 0x3, 
    0x2, 0x2, 0x2, 0x37c, 0x378, 0x3, 0x2, 0x2, 0x2, 0x37d, 0xc3, 0x3, 0x2, 
    0x2, 0x2, 0x37e, 0x37f, 0x8, 0x63, 0x1, 0x2, 0x37f, 0x380, 0x5, 0xc6, 
    0x64, 0x2, 0x380, 0x386, 0x3, 0x2, 0x2, 0x2, 0x381, 0x382, 0xc, 0x3, 
    0x2, 0x2, 0x382, 0x383, 0x9, 0x6, 0x2, 0x2, 0x383, 0x385, 0x5, 0xc4, 
    0x63, 0x4, 0x384, 0x381, 0x3, 0x2, 0x2, 0x2, 0x385, 0x388, 0x3, 0x2, 
    0x2, 0x2, 0x386, 0x384, 0x3, 0x2, 0x2, 0x2, 0x386, 0x387, 0x3, 0x2, 
    0x2, 0x2, 0x387, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x388, 0x386, 0x3, 0x2, 0x2, 
    0x2, 0x389, 0x38d, 0x5, 0xb4, 0x5b, 0x2, 0x38a, 0x38b, 0x9, 0x7, 0x2, 
    0x2, 0x38b, 0x38d, 0x5, 0xc6, 0x64, 0x2, 0x38c, 0x389, 0x3, 0x2, 0x2, 
    0x2, 0x38c, 0x38a, 0x3, 0x2, 0x2, 0x2, 0x38d, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0x38e, 0x38f, 0x5, 0x70, 0x39, 0x2, 0x38f, 0x390, 0x7, 0x5, 0x2, 0x2, 
    0x390, 0x392, 0x5, 0xc4, 0x63, 0x2, 0x391, 0x393, 0x7, 0xa, 0x2, 0x2, 
    0x392, 0x391, 0x3, 0x2, 0x2, 0x2, 0x392, 0x393, 0x3, 0x2, 0x2, 0x2, 
    0x393, 0x394, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x7, 0x6, 0x2, 0x2, 
    0x395, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x396, 0x39b, 0x7, 0x1f, 0x2, 0x2, 
    0x397, 0x39b, 0x7, 0x2, 0x2, 0x3, 0x398, 0x39b, 0x6, 0x66, 0xb, 0x2, 
    0x399, 0x39b, 0x6, 0x66, 0xc, 0x2, 0x39a, 0x396, 0x3, 0x2, 0x2, 0x2, 
    0x39a, 0x397, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x398, 0x3, 0x2, 0x2, 0x2, 
    0x39a, 0x399, 0x3, 0x2, 0x2, 0x2, 0x39b, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0xd3, 0xdb, 0xe9, 0xed, 0xf0, 0xf9, 0xfe, 0x108, 0x10c, 0x110, 0x114, 
    0x11b, 0x123, 0x12e, 0x132, 0x13b, 0x145, 0x151, 0x155, 0x15b, 0x15f, 
    0x16a, 0x17c, 0x184, 0x194, 0x1a4, 0x1a8, 0x1ac, 0x1ba, 0x1c1, 0x1c3, 
    0x1c7, 0x1cd, 0x1d0, 0x1d6, 0x1e2, 0x1e8, 0x1ef, 0x1f6, 0x205, 0x20c, 
    0x214, 0x220, 0x223, 0x22b, 0x233, 0x238, 0x23c, 0x240, 0x248, 0x256, 
    0x25a, 0x264, 0x279, 0x28d, 0x299, 0x2a3, 0x2a7, 0x2ac, 0x2ae, 0x2b7, 
    0x2bb, 0x2be, 0x2c9, 0x2ce, 0x2d4, 0x2e6, 0x2eb, 0x2ed, 0x2f6, 0x2fc, 
    0x303, 0x307, 0x310, 0x31a, 0x31d, 0x320, 0x32a, 0x336, 0x338, 0x344, 
    0x348, 0x34b, 0x352, 0x360, 0x362, 0x365, 0x368, 0x36a, 0x37c, 0x386, 
    0x38c, 0x392, 0x39a, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

goParser::Initializer goParser::_init;
