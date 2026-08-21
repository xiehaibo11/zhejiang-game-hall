
/* cocos2d::Image::isJpg(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isJpg(Image *this,uchar *param_1,long param_2)

{
  if (param_2 < 5) {
    return false;
  }
  return *(short *)param_1 == -0x2701;
}

