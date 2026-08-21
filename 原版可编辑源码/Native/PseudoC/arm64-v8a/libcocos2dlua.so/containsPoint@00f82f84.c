
/* cocos2d::Rect::containsPoint(cocos2d::Vec2 const&) const */

bool __thiscall cocos2d::Rect::containsPoint(Rect *this,Vec2 *param_1)

{
  if (*(float *)param_1 < *(float *)this) {
    return false;
  }
  if (*(float *)this + *(float *)(this + 8) < *(float *)param_1) {
    return false;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 4)) {
    return false;
  }
  return *(float *)(param_1 + 4) <= *(float *)(this + 4) + *(float *)(this + 0xc);
}

