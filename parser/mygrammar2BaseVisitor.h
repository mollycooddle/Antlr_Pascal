
// Generated from mygrammar2.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrammar2Visitor.h"


/**
 * This class provides an empty implementation of mygrammar2Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mygrammar2BaseVisitor : public mygrammar2Visitor {
public:

  virtual std::any visitTerm_ADD_SUB_expr_node(mygrammar2Parser::Term_ADD_SUB_expr_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm_node(mygrammar2Parser::Term_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor_MUL_DIV_term_node(mygrammar2Parser::Factor_MUL_DIV_term_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor_node(mygrammar2Parser::Factor_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_minus_node(mygrammar2Parser::Unary_minus_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLBR_expr_RBR_node(mygrammar2Parser::LBR_expr_RBR_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFLOAT_node(mygrammar2Parser::FLOAT_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitINTEGER_node(mygrammar2Parser::INTEGER_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_sep_node(mygrammar2Parser::Expr_sep_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOne_line_prog_node(mygrammar2Parser::One_line_prog_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMult_line_prog_node(mygrammar2Parser::Mult_line_prog_nodeContext *ctx) override {
    return visitChildren(ctx);
  }


};

