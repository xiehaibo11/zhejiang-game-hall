
/* cocos2d::Vec3::Vec3(cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::Vec3::Vec3(Vec3 *this,Vec3 *param_1,Vec3 *param_2)

{
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
                (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                (float)*(undefined8 *)param_2 - (float)*(undefined8 *)param_1);
  *(float *)(this + 8) = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  return;
}

