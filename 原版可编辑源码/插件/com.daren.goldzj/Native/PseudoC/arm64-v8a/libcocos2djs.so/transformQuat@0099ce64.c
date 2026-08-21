
/* cocos2d::Vec3::transformQuat(cocos2d::Quaternion const&) */

void __thiscall cocos2d::Vec3::transformQuat(Vec3 *this,Quaternion *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  fVar6 = *(float *)(this + 8);
  fVar8 = *(float *)param_1;
                    /* try { // try from 0099ce94 to 00a9ceab has its CatchHandler @ 0099d020 */
                    /* try { // try from 0099ceb4 to 00a9cebf has its CatchHandler @ 0099d01c */
  fVar9 = (fVar3 * fVar4 + fVar1 * fVar6) - fVar2 * fVar7;
                    /* try { // try from 0099cec0 to 00a9cecb has its CatchHandler @ 0099d018 */
  fVar10 = (fVar2 * fVar4 + fVar3 * fVar7) - fVar8 * fVar6;
  fVar5 = (fVar3 * fVar6 + fVar8 * fVar7) - fVar1 * fVar4;
  fVar4 = (fVar4 * -fVar8 - fVar1 * fVar7) - fVar2 * fVar6;
                    /* try { // try from 0099cecc to 00a9cf9f has its CatchHandler @ 0099d030 */
  *(float *)this = ((fVar3 * fVar9 - fVar4 * fVar8) - fVar10 * fVar2) + fVar5 * fVar1;
  *(float *)(this + 4) = ((fVar3 * fVar10 - fVar4 * fVar1) - fVar5 * fVar8) + fVar9 * fVar2;
  *(float *)(this + 8) = ((fVar3 * fVar5 - fVar4 * fVar2) - fVar9 * fVar1) + fVar10 * fVar8;
  return;
}

