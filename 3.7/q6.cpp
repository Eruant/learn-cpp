#include <iostream>

int testBit(int x, int bit) {
  if (x >= bit) {
    std::cout << "1";
    x -= bit;
  } else {
    std::cout << "0";
  }
  
  return x;
}

int main() {
  std::cout << "Enter a number between 0 and 255: ";
  int x;
  std::cin >> x;

  x = testBit(x, 128);
  x = testBit(x, 64);
  x = testBit(x, 32);
  x = testBit(x, 16);

  std::cout << " ";

  x = testBit(x, 8);
  x = testBit(x, 4);
  x = testBit(x, 2);
  testBit(x, 1);

  std::cout << "\n";

  return 0;
}
