
void FUN_0013028c(uint param_1,int param_2,float *param_3,float *param_4,long param_5,long param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0 < param_2) {
    iVar7 = param_2 * param_1;
    uVar9 = (ulong)(param_1 * 2);
    iVar10 = iVar7 * 2;
    uVar3 = param_1 * 3;
    pfVar6 = param_3;
    pfVar13 = param_4;
    iVar12 = param_2;
    do {
      pfVar1 = (float *)((long)pfVar6 +
                        (-(ulong)((param_1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | uVar9 << 2)
                        );
      fVar16 = pfVar1[-1];
      fVar17 = *pfVar6;
      pfVar6 = (float *)((long)pfVar6 +
                        (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
      iVar12 = iVar12 + -1;
      fVar16 = fVar16 + fVar16;
      *pfVar13 = fVar17 + fVar16;
      fVar18 = *pfVar1;
      fVar17 = fVar17 + fVar16 * -0.5;
      fVar16 = (fVar18 + fVar18) * 0.8660254;
      pfVar13[iVar7] = fVar17 - fVar16;
      pfVar13[iVar10] = fVar17 + fVar16;
      pfVar13 = (float *)((long)pfVar13 +
                         (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
    } while (iVar12 != 0);
    if ((param_1 != 1) && (0 < param_2)) {
      param_4 = param_4 + 2;
      iVar11 = 0;
      iVar12 = 0;
      pfVar6 = param_4;
      do {
        iVar8 = (int)uVar9;
        if (2 < (int)param_1) {
          lVar5 = 0;
          lVar14 = -0xc;
          lVar15 = 2;
          do {
            lVar4 = lVar5 + (long)iVar8 * 4;
            pfVar13 = (float *)((long)param_3 + lVar14 + (long)iVar8 * 4);
            pfVar1 = (float *)((long)param_3 + lVar5 + (long)iVar11 * 4 + 8);
            fVar17 = pfVar1[-1];
            lVar15 = lVar15 + 2;
            fVar16 = *(float *)((long)param_3 + lVar4 + 4) + *pfVar13;
            ((float *)((long)pfVar6 + lVar5))[-1] = fVar17 + fVar16;
            fVar18 = *pfVar1;
            fVar17 = fVar17 - fVar16 * 0.5;
            fVar16 = *(float *)((long)param_3 + lVar4 + 8) - pfVar13[1];
            *(float *)((long)pfVar6 + lVar5) = fVar18 + fVar16;
            fVar18 = fVar18 - fVar16 * 0.5;
            pfVar1 = (float *)(param_5 + lVar5);
            pfVar2 = (float *)((long)param_4 + lVar5 + (long)iVar7 * 4);
            fVar16 = (*(float *)((long)param_3 + lVar4 + 4) - *pfVar13) * 0.8660254;
            fVar19 = (*(float *)((long)param_3 + lVar4 + 8) + pfVar13[1]) * 0.8660254;
            fVar20 = fVar17 - fVar19;
            fVar21 = fVar18 + fVar16;
            pfVar2[-1] = *pfVar1 * fVar20 - fVar21 * pfVar1[1];
            pfVar13 = (float *)(param_6 + lVar5);
            fVar17 = fVar17 + fVar19;
            fVar18 = fVar18 - fVar16;
            *pfVar2 = fVar21 * *pfVar1 + fVar20 * pfVar1[1];
            pfVar1 = (float *)((long)param_4 + lVar5 + (long)iVar10 * 4);
            lVar5 = lVar5 + 8;
            pfVar1[-1] = fVar17 * *pfVar13 - fVar18 * pfVar13[1];
            lVar14 = lVar14 + -8;
            *pfVar1 = fVar18 * *pfVar13 + fVar17 * pfVar13[1];
          } while (lVar15 < (int)param_1);
        }
        iVar12 = iVar12 + 1;
        uVar9 = (ulong)(iVar8 + uVar3);
        iVar11 = iVar11 + uVar3;
        iVar10 = iVar10 + param_1;
        iVar7 = iVar7 + param_1;
        pfVar6 = (float *)((long)pfVar6 +
                          (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      } while (iVar12 != param_2);
    }
  }
  return;
}

