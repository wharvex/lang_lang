#include "Token.hpp"

Token::Token(char srcChar, TokenType tokenType) {
  Token::srcChar = srcChar;
  Token::tokenType = tokenType;
}
