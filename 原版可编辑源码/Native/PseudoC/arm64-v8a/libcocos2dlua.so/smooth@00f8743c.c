
/* cocos2d::Vec3::smooth(cocos2d::Vec3 const&, float, float) */

void __thiscall cocos2d::Vec3::smooth(Vec3 *this,Vec3 *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (0.0 < param_2) {
    fVar2 = *(float *)(param_1 + 8);
    fVar1 = param_2 / (param_2 + param_3);
    fVar3 = (float)*(undefined8 *)this;
    fVar4 = (float)((ulong)*(undefined8 *)this >> 0x20);
    *(ulong *)this =
         CONCAT44(fVar4 + ((float)((ulong)*(undefined8 *)param_1 >> 0x20) - fVar4) * fVar1,
                  fVar3 + ((float)*(undefined8 *)param_1 - fVar3) * fVar1);
    *(float *)(this + 8) = *(float *)(this + 8) + fVar1 * (fVar2 - *(float *)(this + 8));
  }
  return;
}

