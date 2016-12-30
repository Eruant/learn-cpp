#include <iostream>

int requestNumber() {
  std::cout << "Enter a number: ";
  int x;
  std::cin >> x;

  return x;
}

bool isEven(const int x) {
  return x % 2 == 0;
}

int main() {
  const int input = requestNumber();

  std::cout << input << " is " << (isEven(input) ? "even" : "odd") << "\n";

  return 0;
}
