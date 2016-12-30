#include <iostream>

int main() {
  std::cout << "\aInput a keyboard character: ";

  char ch;
  std::cin >> ch;
  std::cout << ch << " has the ASCII code " << static_cast<int>(ch) << std::endl;

  return 0;
}
