
/* cocos2d::Rect::getMidX() const */

float __thiscall cocos2d::Rect::getMidX(Rect *this)

{
  return *(float *)this + *(float *)(this + 8) * 0.5;
}

