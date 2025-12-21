#include "Lexer.hpp"

int Lexer::lex(std::string line) { return 0; }

Lexer::Lexer(std::size_t lineCount) {
  Lexer::lineCount = lineCount;
  // Why does the following line not work? It says "'TokenType' does not refer
  // to a value" but Lexer.hpp uses it fine to declare the type of
  // "tokenTypeLookup", and I'm importing Lexer.hpp here, so what is the issue
  // here?

  // Lexer::tokenTypeLookup['['] = TokenType.LEFT_SQUARE_BRACKET;
}
