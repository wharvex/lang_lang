#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>
#include <unordered_map>
#include <vector>

#include "../token/Token.hpp"

class Lexer {
public:
  Lexer(std::size_t lineCount);
  int lex(std::string line);
  int lex(char lineChar);

private:
  std::vector<Token> tokens;
  std::size_t lineCount;
  std::unordered_map<char, TokenType> tokenTypeLookup;
};

#endif
