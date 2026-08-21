
/* cocos2d::Size::equals(cocos2d::Size const&) const */

bool __thiscall cocos2d::Size::equals(Size *this,Size *param_1)

{
  if (ABS(*(float *)this - *(float *)param_1) < 1.1920929e-07) {
    return ABS(*(float *)(this + 4) - *(float *)(param_1 + 4)) < 1.1920929e-07;
  }
  return false;
}

