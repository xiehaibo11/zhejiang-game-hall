
/* cocos2d::Vec4::lengthSquared() const */

float __thiscall cocos2d::Vec4::lengthSquared(Vec4 *this)

{
  return *(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
         *(float *)(this + 8) * *(float *)(this + 8) +
         *(float *)(this + 0xc) * *(float *)(this + 0xc);
}

