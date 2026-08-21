
/* cocos2d::Vec3::transformMat3(cocos2d::Vec3 const&, cocos2d::Mat3 const&) */

void __thiscall cocos2d::Vec3::transformMat3(Vec3 *this,Vec3 *param_1,Mat3 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  *(float *)this =
       fVar1 * *(float *)param_2 + fVar2 * *(float *)(param_2 + 0xc) +
       fVar3 * *(float *)(param_2 + 0x18);
                    /* try { // try from 0099cd58 to 00a9ce3b has its CatchHandler @ 0099cbf4 */
  *(float *)(this + 4) =
       fVar1 * *(float *)(param_2 + 4) + fVar2 * *(float *)(param_2 + 0x10) +
       fVar3 * *(float *)(param_2 + 0x1c);
  *(float *)(this + 8) =
       fVar1 * *(float *)(param_2 + 8) + fVar2 * *(float *)(param_2 + 0x14) +
       fVar3 * *(float *)(param_2 + 0x20);
  return;
}

