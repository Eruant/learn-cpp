#include <iostream>

int main() {
  std::cout << "Enter a whole number: ";
  int x;
  std::cin >> x;

  std::cout << "Enter a larger whole number: ";
  int y;
  std::cin >> y;

  if (y < x) {
    std::cout << "Swapping the values\n";
    int tmp = y;
    y = x;
    x = tmp;
  } // tmp destroyed

  std::cout << "The smaller value is " << x << '\n';
  std::cout << "The larger value is " << y << '\n';

  return 0;
} // x and y destroyed
