
void FUN_001300c4(uint param_1,int param_2,long param_3,float *param_4,long param_5)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar5 = param_2 * param_1;
  uVar4 = param_1 * 2;
  if (0 < param_2) {
    uVar8 = 0;
    pfVar6 = param_4;
    iVar10 = param_2;
    do {
      uVar2 = (uVar4 - 1) + (int)uVar8;
      uVar11 = -(uVar8 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2;
      uVar12 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      iVar10 = iVar10 + -1;
      uVar8 = (ulong)((int)uVar8 + uVar4);
      *pfVar6 = *(float *)(param_3 + uVar11) + *(float *)(param_3 + uVar12);
      pfVar6[iVar5] = *(float *)(param_3 + uVar11) - *(float *)(param_3 + uVar12);
      pfVar6 = (float *)((long)pfVar6 +
                        (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
    } while (iVar10 != 0);
  }
  uVar2 = param_1 - 1;
  if (uVar2 != 0 && 0 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        iVar9 = 0;
        iVar10 = 0;
        pfVar6 = param_4 + 2;
        uVar8 = (ulong)uVar4;
        iVar3 = iVar5;
        do {
          pfVar13 = (float *)(param_3 + -0xc + (long)(int)uVar8 * 4);
          lVar17 = 2;
          pfVar7 = (float *)(param_3 + 8 + (long)iVar9 * 4);
          pfVar14 = param_4 + 2 + iVar3;
          pfVar15 = (float *)(param_5 + 4);
          pfVar16 = pfVar6;
          do {
            lVar17 = lVar17 + 2;
            pfVar16[-1] = pfVar7[-1] + *pfVar13;
            fVar21 = pfVar7[-1];
            fVar20 = *pfVar13;
            *pfVar16 = *pfVar7 - pfVar13[1];
            fVar18 = *pfVar7;
            fVar19 = pfVar13[1];
            pfVar13 = pfVar13 + -2;
            pfVar14[-1] = (fVar21 - fVar20) * pfVar15[-1] - (fVar18 + fVar19) * *pfVar15;
            pfVar1 = pfVar15 + -1;
            fVar22 = *pfVar15;
            pfVar15 = pfVar15 + 2;
            *pfVar14 = (fVar18 + fVar19) * *pfVar1 + (fVar21 - fVar20) * fVar22;
            pfVar7 = pfVar7 + 2;
            pfVar14 = pfVar14 + 2;
            pfVar16 = pfVar16 + 2;
          } while (lVar17 < (int)param_1);
          iVar10 = iVar10 + 1;
          iVar3 = iVar3 + param_1;
          uVar8 = (ulong)((int)uVar8 + uVar4);
          iVar9 = iVar9 + uVar4;
          pfVar6 = (float *)((long)pfVar6 +
                            (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
        } while (iVar10 != param_2);
      }
      if ((int)param_1 % 2 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      pfVar6 = (float *)(param_3 + uVar8 + 4);
      do {
        param_2 = param_2 + -1;
        *(float *)((long)param_4 + uVar8) = pfVar6[-1] + pfVar6[-1];
        fVar18 = *pfVar6;
        pfVar6 = (float *)((long)pfVar6 +
                          (-(ulong)((param_1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                          (ulong)uVar4 << 2));
        *(float *)((long)param_4 + uVar8 + (long)iVar5 * 4) = -(fVar18 + fVar18);
        uVar8 = uVar8 + (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2);
      } while (param_2 != 0);
    }
  }
  return;
}

