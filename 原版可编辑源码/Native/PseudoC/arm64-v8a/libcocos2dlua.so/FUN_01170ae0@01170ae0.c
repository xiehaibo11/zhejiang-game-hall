
void FUN_01170ae0(long param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
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
  
  uVar2 = *(uint *)(param_1 + 0x8c);
  if ((int)uVar2 < 1) {
    fVar5 = INFINITY;
    fVar7 = -INFINITY;
    fVar8 = fVar7;
    fVar6 = fVar5;
  }
  else {
    fVar7 = -INFINITY;
    fVar5 = INFINITY;
    uVar3 = (ulong)uVar2;
    pfVar4 = (float *)(*(long *)(param_1 + 0x90) + 0xc);
    fVar8 = fVar7;
    fVar6 = fVar5;
    do {
      pfVar1 = pfVar4 + (long)(int)uVar2 * 4;
      fVar9 = *param_2;
      fVar10 = param_2[1];
      fVar14 = pfVar1[-1];
      uVar3 = uVar3 - 1;
      fVar13 = param_2[2];
      fVar16 = param_2[3];
      fVar15 = *pfVar1;
      fVar12 = param_2[4] + fVar9 * pfVar1[-3] + fVar13 * pfVar1[-2];
      fVar11 = param_2[5] + fVar10 * pfVar1[-3] + fVar16 * pfVar1[-2];
      pfVar4[-3] = fVar12;
      pfVar4[-2] = fVar11;
      pfVar4[-1] = fVar14 * fVar9 + fVar13 * fVar15;
      *pfVar4 = fVar14 * fVar10 + fVar16 * fVar15;
      fVar5 = (float)NEON_fminnm(fVar5,fVar12);
      if (fVar7 <= fVar12) {
        fVar7 = fVar12;
      }
      fVar6 = (float)NEON_fminnm(fVar6,fVar11);
      if (fVar8 <= fVar11) {
        fVar8 = fVar11;
      }
      pfVar4 = pfVar4 + 4;
    } while (uVar3 != 0);
  }
  fVar9 = *(float *)(param_1 + 0x88);
  *(float *)(param_1 + 0x2c) = fVar5 - fVar9;
  *(float *)(param_1 + 0x30) = fVar6 - fVar9;
  *(float *)(param_1 + 0x34) = fVar9 + fVar7;
  *(float *)(param_1 + 0x38) = fVar9 + fVar8;
  return;
}

