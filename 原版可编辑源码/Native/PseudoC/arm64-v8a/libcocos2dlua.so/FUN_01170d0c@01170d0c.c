
void FUN_01170d0c(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,long *param_7)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
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
  
  uVar3 = *(uint *)(param_6 + 0x8c);
  uVar5 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    lVar6 = *(long *)(param_6 + 0x90);
    uVar8 = 0;
    fVar10 = *(float *)(param_6 + 0x88) + param_5;
    pfVar7 = (float *)(lVar6 + 8);
    do {
      fVar9 = *pfVar7;
      fVar11 = pfVar7[1];
      fVar12 = fVar9 * param_1 + param_2 * fVar11;
      fVar13 = (fVar12 - fVar10) - (pfVar7[-2] * fVar9 + fVar11 * pfVar7[-1]);
      if (((0.0 <= fVar13) &&
          (fVar13 = fVar13 / (fVar12 - (fVar9 * param_3 + param_4 * fVar11)), 0.0 <= fVar13)) &&
         (fVar13 <= 1.0)) {
        fVar14 = fVar13 * param_3 + param_1 * (1.0 - fVar13);
        fVar12 = fVar13 * param_4 + param_2 * (1.0 - fVar13);
        fVar15 = fVar12 * fVar9 - fVar14 * fVar11;
        if (fVar15 <= pfVar7[-1] * fVar9 - pfVar7[-2] * fVar11) {
          iVar2 = (uVar3 - 1) + (int)uVar8;
          iVar4 = 0;
          if (uVar3 != 0) {
            iVar4 = iVar2 / (int)uVar3;
          }
          pfVar1 = (float *)(lVar6 + (long)(int)(iVar2 - iVar4 * uVar3) * 0x10);
          if (pfVar1[1] * fVar9 - *pfVar1 * fVar11 <= fVar15) {
            *param_7 = param_6;
            *(float *)(param_7 + 2) = fVar9;
            *(float *)((long)param_7 + 0x14) = fVar11;
            *(float *)(param_7 + 1) = fVar14 - param_5 * fVar9;
            *(float *)((long)param_7 + 0xc) = fVar12 - param_5 * fVar11;
            *(float *)(param_7 + 3) = fVar13;
          }
        }
      }
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 4;
    } while (uVar5 != uVar8);
    if ((0.0 < fVar10) && (0 < (int)uVar3)) {
      pfVar7 = (float *)(lVar6 + 4);
      do {
        fVar13 = param_1 - pfVar7[-1];
        fVar15 = param_3 - pfVar7[-1];
        fVar12 = param_2 - *pfVar7;
        fVar16 = param_4 - *pfVar7;
        fVar11 = fVar13 * fVar13 + fVar12 * fVar12;
        fVar9 = fVar15 * fVar13 + fVar12 * fVar16;
        fVar17 = fVar9 - fVar11;
        fVar14 = fVar15 * fVar15 + fVar16 * fVar16 + fVar11 + fVar9 * -2.0;
        fVar19 = fVar14 * (fVar10 * fVar10 - fVar11) + fVar17 * fVar17;
        fVar9 = param_3;
        fVar11 = param_4;
        if (0.0 <= fVar19) {
          fVar14 = (-fVar17 - SQRT(fVar19)) / fVar14;
          fVar17 = 0.0;
          if (fVar14 < 0.0) goto LAB_01170e7c;
          fVar18 = 0.0;
          lVar6 = 0;
          fVar19 = 1.0;
          if (fVar14 <= 1.0) {
            fVar11 = 1.0 - fVar14;
            fVar17 = fVar14 * fVar15 + fVar13 * fVar11;
            fVar9 = fVar14 * fVar16 + fVar12 * fVar11;
            fVar18 = 1.0 / (SQRT(fVar9 * fVar9 + fVar17 * fVar17) + 1.1754944e-38);
            fVar17 = fVar18 * fVar17;
            fVar18 = fVar18 * fVar9;
            fVar9 = (fVar14 * param_3 + param_1 * fVar11) - param_5 * fVar17;
            fVar11 = (fVar14 * param_4 + param_2 * fVar11) - param_5 * fVar18;
            lVar6 = param_6;
            fVar19 = fVar14;
          }
        }
        else {
LAB_01170e7c:
          fVar17 = 0.0;
          fVar18 = 0.0;
          lVar6 = 0;
          fVar19 = 1.0;
        }
        if (fVar19 < *(float *)(param_7 + 3)) {
          *param_7 = lVar6;
          *(float *)(param_7 + 1) = fVar9;
          *(float *)((long)param_7 + 0xc) = fVar11;
          *(float *)(param_7 + 2) = fVar17;
          *(float *)((long)param_7 + 0x14) = fVar18;
          *(float *)(param_7 + 3) = fVar19;
        }
        uVar5 = uVar5 - 1;
        pfVar7 = pfVar7 + 4;
      } while (uVar5 != 0);
    }
  }
  return;
}

