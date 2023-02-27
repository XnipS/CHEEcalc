#include "../include/transfer.h"

float heatTransfer::SimpleConduction(float k, float A, float deltaT,
                                     float deltaX) {
  return -k * A * (deltaT / deltaX);
};
float heatTransfer::Convection(float h, float A, float Ts, float Tinf) {
  return h * A * (Ts - Tinf);
};
float heatTransfer::Radiation(float epsilon, float A, float Ts) {
  return epsilon * StefanBoltzmannConst * A * pow(Ts, 4);
};

void heatTransfer::Interface() {
  while (true) {
    Print("Please enter the type of heat transfer:");
    Print("[0] Exit [1] Conduction [2] Convection [3] Radiation");

    int userInput;
    std::cin >> userInput;

    if (userInput == 0) {
      Print("Module Exit!");
      break;
    } else if (userInput == 1) {
      Print("Please enter variables: ");
      float variables[4];

      Print("k (W m-1 K-1): ");
      std::cin >> variables[0];
      Print("A (m2): ");
      std::cin >> variables[1];
      Print("deltaT (K): ");
      std::cin >> variables[2];
      Print("deltaX (m): ");
      std::cin >> variables[3];

      Print(SimpleConduction(variables[0], variables[1], variables[2],
                             variables[3]),
            true);
      Print(" W");
    } else if (userInput == 2) {
      Print("Please enter variables: ");
      float variables[4];

      Print("h (W m-2 K-1): ");
      std::cin >> variables[0];
      Print("A (m2): ");
      std::cin >> variables[1];
      Print("Ts (K): ");
      std::cin >> variables[2];
      Print("Tinf (K): ");
      std::cin >> variables[3];

      Print(Convection(variables[0], variables[1], variables[2], variables[3]),
            true);
      Print(" W");
    } else if (userInput == 3) {
      Print("Please enter variables: ");
      float variables[3];

      Print("epsilon (unitless): ");
      std::cin >> variables[0];
      Print("A (m2): ");
      std::cin >> variables[1];
      Print("Ts (K): ");
      std::cin >> variables[2];

      Print(Radiation(variables[0], variables[1], variables[2]), true);
      Print(" W");
    } else {
      Print("Unknown command.");
    }
  }
}