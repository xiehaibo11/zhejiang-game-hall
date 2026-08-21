
/* cocos2d::Vec4::length() const */

float __thiscall cocos2d::Vec4::length(Vec4 *this)

{
  return SQRT(*(float *)this * *(float *)this + *(float *)(this + 4) * *(float *)(this + 4) +
              *(float *)(this + 8) * *(float *)(this + 8) +
              *(float *)(this + 0xc) * *(float *)(this + 0xc));
}

