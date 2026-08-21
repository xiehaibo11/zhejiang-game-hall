
/* cocos2d::Image::isPvr(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isPvr(Image *this,uchar *param_1,long param_2)

{
  if ((ulong)param_2 < 0x34) {
    return false;
  }
  if (*(int *)(param_1 + 0x2c) != 0x21525650) {
                    /* try { // try from 009979d8 to 00a97a2f has its CatchHandler @ 009979d8
                       catch() { ... } // from try @ 009979d8 with catch @ 009979d8
                       catch() { ... } // from try @ 00997c74 with catch @ 009979d8 */
    return *(int *)param_1 == 0x3525650;
  }
  return true;
}

