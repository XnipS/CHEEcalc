#include "../include/core.h"
#include "../include/transfer.h"

bool running = true;

void RequestCommand(char* startCommand = nullptr) {
  Print("Please enter a command/module:");
  std::string userInput;
  if (startCommand != nullptr) {
    userInput = startCommand;
  } else {
    std::cin >> userInput;
  }

  if (userInput == "exit") {
    running = false;
  } else if (userInput == "ping") {
    Print("Pong!");
  } else if (userInput == "transfer") {
    heatTransfer::Interface();
  } else if (userInput == "help") {
    Print("> help - List available commands.");
    Print("> exit - Exit program.");
    Print("> ping - Pong! (Dev Test).");
    Print("> transfer - Load Heat Transfer Module.");
  } else {
    Print("Unknown command.");
  }
  Print(NIP_BigLine);
}

int main(int argc, char* args[]) {
  bool once = true;
  while (running) {
    if (argc > 1 && once) {
      RequestCommand(args[1]);
      once = false;
    } else {
      RequestCommand(nullptr);
    }
  }
  return 0;
}
