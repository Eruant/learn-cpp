#include <iostream>

void returnNothing() {
  std::cout << "Hi\n";
}

int return5() {
  return 5;
}

int main() {
  std::cout << return5() << std::endl;
  std::cout << return5() + 2 << std::endl;

  returnNothing();
  return5();

  // std::cout << returnNothing();

  return 0;
}
