#pragma once
#include <cmath>
#include <iostream>
#include <string>
#define NIP_BigLine                                                            \
  "==========================================================================" \
  "======"
inline auto Print = [](auto input, bool noBreak = false) {
  if (noBreak) {
    std::cout << input;
  } else {
    std::cout << input << std::endl;
  }
};