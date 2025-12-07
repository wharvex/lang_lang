#include "Utility.hpp"

#include <string>

std::size_t Utility::count_lines_simple(std::ifstream &in) {
  // Ensure we start reading from beginning and clear any error state.
  in.clear();
  in.seekg(0, std::ios::beg);

  std::size_t lines = 0;
  std::string line;
  while (std::getline(in, line)) {
    ++lines;
  }

  // Reset stream state and position to the beginning for caller convenience.
  in.clear();
  in.seekg(0, std::ios::beg);
  return lines;
}
