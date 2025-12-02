#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream file("../program.lang");
  std::string str;
  while (std::getline(file, str)) {
    std::cout << str;
    std::cout << "yo I'm in the loop\n";
  }
  std::cout << "yo I'm outside the loop\n";
  return 0;
}
