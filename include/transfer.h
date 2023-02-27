#pragma once
#include "core.h"
class heatTransfer {
 public:
  static void Interface();

 private:
  static float SimpleConduction(float k, float A, float deltaT, float deltaX);
  static float Convection(float h, float A, float Ts, float Tinf);
  static float Radiation(float epsilon, float A, float Ts);
};