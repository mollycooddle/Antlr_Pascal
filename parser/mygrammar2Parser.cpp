
// Generated from mygrammar2.g4 by ANTLR 4.13.2


#include "mygrammar2Visitor.h"

#include "mygrammar2Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Mygrammar2ParserStaticData final {
  Mygrammar2ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Mygrammar2ParserStaticData(const Mygrammar2ParserStaticData&) = delete;
  Mygrammar2ParserStaticData(Mygrammar2ParserStaticData&&) = delete;
  Mygrammar2ParserStaticData& operator=(const Mygrammar2ParserStaticData&) = delete;
  Mygrammar2ParserStaticData& operator=(Mygrammar2ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammar2ParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Mygrammar2ParserStaticData> mygrammar2ParserStaticData = nullptr;

void mygrammar2ParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammar2ParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammar2ParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Mygrammar2ParserStaticData>(
    std::vector<std::string>{
      "expr", "term", "factor", "row", "prog"
    },
    std::vector<std::string>{
      "", "", "", "'-'", "'+'", "'/'", "'*'", "';'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "INT", "FLOAT", "SUB", "ADD", "DIV", "MUL", "SEP", "LBR", "RBR", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,10,53,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,0,1,0,1,0,
  	3,0,16,8,0,1,1,1,1,1,1,1,1,1,1,3,1,23,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,3,2,33,8,2,1,3,1,3,1,3,1,4,1,4,1,4,3,4,41,8,4,1,4,1,4,1,4,3,4,46,
  	8,4,5,4,48,8,4,10,4,12,4,51,9,4,1,4,0,1,8,5,0,2,4,6,8,0,2,1,0,3,4,1,0,
  	5,6,55,0,15,1,0,0,0,2,22,1,0,0,0,4,32,1,0,0,0,6,34,1,0,0,0,8,37,1,0,0,
  	0,10,11,3,2,1,0,11,12,7,0,0,0,12,13,3,0,0,0,13,16,1,0,0,0,14,16,3,2,1,
  	0,15,10,1,0,0,0,15,14,1,0,0,0,16,1,1,0,0,0,17,18,3,4,2,0,18,19,7,1,0,
  	0,19,20,3,2,1,0,20,23,1,0,0,0,21,23,3,4,2,0,22,17,1,0,0,0,22,21,1,0,0,
  	0,23,3,1,0,0,0,24,25,5,3,0,0,25,33,3,4,2,0,26,27,5,8,0,0,27,28,3,0,0,
  	0,28,29,5,9,0,0,29,33,1,0,0,0,30,33,5,2,0,0,31,33,5,1,0,0,32,24,1,0,0,
  	0,32,26,1,0,0,0,32,30,1,0,0,0,32,31,1,0,0,0,33,5,1,0,0,0,34,35,3,0,0,
  	0,35,36,5,7,0,0,36,7,1,0,0,0,37,38,6,4,-1,0,38,40,3,6,3,0,39,41,5,0,0,
  	1,40,39,1,0,0,0,40,41,1,0,0,0,41,49,1,0,0,0,42,43,10,1,0,0,43,45,3,6,
  	3,0,44,46,5,0,0,1,45,44,1,0,0,0,45,46,1,0,0,0,46,48,1,0,0,0,47,42,1,0,
  	0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,9,1,0,0,0,51,49,1,0,
  	0,0,6,15,22,32,40,45,49
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammar2ParserStaticData = std::move(staticData);
}

}

mygrammar2Parser::mygrammar2Parser(TokenStream *input) : mygrammar2Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

mygrammar2Parser::mygrammar2Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  mygrammar2Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammar2ParserStaticData->atn, mygrammar2ParserStaticData->decisionToDFA, mygrammar2ParserStaticData->sharedContextCache, options);
}

mygrammar2Parser::~mygrammar2Parser() {
  delete _interpreter;
}

const atn::ATN& mygrammar2Parser::getATN() const {
  return *mygrammar2ParserStaticData->atn;
}

