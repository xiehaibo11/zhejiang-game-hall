
void FUN_0012ed84(uint param_1,int param_2,float *param_3,float *param_4,long param_5,long param_6,
                 long param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  ulong uVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
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
  
  uVar4 = param_2 * param_1;
  uVar3 = param_1 * 4;
  uVar6 = (ulong)uVar3;
  uVar8 = (ulong)(param_1 * 2);
  if (0 < param_2) {
    iVar10 = uVar3 - 1;
    pfVar14 = param_4;
    pfVar12 = param_3;
    iVar15 = param_2;
    do {
      pfVar5 = (float *)((long)pfVar12 +
                        (-(ulong)((param_1 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | uVar8 << 2)
                        );
      fVar21 = *pfVar12;
      lVar20 = (long)iVar10;
      fVar22 = pfVar5[-1];
      fVar24 = *pfVar5;
      pfVar12 = (float *)((long)pfVar12 +
                         (-(ulong)((param_1 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 | uVar6 << 2
                         ));
      iVar10 = iVar10 + uVar3;
      fVar26 = fVar21 - param_3[lVar20];
      fVar21 = fVar21 + param_3[lVar20];
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar24 + fVar24;
      iVar15 = iVar15 + -1;
      *pfVar14 = fVar22 + fVar21;
      pfVar14[(int)uVar4] = fVar26 - fVar24;
      *(float *)((long)pfVar14 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3))
           = fVar21 - fVar22;
      pfVar14[(long)(int)uVar4 + (long)(int)uVar4 * 2] = fVar24 + fVar26;
      pfVar14 = (float *)((long)pfVar14 +
                         (-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2));
    } while (iVar15 != 0);
  }
  iVar10 = param_1 - 1;
  if (iVar10 != 0 && 0 < (int)param_1) {
    if (param_1 != 2) {
      if (0 < param_2) {
        iVar9 = 0;
        iVar11 = 0;
        uVar13 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
        pfVar12 = param_4 + (long)(int)uVar4 * 2;
        pfVar14 = param_4 + (int)uVar4;
        iVar15 = param_1 * 2 + 1;
        pfVar5 = param_4 + (long)(int)uVar4 * 3;
        pfVar16 = param_4;
        uVar17 = uVar6;
        do {
          iVar7 = (int)uVar8;
          lVar19 = -0xc;
          lVar20 = 2;
          lVar18 = 0;
          do {
            pfVar1 = (float *)((long)param_3 + lVar19 + (long)(int)uVar17 * 4);
            pfVar2 = (float *)((long)param_3 + lVar18 + (long)iVar9 * 4 + 8);
            fVar21 = *pfVar1;
            fVar24 = pfVar1[1];
            pfVar1 = (float *)((long)param_3 + lVar19 + (long)iVar7 * 4);
            fVar23 = *(float *)((long)param_3 + lVar18 + (long)iVar15 * 4);
            fVar25 = *(float *)((long)param_3 + lVar18 + (long)iVar7 * 4 + 8);
            fVar22 = pfVar2[-1];
            fVar26 = *pfVar2;
            fVar27 = *pfVar1;
            fVar28 = pfVar1[1];
            pfVar1 = (float *)(param_5 + lVar18);
            fVar29 = fVar26 + fVar24;
            fVar26 = fVar26 - fVar24;
            fVar24 = fVar25 - fVar28;
            fVar25 = fVar25 + fVar28;
            fVar28 = fVar22 - fVar21;
            fVar22 = fVar22 + fVar21;
            fVar21 = fVar23 - fVar27;
            fVar23 = fVar23 + fVar27;
            *(float *)((long)pfVar16 + lVar18 + 4) = fVar22 + fVar23;
            *(float *)((long)pfVar16 + lVar18 + 8) = fVar26 + fVar24;
            fVar27 = fVar28 - fVar25;
            fVar30 = fVar29 + fVar21;
            *(float *)((long)pfVar14 + lVar18 + 4) = fVar27 * *pfVar1 - fVar30 * pfVar1[1];
            fVar22 = fVar22 - fVar23;
            pfVar2 = (float *)(param_6 + lVar18);
            fVar26 = fVar26 - fVar24;
            *(float *)((long)pfVar14 + lVar18 + 8) = fVar30 * *pfVar1 + fVar27 * pfVar1[1];
            pfVar1 = (float *)(param_7 + lVar18);
            lVar20 = lVar20 + 2;
            *(float *)((long)pfVar12 + lVar18 + 4) = fVar22 * *pfVar2 - fVar26 * pfVar2[1];
            *(float *)((long)pfVar12 + lVar18 + 8) = fVar26 * *pfVar2 + fVar22 * pfVar2[1];
            fVar25 = fVar25 + fVar28;
            fVar29 = fVar29 - fVar21;
            lVar19 = lVar19 + -8;
            *(float *)((long)pfVar5 + lVar18 + 4) = fVar25 * *pfVar1 - fVar29 * pfVar1[1];
            *(float *)((long)pfVar5 + lVar18 + 8) = fVar29 * *pfVar1 + fVar25 * pfVar1[1];
            lVar18 = lVar18 + 8;
          } while (lVar20 < (int)param_1);
          iVar11 = iVar11 + 1;
          iVar9 = iVar9 + uVar3;
          uVar8 = (ulong)(iVar7 + uVar3);
          uVar17 = (ulong)((int)uVar17 + uVar3);
          pfVar5 = (float *)((long)pfVar5 + uVar13);
          pfVar12 = (float *)((long)pfVar12 + uVar13);
          pfVar14 = (float *)((long)pfVar14 + uVar13);
          pfVar16 = (float *)((long)pfVar16 + uVar13);
          iVar15 = iVar15 + uVar3;
        } while (iVar11 != param_2);
      }
      if ((int)param_1 % 2 == 1) {
        return;
      }
    }
    if (0 < param_2) {
      uVar8 = -(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2;
      pfVar12 = param_4 + iVar10;
      lVar20 = 0;
      param_4 = param_4 + (long)(int)uVar4 + (long)iVar10;
      do {
        pfVar14 = (float *)((long)param_3 + lVar20 + (uVar8 - 4));
        pfVar5 = (float *)((long)param_3 + lVar20 + (long)(int)(param_1 * 3) * 4 + -4);
        fVar21 = *pfVar14;
        fVar22 = pfVar14[1];
        fVar26 = *pfVar5;
        fVar24 = pfVar5[1];
        param_2 = param_2 + -1;
        lVar20 = lVar20 + (-(ulong)((param_1 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                          uVar6 << 2);
        fVar23 = fVar22 + fVar24;
        fVar24 = fVar24 - fVar22;
        fVar22 = fVar21 - fVar26;
        fVar21 = fVar21 + fVar26;
        *pfVar12 = fVar21 + fVar21;
        *param_4 = (fVar22 - fVar23) * 1.4142135;
        *(float *)((long)pfVar12 +
                  (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3)) =
             fVar24 + fVar24;
        pfVar12[(long)(int)uVar4 + (long)(int)uVar4 * 2] = (fVar23 + fVar22) * -1.4142135;
        pfVar12 = (float *)((long)pfVar12 + uVar8);
        param_4 = (float *)((long)param_4 + uVar8);
      } while (param_2 != 0);
    }
  }
  return;
}

