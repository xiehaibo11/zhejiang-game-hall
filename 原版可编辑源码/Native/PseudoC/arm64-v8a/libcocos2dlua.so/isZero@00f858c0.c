
/* cocos2d::Quaternion::isZero() const */

bool __thiscall cocos2d::Quaternion::isZero(Quaternion *this)

{
  if (((*(float *)this == 0.0) && (*(float *)(this + 4) == 0.0)) && (*(float *)(this + 8) == 0.0)) {
    return *(float *)(this + 0xc) == 0.0;
  }
  return false;
}

