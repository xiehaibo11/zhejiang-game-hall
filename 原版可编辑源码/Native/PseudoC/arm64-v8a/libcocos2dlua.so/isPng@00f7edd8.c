
/* cocos2d::Image::isPng(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isPng(Image *this,uchar *param_1,long param_2)

{
  if (param_2 < 9) {
    return false;
  }
  return *(long *)param_1 == 0xa1a0a0d474e5089;
}

