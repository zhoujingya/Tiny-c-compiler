#ifndef LEXER_H
#define LEXER_H

#include <string>

class Lexer {
public:
  Lexer() = default;
  ~Lexer() = default;

  void lex(const std::string &source);
};

#endif
