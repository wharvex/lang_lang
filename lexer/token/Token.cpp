#include "Token.hpp"

Token::Token(std::string text) {
  Token::text = text;

  if (text == "[") {
    Token::tokenType = TokenType::LEFT_BRACKET;
  } else if (text == "]") {
    Token::tokenType = TokenType::RIGHT_BRACKET;
  }
}
