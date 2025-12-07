#ifndef TOKEN_HPP
#define TOKEN_HPP

#include "TokenType.cpp"
#include <string>

class Token {
public:
  Token(std::string text);

private:
  TokenType tokenType;
};

#endif
