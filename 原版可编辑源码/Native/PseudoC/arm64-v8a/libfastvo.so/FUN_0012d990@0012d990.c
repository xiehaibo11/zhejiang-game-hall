
void FUN_0012d990(uint param_1,int param_2,float *param_3,long param_4,long param_5)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar3 = param_1 * 2;
  if (0 < param_2) {
    iVar8 = 0;
    pfVar10 = param_3;
    iVar9 = param_2;
    do {
      iVar1 = (uVar3 - 1) + iVar8;
      iVar9 = iVar9 + -1;
      *(float *)(param_4 + (long)iVar8 * 4) = *pfVar10 + pfVar10[(int)(param_2 * param_1)];
      fVar13 = *pfVar10;
      pfVar4 = pfVar10 + (int)(param_2 * param_1);
      pfVar10 = (float *)((long)pfVar10 +
                         (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      iVar8 = iVar8 + uVar3;
      *(float *)(param_4 + (long)iVar1 * 4) = fVar13 - *pfVar4;
    } while (iVar9 != 0);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        iVar9 = 0;
        iVar8 = 0;
        pfVar10 = param_3 + 2;
        uVar11 = (ulong)uVar3;
        do {
          pfVar4 = (float *)(param_4 + 8 + (long)iVar9 * 4);
          lVar12 = 2;
          pfVar5 = (float *)(param_4 + -0xc + (long)(int)uVar11 * 4);
          pfVar6 = pfVar10;
          pfVar7 = (float *)(param_5 + 4);
          do {
            pfVar2 = (float *)((long)pfVar6 +
                              (-(ulong)(param_2 * param_1 >> 0x1f) & 0xfffffffc00000000 |
                              (ulong)(param_2 * param_1) << 2));
            fVar13 = pfVar7[-1];
            fVar14 = *pfVar7;
            fVar16 = pfVar2[-1];
            fVar15 = *pfVar2;
            lVar12 = lVar12 + 2;
            pfVar7 = pfVar7 + 2;
            fVar17 = fVar13 * fVar15 - fVar16 * fVar14;
            *pfVar4 = *pfVar6 + fVar17;
            fVar13 = fVar13 * fVar16 + fVar14 * fVar15;
            pfVar5[1] = fVar17 - *pfVar6;
            pfVar4[-1] = fVar13 + pfVar6[-1];
            pfVar2 = pfVar6 + -1;
            pfVar4 = pfVar4 + 2;
            pfVar6 = pfVar6 + 2;
            *pfVar5 = *pfVar2 - fVar13;
            pfVar5 = pfVar5 + -2;
          } while (lVar12 < (int)param_1);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + uVar3;
          uVar11 = (ulong)((int)uVar11 + uVar3);
          pfVar10 = (float *)((long)pfVar10 +
                             (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2))
          ;
        } while (iVar8 != param_2);
      }
      if ((int)param_1 % 2 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      iVar8 = param_2 + 1;
      uVar11 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      do {
        pfVar4 = param_3 + (int)(iVar8 * param_1 + -1);
        pfVar10 = (float *)(param_4 + uVar11);
        param_3 = (float *)((long)param_3 + uVar11);
        param_2 = param_2 + -1;
        *pfVar10 = -*pfVar4;
        param_4 = param_4 + (-(ulong)((param_1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                            (ulong)uVar3 << 2);
        pfVar10[-1] = param_3[-1];
      } while (param_2 != 0);
    }
  }
  return;
}

