#include <iostream>

int main() {
  int apples(5);

  if (apples >= 5) {
    int apples(10);

    std::cout << apples << '\n';
  }

  std::cout << apples << '\n';

  return 0;
}
