#pragma once
#include <cmath>
#include <iostream>
#include <string>
#define NIP_BigLine                                                            \
  "==========================================================================" \
  "======"
#define StefanBoltzmannConst 0.000000056697
inline auto Print = [](auto input, bool noBreak = false) {
  if (noBreak) {
    std::cout << input;
  } else {
    std::cout << input << std::endl;
  }
};