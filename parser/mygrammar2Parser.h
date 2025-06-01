
// Generated from mygrammar2.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  mygrammar2Parser : public antlr4::Parser {
public:
  enum {
    INT = 1, FLOAT = 2, SUB = 3, ADD = 4, DIV = 5, MUL = 6, SEP = 7, LBR = 8, 
    RBR = 9, WS = 10
  };

  enum {
    RuleExpr = 0, RuleTerm = 1, RuleFactor = 2, RuleRow = 3, RuleProg = 4
  };

  explicit mygrammar2Parser(antlr4::TokenStream *input);

  mygrammar2Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~mygrammar2Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ExprContext;
  class TermContext;
  class FactorContext;
  class RowContext;
  class ProgContext; 

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Term_nodeContext : public ExprContext {
  public:
    Term_nodeContext(ExprContext *ctx);

    TermContext *term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Term_ADD_SUB_expr_nodeContext : public ExprContext {
  public:
    Term_ADD_SUB_expr_nodeContext(ExprContext *ctx);

    TermContext *term();
    ExprContext *expr();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Factor_MUL_DIV_term_nodeContext : public TermContext {
  public:
    Factor_MUL_DIV_term_nodeContext(TermContext *ctx);

    FactorContext *factor();
    TermContext *term();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Factor_nodeContext : public TermContext {
  public:
    Factor_nodeContext(TermContext *ctx);

    FactorContext *factor();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TermContext* term();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LBR_expr_RBR_nodeContext : public FactorContext {
  public:
    LBR_expr_RBR_nodeContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Unary_minus_nodeContext : public FactorContext {
  public:
    Unary_minus_nodeContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    FactorContext *factor();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FLOAT_nodeContext : public FactorContext {
  public:
    FLOAT_nodeContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  INTEGER_nodeContext : public FactorContext {
  public:
    INTEGER_nodeContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  RowContext : public antlr4::ParserRuleContext {
  public:
    RowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RowContext() = default;
    void copyFrom(RowContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_sep_nodeContext : public RowContext {
  public:
    Expr_sep_nodeContext(RowContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RowContext* row();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() = default;
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  One_line_prog_nodeContext : public ProgContext {
  public:
    One_line_prog_nodeContext(ProgContext *ctx);

    RowContext *row();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Mult_line_prog_nodeContext : public ProgContext {
  public:
    Mult_line_prog_nodeContext(ProgContext *ctx);

    ProgContext *prog();
    RowContext *row();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();
  ProgContext* prog(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool progSempred(ProgContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

