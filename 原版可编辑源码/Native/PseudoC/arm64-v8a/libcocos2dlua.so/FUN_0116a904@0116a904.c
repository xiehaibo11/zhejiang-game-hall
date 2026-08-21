
void FUN_0116a904(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = *(float *)(param_2 + 0xa0);
  fVar4 = *(float *)(param_2 + 0xa4);
  fVar10 = *(float *)(param_1 + 0x90);
  fVar11 = *(float *)(param_1 + 0x94);
  fVar6 = *(float *)(param_2 + 0xa8) - fVar3;
  fVar7 = *(float *)(param_2 + 0xac) - fVar4;
  fVar8 = *(float *)(param_2 + 0xb8) + *(float *)(param_1 + 0x98);
  fVar9 = (float)NEON_fminnm(((fVar10 - fVar3) * fVar6 + fVar7 * (fVar11 - fVar4)) /
                             (fVar6 * fVar6 + fVar7 * fVar7),0x3f800000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar4 = fVar4 + fVar7 * fVar9;
  fVar3 = fVar3 + fVar6 * fVar9;
  fVar7 = fVar4 - fVar11;
  fVar5 = fVar3 - fVar10;
  fVar6 = fVar7 * fVar7 + fVar5 * fVar5;
  if (fVar6 < fVar8 * fVar8) {
    fVar6 = SQRT(fVar6);
    if (fVar6 == 0.0) {
      uVar1 = *(undefined8 *)(param_2 + 0xb0);
      fVar8 = (float)uVar1;
      fVar6 = (float)((ulong)uVar1 >> 0x20);
      *(undefined8 *)(param_3 + 0x14) = uVar1;
    }
    else {
      fVar6 = 1.0 / fVar6;
      fVar8 = fVar6 * fVar5;
      fVar6 = fVar6 * fVar7;
      *(float *)(param_3 + 0x14) = fVar8;
      *(float *)(param_3 + 0x18) = fVar6;
    }
    fVar7 = (float)cpBodyGetRotation(*(undefined8 *)(param_2 + 0x10));
    if (((fVar9 != 0.0) ||
        (0.0 <= (*(float *)(param_2 + 0xbc) * fVar5 + fVar7 * *(float *)(param_2 + 0xc0)) * fVar6 +
                fVar8 * (*(float *)(param_2 + 0xbc) * fVar7 - *(float *)(param_2 + 0xc0) * fVar5)))
       && ((fVar9 != 1.0 ||
           (0.0 <= (*(float *)(param_2 + 0xc4) * fVar5 + fVar7 * *(float *)(param_2 + 200)) * fVar6
                   + fVar8 * (*(float *)(param_2 + 0xc4) * fVar7 - *(float *)(param_2 + 200) * fVar5
                             ))))) {
      fVar7 = *(float *)(param_1 + 0x98);
      fVar9 = *(float *)(param_2 + 0xb8);
      pfVar2 = (float *)(*(long *)(param_3 + 0x20) + (long)*(int *)(param_3 + 0x1c) * 0x38);
      *pfVar2 = fVar10 + fVar8 * fVar7;
      pfVar2[1] = fVar11 + fVar6 * fVar7;
      pfVar2[2] = fVar3 - fVar9 * fVar8;
      pfVar2[3] = fVar4 - fVar9 * fVar6;
      pfVar2[0xc] = 0.0;
      pfVar2[0xd] = 0.0;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    }
  }
  return;
}

