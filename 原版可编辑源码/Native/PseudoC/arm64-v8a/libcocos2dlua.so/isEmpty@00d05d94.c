
/* cocos2d::AABB::isEmpty() const */

bool __thiscall cocos2d::AABB::isEmpty(AABB *this)

{
  if (*(float *)(this + 0xc) < *(float *)this) {
    return true;
  }
  if (*(float *)(this + 0x10) < *(float *)(this + 4)) {
    return true;
  }
  return *(float *)(this + 0x14) < *(float *)(this + 8);
}

