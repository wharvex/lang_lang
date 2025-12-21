#ifndef LEXER_HPP
#define LEXER_HPP

#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>

#include "../token/Token.hpp"

class Lexer {
public:
  Lexer(std::size_t lineCount, std::ifstream &file);
  int lex();

private:
  std::vector<Token> tokens;
  std::size_t lineCount;
  std::ifstream &file;
  std::unordered_map<char, TokenType> tokenTypeLookup;
  int lex(std::string line);
  int lex(char lineChar);
};

#endif
