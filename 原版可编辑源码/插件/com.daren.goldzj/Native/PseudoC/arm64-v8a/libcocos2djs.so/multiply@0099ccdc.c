
/* cocos2d::Vec3::multiply(cocos2d::Vec3 const&) */

void __thiscall cocos2d::Vec3::multiply(Vec3 *this,Vec3 *param_1)

{
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) *
                (float)((ulong)*(undefined8 *)this >> 0x20),
                (float)*(undefined8 *)param_1 * (float)*(undefined8 *)this);
  *(float *)(this + 8) = *(float *)(param_1 + 8) * *(float *)(this + 8);
  return;
}

