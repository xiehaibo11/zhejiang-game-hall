
void FUN_0012d674(uint param_1,int param_2,float *param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  long lVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  iVar3 = param_2 * param_1;
  if (0 < param_2) {
    iVar6 = 0;
    pfVar4 = param_3;
    iVar7 = param_2;
    do {
      fVar17 = pfVar4[iVar3];
      fVar18 = pfVar4[iVar3 * 3];
      fVar19 = *pfVar4;
      fVar21 = pfVar4[iVar3 * 2];
      iVar7 = iVar7 + -1;
      *(float *)(param_4 + (long)iVar6 * 4) = fVar17 + fVar18 + fVar19 + fVar21;
      *(float *)(param_4 + (long)(int)(param_1 * 4 + -1 + iVar6) * 4) =
           (fVar19 + fVar21) - (fVar17 + fVar18);
      *(float *)(param_4 + (long)(int)(param_1 * 2 + -1 + iVar6) * 4) = *pfVar4 - pfVar4[iVar3 * 2];
      pfVar11 = pfVar4 + iVar3 * 3;
      pfVar5 = pfVar4 + iVar3;
      iVar8 = param_1 * 2 + iVar6;
      pfVar4 = (float *)((long)pfVar4 +
                        (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
      iVar6 = iVar6 + param_1 * 4;
      *(float *)(param_4 + (long)iVar8 * 4) = *pfVar11 - *pfVar5;
    } while (iVar7 != 0);
  }
  if (1 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        iVar8 = param_1 << 1;
        iVar7 = 0;
        iVar6 = 0;
        uVar9 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
        pfVar4 = param_3 + (long)iVar3 * 2;
        lVar10 = (long)iVar8;
        pfVar5 = param_3 + (long)iVar3 * 3;
        pfVar11 = param_3 + iVar3;
        pfVar12 = param_3;
        do {
          lVar13 = 0;
          lVar16 = 2;
          pfVar14 = (float *)(param_4 + -0xc + (long)iVar8 * 4);
          pfVar15 = (float *)(param_4 + -0xc + (lVar10 + iVar8) * 4);
          do {
            fVar17 = *(float *)(param_5 + lVar13);
            fVar19 = ((float *)(param_5 + lVar13))[1];
            fVar20 = *(float *)((long)pfVar11 + lVar13 + 4);
            fVar22 = *(float *)((long)pfVar11 + lVar13 + 8);
            fVar23 = *(float *)(param_6 + lVar13);
            fVar24 = ((float *)(param_6 + lVar13))[1];
            fVar25 = *(float *)((long)pfVar4 + lVar13 + 4);
            fVar26 = *(float *)((long)pfVar4 + lVar13 + 8);
            fVar27 = *(float *)(param_7 + lVar13);
            fVar28 = ((float *)(param_7 + lVar13))[1];
            fVar29 = *(float *)((long)pfVar5 + lVar13 + 4);
            fVar30 = *(float *)((long)pfVar5 + lVar13 + 8);
            fVar18 = fVar17 * fVar22 - fVar20 * fVar19;
            fVar21 = fVar23 * fVar25 + fVar24 * fVar26;
            fVar24 = fVar23 * fVar26 - fVar25 * fVar24;
            fVar23 = *(float *)((long)pfVar12 + lVar13 + 4);
            fVar25 = *(float *)((long)pfVar12 + lVar13 + 8);
            fVar17 = fVar17 * fVar20 + fVar19 * fVar22;
            fVar19 = fVar27 * fVar29 + fVar28 * fVar30;
            fVar22 = fVar27 * fVar30 - fVar29 * fVar28;
            fVar26 = fVar17 + fVar19;
            fVar19 = fVar19 - fVar17;
            fVar20 = fVar18 + fVar22;
            fVar18 = fVar18 - fVar22;
            fVar22 = fVar24 + fVar25;
            fVar25 = fVar25 - fVar24;
            fVar17 = fVar21 + fVar23;
            fVar23 = fVar23 - fVar21;
            lVar1 = param_4 + (long)iVar7 * 4 + lVar13;
            pfVar2 = (float *)(param_4 + 8 + (lVar10 + iVar7) * 4 + lVar13);
            lVar16 = lVar16 + 2;
            *(float *)(lVar1 + 4) = fVar26 + fVar17;
            *(float *)(lVar1 + 8) = fVar22 + fVar20;
            *pfVar14 = fVar23 - fVar18;
            pfVar14[1] = fVar19 - fVar25;
            pfVar2[-1] = fVar18 + fVar23;
            *pfVar2 = fVar25 + fVar19;
            *pfVar15 = fVar17 - fVar26;
            pfVar15[1] = fVar20 - fVar22;
            lVar13 = lVar13 + 8;
            pfVar14 = pfVar14 + -2;
            pfVar15 = pfVar15 + -2;
          } while (lVar16 < (int)param_1);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + param_1 * 4;
          iVar8 = iVar8 + param_1 * 4;
          pfVar5 = (float *)((long)pfVar5 + uVar9);
          pfVar4 = (float *)((long)pfVar4 + uVar9);
          pfVar11 = (float *)((long)pfVar11 + uVar9);
          pfVar12 = (float *)((long)pfVar12 + uVar9);
        } while (iVar6 != param_2);
      }
      if ((param_1 & 1) != 0) {
        return;
      }
    }
    if (0 < param_2) {
      iVar6 = param_2 * 3;
      lVar16 = (long)(int)(param_1 + iVar3 + -1);
      lVar10 = lVar16 + iVar3;
      uVar9 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      do {
        fVar17 = param_3[lVar16];
        fVar18 = param_3[(int)((iVar6 + 1) * param_1 + -1)];
        pfVar4 = (float *)((long)param_3 + uVar9);
        pfVar11 = (float *)(param_4 + uVar9);
        fVar19 = (fVar17 - fVar18) * 0.70710677;
        pfVar11[-1] = pfVar4[-1] + fVar19;
        pfVar5 = (float *)(param_4 + ((long)(int)param_1 + (long)(int)(param_1 << 1)) * 4);
        fVar17 = (fVar17 + fVar18) * -0.70710677;
        pfVar5[-1] = pfVar4[-1] - fVar19;
        param_2 = param_2 + -1;
        param_4 = param_4 + (-(ulong)((param_1 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                            (ulong)(param_1 << 2) << 2);
        *pfVar11 = fVar17 - param_3[lVar10];
        *pfVar5 = fVar17 + param_3[lVar10];
        param_3 = pfVar4;
      } while (param_2 != 0);
    }
  }
  return;
}

