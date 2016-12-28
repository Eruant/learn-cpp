#include <iostream>

int main() {
  // largest 16-bit unsigned value possible
  unsigned short x = 65535;

  std::cout << "x was: " << x << std::endl;

  x = x + 1;

  std::cout << "x is now: " << x << std::endl;

  return 0;
}
