
/* cocos2d::Rect::intersectsRect(cocos2d::Rect const&) const */

bool __thiscall cocos2d::Rect::intersectsRect(Rect *this,Rect *param_1)

{
  if (*(float *)this + *(float *)(this + 8) < *(float *)param_1) {
    return false;
  }
  if (*(float *)param_1 + *(float *)(param_1 + 8) < *(float *)this) {
    return false;
  }
  if (*(float *)(this + 4) + *(float *)(this + 0xc) < *(float *)(param_1 + 4)) {
    return false;
  }
  return *(float *)(this + 4) <= *(float *)(param_1 + 4) + *(float *)(param_1 + 0xc);
}

