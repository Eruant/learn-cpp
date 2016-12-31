#include <iostream>

int main() {
  const uint8_t isHungry = 0x01;    // 0000 0001
  const uint8_t isSad = 0x02;       // 0000 0010
  const uint8_t isMad = 0x04;       // 0000 0100
  const uint8_t isHappy = 0x08;     // 0000 1000
  const uint8_t isLaughing = 0x10;  // 0001 0000
  const uint8_t isAsleep = 0x20;    // 0010 0000
  const uint8_t isDead = 0x40;      // 0100 0000
  const uint8_t isCrying = 0x80;    // 1000 0000

  uint8_t me = 0; // all flags off

  me |= isHappy | isLaughing; // switch on flags

  std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << "\n";
  std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << "\n";

  me &= ~isLaughing; // switch off laughing flag

  std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << "\n";
  std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << "\n";

  return 0;
}
