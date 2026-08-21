
/* cocos2d::Vec2::length() const */

float __thiscall cocos2d::Vec2::length(Vec2 *this)

{
  return SQRT(*(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4));
}

