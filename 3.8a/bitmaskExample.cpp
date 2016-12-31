#include <iostream>

int main() {
  const uint8_t lowMask = 0xF; // 0000 0000 0000 1111

  std::cout << "Enter an integer: ";
  int num;
  std::cin >> num;

  num &= lowMask; // remove the high bits to leave only the low bits

  std::cout << "The 4 low bits have value: " << num << '\n';

  return 0;
}
