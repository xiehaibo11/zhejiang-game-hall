
/* cocos2d::Label::setBMFontSizeInternal(float) */

float cocos2d::Label::setBMFontSizeInternal(float param_1)

{
  long *in_x0;
  
  if ((int)in_x0[0x61] == 1) {
    param_1 = (float)(**(code **)(*in_x0 + 0x540))(in_x0,in_x0 + 0x69,&Vec2::ZERO);
    *(undefined1 *)((long)in_x0 + 0x30c) = 1;
  }
  return param_1;
}

