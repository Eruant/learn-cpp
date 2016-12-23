#include <iostream>

int doubleNumber(int x) {
  return x * 2;
}

int main() {
  int x = 0;

  std::cout << "Enter a number and I'll double it: " << std::endl;
  std::cin >> x;
  std::cout << x << " doubled is " << doubleNumber(x) << std::endl;

  return 0;
}
