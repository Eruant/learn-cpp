#include <iostream>

int main() {
  int count{1};

  while (count <= 100) {
    std::cout << count << "\t";

    if (count % 10 == 0) {
      std::cout << "\n";
    }

    count += 1;
  }

  return 0;
}
