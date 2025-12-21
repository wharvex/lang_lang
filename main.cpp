#include <fstream>
#include <iostream>
#include <string>

#include "lexer/lexer/Lexer.hpp"
#include "util/Utility.hpp"

int main() {
  std::ifstream file("../program.lang");
  std::string line;

  std::size_t lineCount = Utility::count_lines_simple(file);

  Lexer lexer(lineCount);

  while (std::getline(file, line)) {
    std::cout << line << std::endl;
    std::cout << "yo I'm in the loop" << std::endl;
    std::cout << "lex output: " << lexer.lex(line) << std::endl;
  }
  std::cout << "yo I'm outside the loop\n";
  return 0;
}
