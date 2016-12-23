#include <iostream>

void doPrint() {
  std::cout << "In doPrint()" << std::endl;
}

void printValue(int x) {
  std::cout << x << std::endl;
}

int add(int x, int y) {
  return x + y;
}

int main() {
  printValue(6);
  printValue(add(2, 3));
  return 0;
}
