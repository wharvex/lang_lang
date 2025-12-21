#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <cstddef>
#include <fstream>

class Utility {
public:
  static std::size_t countLinesSimple(std::ifstream &in);
};

#endif
