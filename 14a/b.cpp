#include <iostream>

void printInt(int x) {
  std::cout << x << std::endl;
}

int add(int x, int y) {
  return x + y;
}

int multiply(int z, int w) {
  return z * w;
}

int main() {
  printInt(add(4, 5));
  printInt(multiply(2, 3));

  printInt(add(1 + 2, 3 * 4));
  
  int a = 5;
  printInt(add(a, a));

  printInt(add(1, multiply(2, 3)));
  printInt(add(1, add(2, 3)));

  return 0;
}
