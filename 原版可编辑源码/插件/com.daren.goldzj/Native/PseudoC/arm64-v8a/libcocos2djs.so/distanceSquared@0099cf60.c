
/* cocos2d::Vec3::distanceSquared(cocos2d::Vec3 const&) const */

float __thiscall cocos2d::Vec3::distanceSquared(Vec3 *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(undefined8 *)(param_1 + 4) - (float)*(undefined8 *)(this + 4);
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) -
          (float)((ulong)*(undefined8 *)(this + 4) >> 0x20);
  return (*(float *)param_1 - *(float *)this) * (*(float *)param_1 - *(float *)this) + fVar1 * fVar1
         + fVar2 * fVar2;
}

