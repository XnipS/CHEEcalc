

#include "../include/core.h"
#include "../include/transfer.h"

bool running = true;



void RequestCommand() {
  Print("Please enter a command:");

  std::string userInput;
  std::cin >> userInput;

  if (userInput == "exit") {
    running = false;
  } else if (userInput == "ping") {
    Print("Pong!");
  } else if (userInput == "transfer") {
    heatTransfer::Interface();
  } else {
    Print("Unknown command.");
  }
  Print(NIP_BigLine);
}

int main(int argc, char* args[]) {
  while (running) {
    RequestCommand();
  }
  return 0;
}
