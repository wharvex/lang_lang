#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>
#include <vector>

#include "../token/Token.hpp"

class Lexer {
public:
  Lexer(std::size_t lineCount);
  int lex(std::string line);

private:
  std::vector<Token> tokens;
  std::size_t lineCount;
};

#endif