std::string mygrammar2Parser::getGrammarFileName() const {
  return "mygrammar2.g4";
}

const std::vector<std::string>& mygrammar2Parser::getRuleNames() const {
  return mygrammar2ParserStaticData->ruleNames;
}

const dfa::Vocabulary& mygrammar2Parser::getVocabulary() const {
  return mygrammar2ParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrammar2Parser::getSerializedATN() const {
  return mygrammar2ParserStaticData->serializedATN;
}


//----------------- ExprContext ------------------------------------------------------------------

mygrammar2Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammar2Parser::ExprContext::getRuleIndex() const {
  return mygrammar2Parser::RuleExpr;
}

void mygrammar2Parser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Term_nodeContext ------------------------------------------------------------------

mygrammar2Parser::TermContext* mygrammar2Parser::Term_nodeContext::term() {
  return getRuleContext<mygrammar2Parser::TermContext>(0);
}

mygrammar2Parser::Term_nodeContext::Term_nodeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::Term_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitTerm_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Term_ADD_SUB_expr_nodeContext ------------------------------------------------------------------

mygrammar2Parser::TermContext* mygrammar2Parser::Term_ADD_SUB_expr_nodeContext::term() {
  return getRuleContext<mygrammar2Parser::TermContext>(0);
}

mygrammar2Parser::ExprContext* mygrammar2Parser::Term_ADD_SUB_expr_nodeContext::expr() {
  return getRuleContext<mygrammar2Parser::ExprContext>(0);
}

tree::TerminalNode* mygrammar2Parser::Term_ADD_SUB_expr_nodeContext::ADD() {
  return getToken(mygrammar2Parser::ADD, 0);
}

tree::TerminalNode* mygrammar2Parser::Term_ADD_SUB_expr_nodeContext::SUB() {
  return getToken(mygrammar2Parser::SUB, 0);
}

mygrammar2Parser::Term_ADD_SUB_expr_nodeContext::Term_ADD_SUB_expr_nodeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::Term_ADD_SUB_expr_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitTerm_ADD_SUB_expr_node(this);
  else
    return visitor->visitChildren(this);
}
mygrammar2Parser::ExprContext* mygrammar2Parser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 0, mygrammar2Parser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(15);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrammar2Parser::Term_ADD_SUB_expr_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(10);
      term();
      setState(11);
      _la = _input->LA(1);
      if (!(_la == mygrammar2Parser::SUB

      || _la == mygrammar2Parser::ADD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(12);
      expr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrammar2Parser::Term_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(14);
      term();
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

//----------------- TermContext ------------------------------------------------------------------

mygrammar2Parser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammar2Parser::TermContext::getRuleIndex() const {
  return mygrammar2Parser::RuleTerm;
}

void mygrammar2Parser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Factor_MUL_DIV_term_nodeContext ------------------------------------------------------------------

mygrammar2Parser::FactorContext* mygrammar2Parser::Factor_MUL_DIV_term_nodeContext::factor() {
  return getRuleContext<mygrammar2Parser::FactorContext>(0);
}

mygrammar2Parser::TermContext* mygrammar2Parser::Factor_MUL_DIV_term_nodeContext::term() {
  return getRuleContext<mygrammar2Parser::TermContext>(0);
}

tree::TerminalNode* mygrammar2Parser::Factor_MUL_DIV_term_nodeContext::MUL() {
  return getToken(mygrammar2Parser::MUL, 0);
}

tree::TerminalNode* mygrammar2Parser::Factor_MUL_DIV_term_nodeContext::DIV() {
  return getToken(mygrammar2Parser::DIV, 0);
}

mygrammar2Parser::Factor_MUL_DIV_term_nodeContext::Factor_MUL_DIV_term_nodeContext(TermContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::Factor_MUL_DIV_term_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitFactor_MUL_DIV_term_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Factor_nodeContext ------------------------------------------------------------------

mygrammar2Parser::FactorContext* mygrammar2Parser::Factor_nodeContext::factor() {
  return getRuleContext<mygrammar2Parser::FactorContext>(0);
}

mygrammar2Parser::Factor_nodeContext::Factor_nodeContext(TermContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::Factor_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitFactor_node(this);
  else
    return visitor->visitChildren(this);
}
mygrammar2Parser::TermContext* mygrammar2Parser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 2, mygrammar2Parser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrammar2Parser::Factor_MUL_DIV_term_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(17);
      factor();
      setState(18);
      _la = _input->LA(1);
      if (!(_la == mygrammar2Parser::DIV

      || _la == mygrammar2Parser::MUL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(19);
      term();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrammar2Parser::Factor_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(21);
      factor();
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

//----------------- FactorContext ------------------------------------------------------------------

mygrammar2Parser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammar2Parser::FactorContext::getRuleIndex() const {
  return mygrammar2Parser::RuleFactor;
}

void mygrammar2Parser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LBR_expr_RBR_nodeContext ------------------------------------------------------------------

tree::TerminalNode* mygrammar2Parser::LBR_expr_RBR_nodeContext::LBR() {
  return getToken(mygrammar2Parser::LBR, 0);
}

mygrammar2Parser::ExprContext* mygrammar2Parser::LBR_expr_RBR_nodeContext::expr() {
  return getRuleContext<mygrammar2Parser::ExprContext>(0);
}

tree::TerminalNode* mygrammar2Parser::LBR_expr_RBR_nodeContext::RBR() {
  return getToken(mygrammar2Parser::RBR, 0);
}

mygrammar2Parser::LBR_expr_RBR_nodeContext::LBR_expr_RBR_nodeContext(FactorContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::LBR_expr_RBR_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitLBR_expr_RBR_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Unary_minus_nodeContext ------------------------------------------------------------------

tree::TerminalNode* mygrammar2Parser::Unary_minus_nodeContext::SUB() {
  return getToken(mygrammar2Parser::SUB, 0);
}

mygrammar2Parser::FactorContext* mygrammar2Parser::Unary_minus_nodeContext::factor() {
  return getRuleContext<mygrammar2Parser::FactorContext>(0);
}

mygrammar2Parser::Unary_minus_nodeContext::Unary_minus_nodeContext(FactorContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::Unary_minus_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitUnary_minus_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FLOAT_nodeContext ------------------------------------------------------------------

tree::TerminalNode* mygrammar2Parser::FLOAT_nodeContext::FLOAT() {
  return getToken(mygrammar2Parser::FLOAT, 0);
}

mygrammar2Parser::FLOAT_nodeContext::FLOAT_nodeContext(FactorContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::FLOAT_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitFLOAT_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- INTEGER_nodeContext ------------------------------------------------------------------

tree::TerminalNode* mygrammar2Parser::INTEGER_nodeContext::INT() {
  return getToken(mygrammar2Parser::INT, 0);
}

mygrammar2Parser::INTEGER_nodeContext::INTEGER_nodeContext(FactorContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::INTEGER_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitINTEGER_node(this);
  else
    return visitor->visitChildren(this);
}
mygrammar2Parser::FactorContext* mygrammar2Parser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 4, mygrammar2Parser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(32);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mygrammar2Parser::SUB: {
        _localctx = _tracker.createInstance<mygrammar2Parser::Unary_minus_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(24);
        match(mygrammar2Parser::SUB);
        setState(25);
        factor();
        break;
      }

      case mygrammar2Parser::LBR: {
        _localctx = _tracker.createInstance<mygrammar2Parser::LBR_expr_RBR_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(26);
        match(mygrammar2Parser::LBR);
        setState(27);
        expr();
        setState(28);
        match(mygrammar2Parser::RBR);
        break;
      }

      case mygrammar2Parser::FLOAT: {
        _localctx = _tracker.createInstance<mygrammar2Parser::FLOAT_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(30);
        match(mygrammar2Parser::FLOAT);
        break;
      }

      case mygrammar2Parser::INT: {
        _localctx = _tracker.createInstance<mygrammar2Parser::INTEGER_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(31);
        match(mygrammar2Parser::INT);
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

//----------------- RowContext ------------------------------------------------------------------

mygrammar2Parser::RowContext::RowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammar2Parser::RowContext::getRuleIndex() const {
  return mygrammar2Parser::RuleRow;
}

void mygrammar2Parser::RowContext::copyFrom(RowContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_sep_nodeContext ------------------------------------------------------------------

mygrammar2Parser::ExprContext* mygrammar2Parser::Expr_sep_nodeContext::expr() {
  return getRuleContext<mygrammar2Parser::ExprContext>(0);
}

tree::TerminalNode* mygrammar2Parser::Expr_sep_nodeContext::SEP() {
  return getToken(mygrammar2Parser::SEP, 0);
}

mygrammar2Parser::Expr_sep_nodeContext::Expr_sep_nodeContext(RowContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::Expr_sep_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitExpr_sep_node(this);
  else
    return visitor->visitChildren(this);
}
mygrammar2Parser::RowContext* mygrammar2Parser::row() {
  RowContext *_localctx = _tracker.createInstance<RowContext>(_ctx, getState());
  enterRule(_localctx, 6, mygrammar2Parser::RuleRow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammar2Parser::Expr_sep_nodeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(34);
    expr();
    setState(35);
    match(mygrammar2Parser::SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

mygrammar2Parser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammar2Parser::ProgContext::getRuleIndex() const {
  return mygrammar2Parser::RuleProg;
}

void mygrammar2Parser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- One_line_prog_nodeContext ------------------------------------------------------------------

mygrammar2Parser::RowContext* mygrammar2Parser::One_line_prog_nodeContext::row() {
  return getRuleContext<mygrammar2Parser::RowContext>(0);
}

tree::TerminalNode* mygrammar2Parser::One_line_prog_nodeContext::EOF() {
  return getToken(mygrammar2Parser::EOF, 0);
}

mygrammar2Parser::One_line_prog_nodeContext::One_line_prog_nodeContext(ProgContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::One_line_prog_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitOne_line_prog_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mult_line_prog_nodeContext ------------------------------------------------------------------

mygrammar2Parser::ProgContext* mygrammar2Parser::Mult_line_prog_nodeContext::prog() {
  return getRuleContext<mygrammar2Parser::ProgContext>(0);
}

mygrammar2Parser::RowContext* mygrammar2Parser::Mult_line_prog_nodeContext::row() {
  return getRuleContext<mygrammar2Parser::RowContext>(0);
}

tree::TerminalNode* mygrammar2Parser::Mult_line_prog_nodeContext::EOF() {
  return getToken(mygrammar2Parser::EOF, 0);
}

mygrammar2Parser::Mult_line_prog_nodeContext::Mult_line_prog_nodeContext(ProgContext *ctx) { copyFrom(ctx); }


std::any mygrammar2Parser::Mult_line_prog_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammar2Visitor*>(visitor))
    return parserVisitor->visitMult_line_prog_node(this);
  else
    return visitor->visitChildren(this);
}

mygrammar2Parser::ProgContext* mygrammar2Parser::prog() {
   return prog(0);
}

mygrammar2Parser::ProgContext* mygrammar2Parser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrammar2Parser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  mygrammar2Parser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, mygrammar2Parser::RuleProg, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<One_line_prog_nodeContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(38);
    row();
    setState(40);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(39);
      match(mygrammar2Parser::EOF);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(49);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Mult_line_prog_nodeContext>(_tracker.createInstance<ProgContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProg);
        setState(42);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(43);
        row();
        setState(45);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(44);
          match(mygrammar2Parser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(51);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool mygrammar2Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 4: return progSempred(antlrcpp::downCast<ProgContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool mygrammar2Parser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void mygrammar2Parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammar2ParserInitialize();
#else
  ::antlr4::internal::call_once(mygrammar2ParserOnceFlag, mygrammar2ParserInitialize);
#endif
}
