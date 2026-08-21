
void FUN_01170ba8(float param_1,float param_2,long param_3,long *param_4)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
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
  
  uVar3 = *(uint *)(param_3 + 0x8c);
  uVar5 = (ulong)uVar3;
  fVar7 = *(float *)(param_3 + 0x88);
  if ((int)uVar3 < 1) {
    fVar8 = INFINITY;
    uVar4 = 0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar16 = -INFINITY;
  }
  else {
    pfVar2 = (float *)(*(long *)(param_3 + 0x90) + (long)(int)(uVar3 - 1) * 0x10);
    fVar8 = INFINITY;
    bVar1 = false;
    uVar4 = 0;
    pfVar6 = (float *)(*(long *)(param_3 + 0x90) + 8);
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar16 = pfVar2[1];
    fVar14 = *pfVar2;
    do {
      fVar11 = pfVar6[-2];
      fVar12 = pfVar6[-1];
      if (bVar1) {
        bVar1 = true;
      }
      else {
        bVar1 = 0.0 < *pfVar6 * (param_1 - fVar11) + (param_2 - fVar12) * pfVar6[1];
      }
      fVar14 = fVar14 - fVar11;
      fVar16 = fVar16 - fVar12;
      fVar13 = (float)NEON_fminnm(((param_1 - fVar11) * fVar14 + fVar16 * (param_2 - fVar12)) /
                                  (fVar14 * fVar14 + fVar16 * fVar16),0x3f800000);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar14 = fVar11 + fVar14 * fVar13;
      fVar16 = fVar12 + fVar16 * fVar13;
      fVar15 = param_2 - fVar16;
      fVar13 = param_1 - fVar14;
      fVar13 = SQRT(fVar15 * fVar15 + fVar13 * fVar13);
      if (fVar13 < fVar8) {
        uVar4 = *(undefined8 *)pfVar6;
        fVar8 = fVar13;
        fVar9 = fVar16;
        fVar10 = fVar14;
      }
      uVar5 = uVar5 - 1;
      pfVar6 = pfVar6 + 4;
      fVar16 = fVar12;
      fVar14 = fVar11;
    } while (uVar5 != 0);
    fVar16 = fVar8;
    if (!bVar1) {
      fVar16 = -fVar8;
    }
  }
  fVar11 = (1.0 / fVar16) * (param_1 - fVar10);
  fVar14 = (1.0 / fVar16) * (param_2 - fVar9);
  *(float *)(param_4 + 1) = fVar10 + fVar7 * fVar11;
  *(float *)((long)param_4 + 0xc) = fVar9 + fVar7 * fVar14;
  *param_4 = param_3;
  *(float *)(param_4 + 2) = fVar16 - fVar7;
  if (1e-05 < fVar8) {
    *(float *)((long)param_4 + 0x14) = fVar11;
    *(float *)(param_4 + 3) = fVar14;
    return;
  }
  *(undefined8 *)((long)param_4 + 0x14) = uVar4;
  return;
}

