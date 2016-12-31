#include <iostream>

int main() {
  uint8_t option_viewed = 0x01;
  uint8_t option_edited = 0x02;
  uint8_t option_favorited = 0x04;
  uint8_t option_shared = 0x08;
  uint8_t option_deleted = 0x80;

  uint8_t myArticleFlags(0);

  // 1a) set article to be viewed
  myArticleFlags |= option_viewed;

  // 1b) see if article is deleted
  bool isDeleted = myArticleFlags & option_deleted;

  // 1c) unset the article as a favorite
  myArticleFlags &= ~option_favorited;

  return 0;
}
