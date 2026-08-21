
/* cocos2d::MathUtilNeon64::transformVec4(float const*, float const*, float*) */

void cocos2d::MathUtilNeon64::transformVec4(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar12 = param_2[3];
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar3 = *(undefined8 *)(param_1 + 4);
  uVar4 = *(undefined8 *)(param_1 + 6);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 10);
  uVar7 = *(undefined8 *)(param_1 + 0xc);
  uVar8 = *(undefined8 *)(param_1 + 0xe);
  *param_3 = (float)uVar1 * fVar9 + (float)uVar3 * fVar10 + (float)uVar5 * fVar11 +
             (float)uVar7 * fVar12;
  param_3[1] = (float)((ulong)uVar1 >> 0x20) * fVar9 + (float)((ulong)uVar3 >> 0x20) * fVar10 +
               (float)((ulong)uVar5 >> 0x20) * fVar11 + (float)((ulong)uVar7 >> 0x20) * fVar12;
  param_3[2] = (float)uVar2 * fVar9 + (float)uVar4 * fVar10 + (float)uVar6 * fVar11 +
               (float)uVar8 * fVar12;
  param_3[3] = (float)((ulong)uVar2 >> 0x20) * fVar9 + (float)((ulong)uVar4 >> 0x20) * fVar10 +
               (float)((ulong)uVar6 >> 0x20) * fVar11 + (float)((ulong)uVar8 >> 0x20) * fVar12;
  return;
}

