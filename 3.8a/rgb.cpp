#include <iostream>

int main() {
  const unsigned int redBits = 0xFF000000;
  const unsigned int greenBits = 0x00FF0000;
  const unsigned int blueBits = 0x0000FF00;
  const unsigned int alphaBits = 0x000000FF;

  std::cout << "Enter a 32-bit RGBA color value in hex (e.g. FF7F3300): ";
  unsigned int pixel;
  std::cin >> std::hex >> pixel; // std::hex allows us to read hex value

  // use bitwise AND to isolat red pixels, then right shify the value into range 0-255
  uint8_t red = (pixel & redBits) >> 24;
  uint8_t green = (pixel & greenBits) >> 16;
  uint8_t blue = (pixel & blueBits) >> 8;
  uint8_t alpha = pixel & alphaBits;

  std::cout << "You color contains:\n";
  std::cout << static_cast<int>(red) << " of 255 red\n";
  std::cout << static_cast<int>(green) << " of 255 green\n";
  std::cout << static_cast<int>(blue) << " of 255 blue\n";
  std::cout << static_cast<int>(alpha) << " of 255 alpha\n";

  return 0;
}
