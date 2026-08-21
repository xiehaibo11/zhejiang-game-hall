
void mdct_unroll_lap(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                    long param_7,long param_8,short *param_9,uint param_10,uint param_11,
                    uint param_12)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar24;
  int *piVar23;
  
  uVar3 = param_2 >> 2;
  uVar4 = param_1 >> 2;
  bVar12 = param_3 == 0;
  uVar17 = (ulong)param_10;
  uVar10 = uVar3;
  if (bVar12) {
    uVar10 = uVar4;
  }
  piVar24 = (int *)(param_6 + (long)(int)uVar10 * 4);
  uVar10 = uVar3 - uVar4;
  lVar18 = param_8 + (long)(param_2 >> 1) * 4;
  iVar1 = param_2 >> 1;
  if (bVar12 || param_4 == 0) {
    uVar3 = uVar4;
    param_8 = param_7;
    lVar18 = param_7 + (long)(param_1 >> 1) * 4;
    iVar1 = param_1 >> 1;
  }
  uVar4 = uVar10;
  if (!bVar12 || param_4 == 0) {
    uVar4 = 0;
  }
  piVar13 = piVar24;
  if (((uVar10 != 0) && (param_3 != 0)) && (param_4 == 0)) {
    uVar8 = param_12;
    if ((int)uVar10 <= (int)param_12) {
      uVar8 = uVar10;
    }
    uVar6 = param_11;
    if ((int)uVar10 <= (int)param_11) {
      uVar6 = uVar10;
    }
    piVar13 = piVar24 + -(long)(int)uVar6;
    param_11 = param_11 - uVar6;
    param_12 = param_12 - uVar8;
    if (-(long)(int)uVar8 < -(long)(int)uVar6) {
      do {
        piVar13 = piVar13 + -1;
        iVar5 = *piVar13 >> 9;
        sVar9 = -0x8000 - (short)iVar5;
        if (0x7ffe < iVar5) {
          iVar5 = 0x7fff;
        }
        if (-0x1000001 < *piVar13) {
          sVar9 = 0;
        }
        *param_9 = (short)iVar5 + sVar9;
        param_9 = (short *)((long)param_9 +
                           (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1));
      } while (piVar24 + -(long)(int)uVar8 < piVar13);
    }
  }
  uVar10 = param_12;
  if ((int)uVar3 <= (int)param_12) {
    uVar10 = uVar3;
  }
  uVar8 = param_11;
  if ((int)uVar3 <= (int)param_11) {
    uVar8 = uVar3;
  }
  uVar16 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
  param_11 = param_11 - uVar8;
  piVar20 = (int *)((long)piVar13 - uVar16);
  piVar24 = (int *)(param_5 + (long)iVar1 * 4 + (long)(int)(uVar8 << 1) * -4);
  lVar18 = lVar18 - uVar16;
  param_8 = param_8 + uVar16;
  param_12 = param_12 - uVar10;
  piVar21 = piVar20;
  if (-(long)(int)uVar10 < -(long)(int)uVar8) {
    lVar15 = 0;
    lVar14 = 0;
    do {
      lVar2 = lVar18 + lVar14;
      piVar24 = piVar24 + -2;
      lVar11 = lVar14 + -4;
      lVar14 = lVar14 + -4;
      iVar1 = ((uint)((ulong)((long)*(int *)(param_8 + lVar15) * (long)*piVar24) >> 0x1f) &
              0xfffffffe) +
              ((uint)((ulong)((long)*(int *)(lVar2 + -4) * (long)*(int *)((long)piVar20 + lVar11))
                     >> 0x1f) & 0xfffffffe);
      iVar5 = iVar1 >> 9;
      iVar7 = iVar5;
      if (0x7ffe < iVar5) {
        iVar7 = 0x7fff;
      }
      sVar9 = -0x8000 - (short)iVar5;
      if (-0x1000001 < iVar1) {
        sVar9 = 0;
      }
      piVar21 = (int *)((long)piVar20 + lVar14);
      *param_9 = (short)iVar7 + sVar9;
      param_9 = (short *)((long)param_9 +
                         (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1));
      lVar15 = lVar15 + 4;
    } while (piVar13 + -(long)(int)uVar10 < piVar21);
    param_8 = param_8 - lVar14;
    lVar18 = lVar18 + lVar14;
  }
  uVar10 = param_12;
  if ((int)uVar3 <= (int)param_12) {
    uVar10 = uVar3;
  }
  uVar8 = param_11;
  if ((int)uVar3 <= (int)param_11) {
    uVar8 = uVar3;
  }
  piVar24 = piVar24 + (long)(int)uVar8 * 2;
  if ((int)uVar8 < (int)uVar10) {
    uVar16 = (ulong)(int)uVar8;
    piVar13 = piVar24;
    piVar20 = (int *)(lVar18 + ~uVar16 * 4);
    piVar19 = (int *)(param_8 + uVar16 * 4);
    piVar22 = piVar21 + uVar16;
    do {
      piVar23 = piVar22 + 1;
      piVar24 = piVar13 + 2;
      iVar5 = ((uint)((ulong)((long)*piVar20 * (long)*piVar22) >> 0x1f) & 0xfffffffe) -
              ((uint)((ulong)((long)*piVar19 * (long)*piVar13) >> 0x1f) & 0xfffffffe);
      iVar1 = iVar5 >> 9;
      sVar9 = -0x8000 - (short)iVar1;
      if (0x7ffe < iVar1) {
        iVar1 = 0x7fff;
      }
      if (-0x1000001 < iVar5) {
        sVar9 = 0;
      }
      *param_9 = (short)iVar1 + sVar9;
      param_9 = (short *)((long)param_9 +
                         (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1));
      piVar13 = piVar24;
      piVar20 = piVar20 + -1;
      piVar19 = piVar19 + 1;
      piVar22 = piVar23;
    } while (piVar23 < piVar21 + (int)uVar10);
  }
  if (uVar4 != 0) {
    uVar3 = param_12 - uVar10;
    if ((int)uVar4 <= (int)(param_12 - uVar10)) {
      uVar3 = uVar4;
    }
    uVar10 = param_11 - uVar8;
    if ((int)uVar4 <= (int)(param_11 - uVar8)) {
      uVar10 = uVar4;
    }
    if ((int)(uVar10 * 2) < (int)(uVar3 * 2)) {
      piVar13 = piVar24 + (int)(uVar10 * 2);
      do {
        piVar21 = piVar13 + 2;
        iVar1 = -*piVar13 >> 9;
        sVar9 = -0x8000 - (short)iVar1;
        if (0x7ffe < iVar1) {
          iVar1 = 0x7fff;
        }
        if (*piVar13 < 0x1000001) {
          sVar9 = 0;
        }
        *param_9 = (short)iVar1 + sVar9;
        param_9 = (short *)((long)param_9 +
                           (-(ulong)(param_10 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1));
        piVar13 = piVar21;
      } while (piVar21 < piVar24 + (int)(uVar3 * 2));
    }
  }
  return;
}

