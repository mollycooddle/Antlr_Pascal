
// Generated from mygrammar2.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  mygrammar2Lexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, FLOAT = 2, SUB = 3, ADD = 4, DIV = 5, MUL = 6, SEP = 7, LBR = 8, 
    RBR = 9, WS = 10
  };

  explicit mygrammar2Lexer(antlr4::CharStream *input);

  ~mygrammar2Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

