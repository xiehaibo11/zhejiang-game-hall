
/* cocos2d::Quaternion::isIdentity() const */

bool __thiscall cocos2d::Quaternion::isIdentity(Quaternion *this)

{
  if (*(float *)this != 0.0) {
    return false;
  }
  if (*(float *)(this + 4) == 0.0) {
    if (*(float *)(this + 8) == 0.0) {
      return *(float *)(this + 0xc) == 1.0;
    }
    return false;
  }
  return false;
}

