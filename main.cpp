#include <fstream>
#include <iostream>
#include <string>

#include "lexer/lexer/Lexer.hpp"
#include "util/Utility.hpp"

int main() {
  std::ifstream file("../program.lang");
  std::string line;

  std::size_t lineCount = Utility::countLinesSimple(file);

  Lexer lexer(lineCount, file);

  lexer.lex();

  std::cout << "end of main" << std::endl;
  return 0;
}
