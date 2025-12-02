#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>

class Lexer {
public:
  Lexer(int line_count);
  int lex(std::string line);
};

#endif
