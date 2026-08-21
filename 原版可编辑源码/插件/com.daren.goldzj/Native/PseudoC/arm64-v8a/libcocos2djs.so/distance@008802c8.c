
/* cocos2d::Vec4::distance(cocos2d::Vec4 const&) const */

float __thiscall cocos2d::Vec4::distance(Vec4 *this,Vec4 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)(param_1 + 8) - (float)*(undefined8 *)(this + 8);
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  return SQRT((*(float *)param_1 - *(float *)this) * (*(float *)param_1 - *(float *)this) +
              (*(float *)(param_1 + 4) - *(float *)(this + 4)) *
              (*(float *)(param_1 + 4) - *(float *)(this + 4)) + fVar1 * fVar1 + fVar2 * fVar2);
}

