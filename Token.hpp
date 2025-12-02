#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>

class Token {
public:
  enum TokenType {
    SPACE,
    LETTER,
    NUMBER,
    LEFT_BRACKET,
    RIGHT_BRACKET,
    PLUS,
    MINUS,
    STAR,
    SLASH,
    DOT
  };
  Token(std::string text);

private:
  TokenType tokenType;
};

#endif
