
void FUN_0116b738(float *param_1,float *param_2,long param_3,long param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if (*(float *)(param_3 + 0x18) <= param_2[8] + param_1[8]) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_4 + 0x14) = uVar2;
    fVar9 = *param_1;
    fVar11 = param_1[1];
    fVar10 = param_1[4];
    fVar15 = param_1[5];
    fVar16 = *param_2;
    fVar18 = param_2[1];
    fVar17 = param_2[4];
    fVar19 = param_2[5];
    fVar1 = (float)uVar2;
    fVar3 = (float)((ulong)uVar2 >> 0x20);
    fVar20 = fVar9 * fVar3 - fVar11 * fVar1;
    fVar7 = fVar10 * fVar3 - fVar15 * fVar1;
    fVar8 = fVar16 * fVar3 - fVar18 * fVar1;
    fVar12 = fVar17 * fVar3 - fVar19 * fVar1;
    fVar22 = param_1[8];
    fVar21 = param_2[8];
    fVar13 = 1.0 / (fVar7 - fVar20);
    fVar14 = 1.0 / (fVar12 - fVar8);
    fVar25 = (float)NEON_fminnm((fVar12 - fVar20) * fVar13,0x3f800000);
    fVar12 = (float)NEON_fminnm(fVar14 * (fVar20 - fVar8),0x3f800000);
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar23 = fVar22 * fVar1 + fVar10 * fVar25 + fVar9 * (1.0 - fVar25);
    fVar24 = fVar22 * fVar3 + fVar15 * fVar25 + fVar11 * (1.0 - fVar25);
    fVar25 = (fVar12 * fVar19 - fVar3 * fVar21) + fVar18 * (1.0 - fVar12);
    fVar12 = (fVar12 * fVar17 - fVar1 * fVar21) + fVar16 * (1.0 - fVar12);
    if ((fVar25 - fVar24) * fVar3 + fVar1 * (fVar12 - fVar23) <= 0.0) {
      lVar5 = *(long *)(param_1 + 2);
      lVar6 = *(long *)(param_2 + 6);
      pfVar4 = (float *)(*(long *)(param_4 + 0x20) + (long)*(int *)(param_4 + 0x1c) * 0x38);
      *pfVar4 = fVar23;
      pfVar4[1] = fVar24;
      pfVar4[2] = fVar12;
      pfVar4[3] = fVar25;
      *(long *)(pfVar4 + 0xc) = lVar6 * 0xc75f71e1 ^ lVar5 * 0xc75f71e1;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      fVar22 = param_1[8];
      fVar9 = *param_1;
      fVar11 = param_1[1];
      fVar10 = param_1[4];
      fVar15 = param_1[5];
      fVar21 = param_2[8];
      fVar16 = *param_2;
      fVar18 = param_2[1];
      fVar17 = param_2[4];
      fVar19 = param_2[5];
    }
    fVar12 = (float)NEON_fminnm((fVar8 - fVar20) * fVar13,0x3f800000);
    fVar7 = (float)NEON_fminnm(fVar14 * (fVar7 - fVar8),0x3f800000);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar8 = fVar22 * fVar1 + (1.0 - fVar12) * fVar9 + fVar12 * fVar10;
    fVar10 = (fVar16 * (1.0 - fVar7) - fVar1 * fVar21) + fVar7 * fVar17;
    fVar9 = fVar22 * fVar3 + (1.0 - fVar12) * fVar11 + fVar12 * fVar15;
    fVar7 = (fVar18 * (1.0 - fVar7) - fVar3 * fVar21) + fVar7 * fVar19;
    if ((fVar10 - fVar8) * fVar1 + fVar3 * (fVar7 - fVar9) <= 0.0) {
      lVar5 = *(long *)(param_1 + 6);
      lVar6 = *(long *)(param_2 + 2);
      pfVar4 = (float *)(*(long *)(param_4 + 0x20) + (long)*(int *)(param_4 + 0x1c) * 0x38);
      *pfVar4 = fVar8;
      pfVar4[1] = fVar9;
      pfVar4[2] = fVar10;
      pfVar4[3] = fVar7;
      *(long *)(pfVar4 + 0xc) = lVar6 * 0xc75f71e1 ^ lVar5 * 0xc75f71e1;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    }
  }
  return;
}

