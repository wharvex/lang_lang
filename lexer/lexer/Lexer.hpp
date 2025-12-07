#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>
#include <vector>

#include "../token/Token.hpp"

class Lexer {
public:
  Lexer(std::size_t line_count);
  int lex(std::string line);

private:
  std::vector<Token> tokens;
};

#endif
