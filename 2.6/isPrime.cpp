#include <iostream>

bool isPrime(int x) {
  if (
    x == 2 ||
    x == 3 ||
    x == 5 ||
    x == 7
  ) {
    return true;
  }

  return false;
}

int main() {
  std::cout << "Enter a number: ";
  int x;
  std::cin >> x;

  if (isPrime(x)) {
    std::cout << x << " is a prime number" << std::endl;
  } else {
    std::cout << x << " is not a prime number" << std::endl;
  }

  return 0;
}
