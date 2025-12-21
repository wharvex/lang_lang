#ifndef TOKEN_HPP
#define TOKEN_HPP

#include "TokenType.h"
#include <string>

class Token {
public:
  Token(std::string text);
  TokenType getTokenType();
  std::string getText();

private:
  TokenType tokenType;
  std::string text;
};

#endif
