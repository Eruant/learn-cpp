#include <iostream>
#include "myConstants.h"

double getTowerHeight() {
  std::cout << "Enter the towers height: ";
  double height;
  std::cin >> height;

  return height;
}

double calculateHeight(const double startHeight, const int secondsPassed) {
  const double distance = myConstants::gravity * secondsPassed * secondsPassed / 2;
  
  return startHeight - distance;
}

void printBallHeight(const double startHeight, const int secondsPassed) {
  const double height = calculateHeight(startHeight, secondsPassed);
  
  if (height > 0) {
    std::cout << "At " << secondsPassed << " seconds, the ball is at height: " << height << " meters\n";
  } else {
    std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.\n";
  }
}

int main() {
  const double towerHeight = getTowerHeight();

  for (int i = 0; i <= 5; i++) {
    printBallHeight(towerHeight, i);
  }

  return 0;
}
