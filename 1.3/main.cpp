#include <iostream>

int main() {
  int x = 5;
  x = x - 2;
  std::cout << x; // 3

  int y = x;
  std::cout << y; // 3

  std::cout << x + y; // 6

  std::cout << x; // 3

  int z;

  std::cout << z; // ???

  return 0;
}
