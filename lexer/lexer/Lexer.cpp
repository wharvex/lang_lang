#include "Lexer.hpp"
#include <cstddef>
#include <iostream>

Lexer::Lexer(std::size_t lineCount, std::ifstream &file) : file(file) {
  Lexer::lineCount = lineCount;

  Lexer::tokenTypeLookup['['] = TokenType::LEFT_SQUARE_BRACKET;
  Lexer::tokenTypeLookup[']'] = TokenType::RIGHT_SQUARE_BRACKET;
  Lexer::tokenTypeLookup['{'] = TokenType::LEFT_CURLY_BRACKET;
  Lexer::tokenTypeLookup['}'] = TokenType::RIGHT_CURLY_BRACKET;
  Lexer::tokenTypeLookup['+'] = TokenType::PLUS;
  Lexer::tokenTypeLookup['-'] = TokenType::MINUS;
  Lexer::tokenTypeLookup['*'] = TokenType::STAR;
  Lexer::tokenTypeLookup[' '] = TokenType::SPACE;
  Lexer::tokenTypeLookup['/'] = TokenType::FORWARD_SLASH;
  Lexer::tokenTypeLookup['\\'] = TokenType::BACK_SLASH;
  Lexer::tokenTypeLookup['('] = TokenType::LEFT_PAREN;
  Lexer::tokenTypeLookup[')'] = TokenType::RIGHT_PAREN;
  Lexer::tokenTypeLookup['.'] = TokenType::DOT;

  std::vector<char> letters{
      'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
      'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
      'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
      'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  std::vector<char> numbers{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  for (char letter : letters) {
    Lexer::tokenTypeLookup[letter] = TokenType::LETTER;
  }

  for (char number : numbers) {
    Lexer::tokenTypeLookup[number] = TokenType::NUMBER;
  }
}

int Lexer::lex(std::string line) {
  for (size_t i = 0; i < line.length(); i++) {
    lex(line[i]);
  }

  return 0;
}

int Lexer::lex() {
  std::string line;
  while (std::getline(file, line)) {
    std::cout << line << std::endl;
    std::cout << "yo I'm in the loop" << std::endl;
    std::cout << "lex output: " << lex(line) << std::endl;
  }
  return 0;
}
