
void mdct_unroll_lap(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                    long param_7,long param_8,short *param_9,uint param_10,uint param_11,
                    uint param_12)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  long lVar10;
  bool bVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  short *psVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar17;
  
  bVar11 = param_3 == 0;
  uVar23 = (ulong)param_10;
  uVar2 = param_2 >> 2;
  uVar3 = param_1 >> 2;
  uVar7 = uVar2;
  if (bVar11) {
    uVar7 = uVar3;
  }
  uVar9 = uVar2 - uVar3;
  lVar18 = param_8 + (long)(param_2 >> 1) * 4;
  iVar1 = param_2 >> 1;
  if (bVar11 || param_4 == 0) {
    uVar2 = uVar3;
    param_8 = param_7;
    lVar18 = param_7 + (long)(param_1 >> 1) * 4;
    iVar1 = param_1 >> 1;
  }
  piVar25 = (int *)(param_6 + (long)(int)uVar7 * 4);
  uVar3 = uVar9;
  if (!bVar11 || param_4 == 0) {
    uVar3 = 0;
  }
  piVar12 = piVar25;
  if (((uVar9 != 0) && (param_3 != 0)) && (param_4 == 0)) {
    uVar7 = param_12;
    if ((int)uVar9 <= (int)param_12) {
      uVar7 = uVar9;
    }
    uVar5 = param_11;
    if ((int)uVar9 <= (int)param_11) {
      uVar5 = uVar9;
    }
    piVar12 = piVar25 + -(long)(int)uVar5;
    param_11 = param_11 - uVar5;
    param_12 = param_12 - uVar7;
    if (-(long)(int)uVar7 < -(long)(int)uVar5) {
      do {
        piVar12 = piVar12 + -1;
        iVar4 = *piVar12 >> 9;
        sVar8 = -0x8000 - (short)iVar4;
        if (0x7ffe < iVar4) {
          iVar4 = 0x7fff;
        }
        if (-0x1000001 < *piVar12) {
          sVar8 = 0;
        }
        *param_9 = (short)iVar4 + sVar8;
        param_9 = (short *)((long)param_9 +
                           (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar23 << 1));
      } while (piVar25 + -(long)(int)uVar7 < piVar12);
    }
  }
  uVar7 = param_12;
  if ((int)uVar2 <= (int)param_12) {
    uVar7 = uVar2;
  }
  uVar9 = param_11;
  if ((int)uVar2 <= (int)param_11) {
    uVar9 = uVar2;
  }
  uVar13 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
  param_11 = param_11 - uVar9;
  piVar25 = (int *)(param_5 + (long)iVar1 * 4 + (long)(int)(uVar9 << 1) * -4);
  param_8 = param_8 + uVar13;
  param_12 = param_12 - uVar7;
  if (-(long)(int)uVar7 < -(long)(int)uVar9) {
    lVar22 = (long)(int)uVar9 * -4 + -4;
    lVar15 = 0;
    lVar14 = 0;
    do {
      piVar25 = piVar25 + -2;
      lVar10 = lVar14 + lVar22;
      piVar24 = (int *)(lVar18 + lVar22 + lVar14);
      piVar26 = (int *)(param_8 + lVar15);
      lVar14 = lVar14 + -4;
      lVar15 = lVar15 + 4;
      iVar1 = ((uint)((ulong)((long)*piVar26 * (long)*piVar25) >> 0x1f) & 0xfffffffe) +
              ((uint)((ulong)((long)*piVar24 * (long)*(int *)((long)piVar12 + lVar10)) >> 0x1f) &
              0xfffffffe);
      iVar4 = iVar1 >> 9;
      iVar6 = iVar4;
      if (0x7ffe < iVar4) {
        iVar6 = 0x7fff;
      }
      sVar8 = -0x8000 - (short)iVar4;
      if (-0x1000001 < iVar1) {
        sVar8 = 0;
      }
      *param_9 = (short)iVar6 + sVar8;
      param_9 = (short *)((long)param_9 +
                         (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar23 << 1));
    } while (piVar12 + -(long)(int)uVar7 < (int *)((long)piVar12 + lVar14 + lVar22 + 4));
    param_8 = param_8 - lVar14;
    lVar18 = lVar18 + lVar22 + lVar14 + 4;
    lVar15 = lVar14 + lVar22 + 4;
  }
  else {
    lVar15 = -uVar13;
    lVar18 = lVar18 - uVar13;
  }
  lVar15 = (long)piVar12 + lVar15;
  uVar7 = param_12;
  if ((int)uVar2 <= (int)param_12) {
    uVar7 = uVar2;
  }
  uVar9 = param_11;
  if ((int)uVar2 <= (int)param_11) {
    uVar9 = uVar2;
  }
  piVar12 = piVar25 + (long)(int)uVar9 * 2;
  psVar21 = param_9;
  if ((int)uVar9 < (int)uVar7) {
    uVar13 = (ulong)(int)uVar9;
    piVar24 = (int *)(lVar15 + (long)(int)uVar7 * 4);
    piVar16 = (int *)(lVar15 + uVar13 * 4);
    piVar19 = (int *)(lVar18 + uVar13 * -4);
    piVar26 = piVar16 + 1;
    piVar17 = piVar24;
    if (piVar24 <= piVar26) {
      piVar17 = piVar26;
    }
    uVar20 = (long)piVar17 + (3 - lVar15) + ~uVar13 * 4 >> 1 & 0x7ffffffffffffffe;
    psVar21 = (short *)((long)param_9 + (uVar20 + 2) * (long)(int)param_10);
    piVar26 = (int *)(param_8 + uVar13 * 4);
    do {
      piVar19 = piVar19 + -1;
      piVar17 = piVar16 + 1;
      iVar4 = ((uint)((ulong)((long)*piVar19 * (long)*piVar16) >> 0x1f) & 0xfffffffe) -
              ((uint)((ulong)((long)*piVar26 * (long)*piVar12) >> 0x1f) & 0xfffffffe);
      iVar1 = iVar4 >> 9;
      sVar8 = -0x8000 - (short)iVar1;
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      if (-0x1000001 < iVar4) {
        sVar8 = 0;
      }
      *param_9 = (short)iVar1 + sVar8;
      param_9 = (short *)((long)param_9 +
                         (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar23 << 1));
      piVar16 = piVar17;
      piVar12 = piVar12 + 2;
      piVar26 = piVar26 + 1;
    } while (piVar17 < piVar24);
    piVar12 = piVar25 + uVar20 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1)
                        + 2;
  }
  if (uVar3 != 0) {
    uVar2 = param_12 - uVar7;
    if ((int)uVar3 <= (int)(param_12 - uVar7)) {
      uVar2 = uVar3;
    }
    uVar7 = param_11 - uVar9;
    if ((int)uVar3 <= (int)(param_11 - uVar9)) {
      uVar7 = uVar3;
    }
    if ((int)(uVar7 * 2) < (int)(uVar2 * 2)) {
      piVar25 = piVar12 + (int)(uVar7 * 2);
      do {
        piVar24 = piVar25 + 2;
        iVar1 = -*piVar25 >> 9;
        sVar8 = -0x8000 - (short)iVar1;
        if (0x7ffe < iVar1) {
          iVar1 = 0x7fff;
        }
        if (*piVar25 < 0x1000001) {
          sVar8 = 0;
        }
        *psVar21 = (short)iVar1 + sVar8;
        psVar21 = (short *)((long)psVar21 +
                           (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar23 << 1));
        piVar25 = piVar24;
      } while (piVar24 < piVar12 + (int)(uVar2 * 2));
    }
  }
  return;
}

