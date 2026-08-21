
/* cocos2d::Mat4::createRotation(cocos2d::Quaternion const&, cocos2d::Mat4*) */

void cocos2d::Mat4::createRotation(Quaternion *param_1,Mat4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar7 = fVar2 + fVar2;
  fVar8 = fVar3 + fVar3;
  fVar6 = (fVar1 + fVar1) * fVar4;
  fVar5 = 1.0 - fVar1 * (fVar1 + fVar1);
  *(float *)(param_2 + 0x20) = fVar1 * fVar8 + fVar7 * fVar4;
  *(float *)(param_2 + 0x24) = fVar2 * fVar8 - fVar6;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(float *)(param_2 + 4) = fVar1 * fVar7 + fVar4 * fVar8;
  *(float *)(param_2 + 8) = fVar1 * fVar8 - fVar7 * fVar4;
  *(float *)(param_2 + 0x14) = fVar5 - fVar3 * fVar8;
  *(float *)(param_2 + 0x18) = fVar2 * fVar8 + fVar6;
  *(float *)param_2 = (1.0 - fVar2 * fVar7) - fVar3 * fVar8;
  *(float *)(param_2 + 0x10) = fVar1 * fVar7 - fVar4 * fVar8;
  *(float *)(param_2 + 0x28) = fVar5 - fVar2 * fVar7;
  *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
  return;
}

