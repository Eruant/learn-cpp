#include <string>
#include <iostream>

int main() {
  std::cout << "Enter your full name: ";
  std::string fullName;
  std::getline(std::cin, fullName);

  std::cout << "Enter your age: ";
  int age;
  std::cin >> age;

  float yearsPerLetter(static_cast<double>(age) / fullName.length());

  std::cout << "You've lived " << yearsPerLetter << " for each letter in your name\n";

  return 0;
}
