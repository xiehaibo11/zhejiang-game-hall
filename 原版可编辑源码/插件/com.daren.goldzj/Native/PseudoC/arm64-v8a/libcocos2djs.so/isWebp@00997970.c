
/* cocos2d::Image::isWebp(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isWebp(Image *this,uchar *param_1,long param_2)

{
                    /* catch() { ... } // from try @ 009976c4 with catch @ 00997970 */
  if (param_2 < 0xd) {
    return false;
  }
                    /* catch() { ... } // from try @ 009976fc with catch @ 00997980
                       catch() { ... } // from try @ 00997764 with catch @ 00997980
                       catch() { ... } // from try @ 00997864 with catch @ 00997980 */
  if (*(int *)param_1 != 0x46464952) {
    return false;
  }
  return *(int *)(param_1 + 8) == 0x50424557;
}

