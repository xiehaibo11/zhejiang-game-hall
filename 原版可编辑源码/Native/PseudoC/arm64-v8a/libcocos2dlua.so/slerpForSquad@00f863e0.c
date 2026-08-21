
/* cocos2d::Quaternion::slerpForSquad(cocos2d::Quaternion const&, cocos2d::Quaternion const&, float,
   cocos2d::Quaternion*) */

void cocos2d::Quaternion::slerpForSquad
               (Quaternion *param_1,Quaternion *param_2,float param_3,Quaternion *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar8 = *(undefined8 *)param_1;
  fVar7 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0xc);
  fVar10 = *(float *)(param_2 + 8);
  fVar11 = *(float *)(param_2 + 0xc);
  fVar3 = (float)*(undefined8 *)param_2;
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar5 = (float)uVar8 * fVar3 + fVar9 * fVar4 + fVar7 * fVar10 + fVar6 * fVar11;
  if (ABS(fVar5) < 1.0) {
    fVar1 = acosf(fVar5);
    fVar5 = SQRT(1.0 - fVar5 * fVar5);
    if (1e-05 < ABS(fVar5)) {
      fVar2 = sinf((1.0 - param_3) * fVar1);
      fVar2 = fVar2 / fVar5;
      fVar1 = sinf(fVar1 * param_3);
      fVar1 = fVar1 / fVar5;
      fVar6 = fVar6 * fVar2 + fVar11 * fVar1;
      *(ulong *)param_4 =
           CONCAT44(fVar9 * fVar2 + fVar4 * fVar1,(float)uVar8 * fVar2 + fVar3 * fVar1);
      *(float *)(param_4 + 8) = fVar7 * fVar2 + fVar10 * fVar1;
      goto LAB_00f864dc;
    }
  }
  *(undefined8 *)param_4 = uVar8;
  *(float *)(param_4 + 8) = fVar7;
LAB_00f864dc:
  *(float *)(param_4 + 0xc) = fVar6;
  return;
}

