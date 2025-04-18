#ifndef PARSER_H
#define PARSER_H

#include "Lexer.h"

class Parser {
private:
    Lexer lexer;
public:
    Parser(Lexer lexer): lexer(lexer) {}
    ~Parser() = default;

    void parse(const std::string &source);
};

#endif
