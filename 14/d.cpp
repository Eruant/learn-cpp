#include <iostream>

void printA() {
  std::cout << "A\n";
}

void printB() {
  std::cout << "B\n";
}

void printAB() {
  printA();
  printB();
}

int main() {
  std::cout << "Starting main()" << std::endl;
  printAB();
  std::cout << "Ending main()" << std::endl;

  return 0;
}
