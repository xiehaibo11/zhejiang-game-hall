
/* cocos2d::Mat4::createRotation(cocos2d::Vec3 const&, float, cocos2d::Mat4*) */

void cocos2d::Mat4::createRotation(Vec3 *param_1,float param_2,Mat4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  
  fVar3 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 8);
  fVar1 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  if ((fVar1 != 1.0) && (fVar1 = SQRT(fVar1), 1e-06 < fVar1)) {
    fVar1 = 1.0 / fVar1;
    fVar3 = fVar3 * fVar1;
    fVar4 = fVar4 * fVar1;
    fVar5 = fVar5 * fVar1;
  }
  sincosf(param_2,&fStack_14,&local_18);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 0;
  fVar1 = 1.0 - local_18;
  fVar2 = fVar1 * fVar3;
  fVar6 = fVar5 * fVar1 * fVar4;
  *(undefined8 *)(param_3 + 0x34) = 0;
  *(undefined8 *)(param_3 + 0x2c) = 0;
  *(float *)param_3 = local_18 + fVar3 * fVar2;
  *(float *)(param_3 + 4) = fStack_14 * fVar5 + fVar4 * fVar2;
  *(float *)(param_3 + 8) = fVar5 * fVar2 - fStack_14 * fVar4;
  *(float *)(param_3 + 0x10) = fVar4 * fVar2 - fStack_14 * fVar5;
  *(float *)(param_3 + 0x14) = local_18 + fVar4 * fVar1 * fVar4;
  *(float *)(param_3 + 0x18) = fVar6 + fStack_14 * fVar3;
  *(float *)(param_3 + 0x20) = fStack_14 * fVar4 + fVar5 * fVar2;
  *(float *)(param_3 + 0x24) = fVar6 - fStack_14 * fVar3;
  *(float *)(param_3 + 0x28) = local_18 + fVar5 * fVar1 * fVar5;
  *(undefined4 *)(param_3 + 0x3c) = 0x3f800000;
  return;
}

