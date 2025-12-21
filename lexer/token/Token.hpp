#ifndef TOKEN_HPP
#define TOKEN_HPP

#include "TokenType.h"

class Token {
public:
  Token(char srcChar, TokenType tokenType);
  TokenType getTokenType();
  char getSrcChar();

private:
  TokenType tokenType;
  char srcChar;
};

#endif
