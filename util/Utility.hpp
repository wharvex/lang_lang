#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <cstddef>
#include <fstream>

class Utility {
public:
  static std::size_t count_lines_simple(std::ifstream &in);
};

#endif
