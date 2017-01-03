#include <string>
#include <iostream>

int main() {
  std::cout << "Enter your full name: ";
  std::string name;
  std::getline(std::cin, name);

  std::cout << "Hello, " << name << '\n';

  return 0;
}
