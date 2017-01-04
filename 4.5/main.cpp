#include <iostream>
#include <string>

enum ItemType {
  ITEMTYPE_SWORD,
  ITEMTYPE_TORCH,
  ITEMTYPE_POTION
};

std::string getItemName(ItemType itemType) {
  switch (itemType) {
    case ITEMTYPE_SWORD:
      return std::string("Sword");
    case ITEMTYPE_TORCH:
      return std::string("Torch");
    case ITEMTYPE_POTION:
      return std::string("Potion");
  }

  return std::string("Unknown");
}

int main() {
  ItemType itemType(ITEMTYPE_TORCH);

  std::cout << "You are carrying a " << getItemName(itemType) << "\n";

  return 0;
}
