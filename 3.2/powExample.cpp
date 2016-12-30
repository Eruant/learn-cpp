#include <cmath>
#include <iostream>

int main() {
  std::cout << "Enter the base: ";
  double base;
  std::cin >> base;

  std::cout << "Enter the exponend: ";
  double exp;
  std::cin >> exp;

  std::cout << base << "^" << exp << " = " << pow(base, exp) << "\n";

  return 0;
}
