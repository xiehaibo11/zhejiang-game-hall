
/* cocos2d::Vec4::isOne() const */

bool __thiscall cocos2d::Vec4::isOne(Vec4 *this)

{
  if (((*(float *)this == 1.0) && (*(float *)(this + 4) == 1.0)) && (*(float *)(this + 8) == 1.0)) {
    return *(float *)(this + 0xc) == 1.0;
  }
  return false;
}

