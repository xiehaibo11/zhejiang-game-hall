
/* cocos2d::AABB::containPoint(cocos2d::Vec3 const&) const */

bool __thiscall cocos2d::AABB::containPoint(AABB *this,Vec3 *param_1)

{
  if (*(float *)param_1 < *(float *)this) {
    return false;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 4)) {
    return false;
  }
  if (*(float *)(param_1 + 8) < *(float *)(this + 8)) {
    return false;
  }
  if (*(float *)(this + 0xc) < *(float *)param_1) {
    return false;
  }
  if (*(float *)(this + 0x10) < *(float *)(param_1 + 4)) {
    return false;
  }
  return *(float *)(param_1 + 8) <= *(float *)(this + 0x14);
}

