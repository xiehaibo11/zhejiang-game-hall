
/* cocos2d::Vec4::dot(cocos2d::Vec4 const&) const */

float __thiscall cocos2d::Vec4::dot(Vec4 *this,Vec4 *param_1)

{
  return *(float *)this * *(float *)param_1 + *(float *)(this + 4) * *(float *)(param_1 + 4) +
         (float)*(undefined8 *)(this + 8) * (float)*(undefined8 *)(param_1 + 8) +
         (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) *
         (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
}

