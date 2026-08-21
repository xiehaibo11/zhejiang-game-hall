
/* cocos2d::Image::isTiff(unsigned char const*, long) */

bool __thiscall cocos2d::Image::isTiff(Image *this,uchar *param_1,long param_2)

{
  if (param_2 < 5) {
    return false;
  }
  if (((*(short *)param_1 == 0x4949) && (param_1[2] == '*')) && (param_1[3] == '\0')) {
    return true;
  }
  if (*(short *)param_1 != 0x4d4d) {
    return false;
  }
  if (param_1[2] != '\0') {
    return false;
  }
  return param_1[3] == '*';
}

