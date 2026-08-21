
/* cocos2d::Image::isWebp(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isWebp(Image *this,uchar *param_1,long param_2)

{
  if (param_2 < 0xd) {
    return false;
  }
  if (*(int *)param_1 != 0x46464952) {
    return false;
  }
  return *(int *)(param_1 + 8) == 0x50424557;
}

