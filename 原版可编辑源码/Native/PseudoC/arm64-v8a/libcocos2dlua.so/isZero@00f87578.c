
/* cocos2d::Vec4::isZero() const */

bool __thiscall cocos2d::Vec4::isZero(Vec4 *this)

{
  if (((*(float *)this == 0.0) && (*(float *)(this + 4) == 0.0)) && (*(float *)(this + 8) == 0.0)) {
    return *(float *)(this + 0xc) == 0.0;
  }
  return false;
}

