
/* cocos2d::Vec2::equals(cocos2d::Vec2 const&) const */

bool __thiscall cocos2d::Vec2::equals(Vec2 *this,Vec2 *param_1)

{
  if (ABS(*(float *)this - *(float *)param_1) < 1.1920929e-07) {
    return ABS(*(float *)(this + 4) - *(float *)(param_1 + 4)) < 1.1920929e-07;
  }
  return false;
}

