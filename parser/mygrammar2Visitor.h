
// Generated from mygrammar2.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrammar2Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by mygrammar2Parser.
 */
class  mygrammar2Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mygrammar2Parser.
   */
    virtual std::any visitTerm_ADD_SUB_expr_node(mygrammar2Parser::Term_ADD_SUB_expr_nodeContext *context) = 0;

    virtual std::any visitTerm_node(mygrammar2Parser::Term_nodeContext *context) = 0;

    virtual std::any visitFactor_MUL_DIV_term_node(mygrammar2Parser::Factor_MUL_DIV_term_nodeContext *context) = 0;

    virtual std::any visitFactor_node(mygrammar2Parser::Factor_nodeContext *context) = 0;

    virtual std::any visitUnary_minus_node(mygrammar2Parser::Unary_minus_nodeContext *context) = 0;

    virtual std::any visitLBR_expr_RBR_node(mygrammar2Parser::LBR_expr_RBR_nodeContext *context) = 0;

    virtual std::any visitFLOAT_node(mygrammar2Parser::FLOAT_nodeContext *context) = 0;

    virtual std::any visitINTEGER_node(mygrammar2Parser::INTEGER_nodeContext *context) = 0;

    virtual std::any visitExpr_sep_node(mygrammar2Parser::Expr_sep_nodeContext *context) = 0;

    virtual std::any visitOne_line_prog_node(mygrammar2Parser::One_line_prog_nodeContext *context) = 0;

    virtual std::any visitMult_line_prog_node(mygrammar2Parser::Mult_line_prog_nodeContext *context) = 0;


};

