
void FUN_00e12ef0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar19 = *param_1;
    lVar15 = *param_2;
    iVar3 = 1;
    if (lVar19 < 0) {
      iVar3 = -1;
    }
    iVar18 = -iVar3;
    if (-1 < lVar15) {
      iVar18 = iVar3;
    }
    uVar12 = param_3 * -0x10000;
    if (-1 < param_3) {
      uVar12 = param_3 * 0x10000;
    }
    iVar1 = -iVar18;
    if (-1 < param_3) {
      iVar1 = iVar18;
    }
    if (uVar12 == 0) {
      uVar17 = 0x7fffffff;
    }
    else {
      lVar16 = -lVar15;
      if (-1 < lVar15) {
        lVar16 = lVar15;
      }
      lVar20 = -lVar19;
      if (-1 < lVar19) {
        lVar20 = lVar19;
      }
      uVar17 = 0;
      if (uVar12 != 0) {
        uVar17 = (lVar16 * lVar20 + (uVar12 >> 1)) / uVar12;
      }
    }
    lVar20 = param_1[1];
    lVar16 = param_2[2];
    uVar4 = -uVar17;
    if (-1 < iVar1) {
      uVar4 = uVar17;
    }
    iVar18 = 1;
    if (lVar20 < 0) {
      iVar18 = -1;
    }
    iVar1 = -iVar18;
    if (-1 < lVar16) {
      iVar1 = iVar18;
    }
    iVar2 = -iVar1;
    if (-1 < param_3) {
      iVar2 = iVar1;
    }
    if (uVar12 == 0) {
      uVar17 = 0x7fffffff;
    }
    else {
      lVar14 = -lVar16;
      if (-1 < lVar16) {
        lVar14 = lVar16;
      }
      lVar9 = -lVar20;
      if (-1 < lVar20) {
        lVar9 = lVar20;
      }
      uVar17 = 0;
      if (uVar12 != 0) {
        uVar17 = (lVar14 * lVar9 + (uVar12 >> 1)) / uVar12;
      }
    }
    lVar14 = param_2[1];
    uVar5 = -uVar17;
    if (-1 < iVar2) {
      uVar5 = uVar17;
    }
    iVar1 = -iVar3;
    if (-1 < lVar14) {
      iVar1 = iVar3;
    }
    iVar3 = -iVar1;
    if (-1 < param_3) {
      iVar3 = iVar1;
    }
    if (uVar12 == 0) {
      uVar17 = 0x7fffffff;
    }
    else {
      lVar9 = -lVar14;
      if (-1 < lVar14) {
        lVar9 = lVar14;
      }
      lVar10 = -lVar19;
      if (-1 < lVar19) {
        lVar10 = lVar19;
      }
      uVar17 = 0;
      if (uVar12 != 0) {
        uVar17 = (lVar9 * lVar10 + (uVar12 >> 1)) / uVar12;
      }
    }
    lVar19 = param_2[3];
    uVar6 = -uVar17;
    if (-1 < iVar3) {
      uVar6 = uVar17;
    }
    iVar3 = -iVar18;
    if (-1 < lVar19) {
      iVar3 = iVar18;
    }
    iVar18 = -iVar3;
    if (-1 < param_3) {
      iVar18 = iVar3;
    }
    if (uVar12 == 0) {
      uVar17 = 0x7fffffff;
    }
    else {
      lVar9 = -lVar19;
      if (-1 < lVar19) {
        lVar9 = lVar19;
      }
      lVar10 = -lVar20;
      if (-1 < lVar20) {
        lVar10 = lVar20;
      }
      uVar17 = 0;
      if (uVar12 != 0) {
        uVar17 = (lVar9 * lVar10 + (uVar12 >> 1)) / uVar12;
      }
    }
    lVar20 = param_1[2];
    uVar7 = -uVar17;
    if (-1 < iVar18) {
      uVar7 = uVar17;
    }
    iVar3 = 1;
    if (lVar20 < 0) {
      iVar3 = -1;
    }
    iVar18 = -iVar3;
    if (-1 < lVar15) {
      iVar18 = iVar3;
    }
    iVar1 = -iVar18;
    if (-1 < param_3) {
      iVar1 = iVar18;
    }
    if (uVar12 == 0) {
      uVar17 = 0x7fffffff;
    }
    else {
      lVar9 = -lVar20;
      if (-1 < lVar20) {
        lVar9 = lVar20;
      }
      lVar10 = -lVar15;
      if (-1 < lVar15) {
        lVar10 = lVar15;
      }
      uVar17 = 0;
      if (uVar12 != 0) {
        uVar17 = (lVar9 * lVar10 + (uVar12 >> 1)) / uVar12;
      }
    }
    lVar15 = param_1[3];
    uVar8 = -uVar17;
    if (-1 < iVar1) {
      uVar8 = uVar17;
    }
    iVar18 = 1;
    if (lVar15 < 0) {
      iVar18 = -1;
    }
    iVar1 = -iVar18;
    if (-1 < lVar16) {
      iVar1 = iVar18;
    }
    iVar2 = -iVar1;
    if (-1 < param_3) {
      iVar2 = iVar1;
    }
    if (uVar12 == 0) {
      uVar17 = 0x7fffffff;
    }
    else {
      lVar9 = -lVar15;
      if (-1 < lVar15) {
        lVar9 = lVar15;
      }
      lVar10 = -lVar16;
      if (-1 < lVar16) {
        lVar10 = lVar16;
      }
      uVar17 = 0;
      if (uVar12 != 0) {
        uVar17 = (lVar9 * lVar10 + (uVar12 >> 1)) / uVar12;
      }
    }
    uVar11 = -uVar17;
    if (-1 < iVar2) {
      uVar11 = uVar17;
    }
    iVar1 = -iVar3;
    if (-1 < lVar14) {
      iVar1 = iVar3;
    }
    iVar3 = -iVar1;
    if (-1 < param_3) {
      iVar3 = iVar1;
    }
    if (uVar12 == 0) {
      uVar17 = 0x7fffffff;
      if (iVar3 < 0) {
        uVar17 = 0xffffffff80000001;
      }
      iVar3 = -iVar18;
      if (-1 < lVar19) {
        iVar3 = iVar18;
      }
      iVar18 = -iVar3;
      if (-1 < param_3) {
        iVar18 = iVar3;
      }
      uVar13 = 0x7fffffff;
    }
    else {
      lVar16 = -lVar15;
      if (-1 < lVar15) {
        lVar16 = lVar15;
      }
      lVar15 = -lVar20;
      if (-1 < lVar20) {
        lVar15 = lVar20;
      }
      lVar20 = -lVar14;
      if (-1 < lVar14) {
        lVar20 = lVar14;
      }
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = ((uVar12 >> 1) + lVar15 * lVar20) / uVar12;
      }
      uVar17 = -uVar13;
      if (-1 < iVar3) {
        uVar17 = uVar13;
      }
      iVar3 = -iVar18;
      lVar15 = -lVar19;
      if (-1 < lVar19) {
        iVar3 = iVar18;
        lVar15 = lVar19;
      }
      iVar18 = -iVar3;
      if (-1 < param_3) {
        iVar18 = iVar3;
      }
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = ((uVar12 >> 1) + lVar16 * lVar15) / uVar12;
      }
    }
    uVar12 = -uVar13;
    if (-1 < iVar18) {
      uVar12 = uVar13;
    }
    *param_2 = uVar5 + uVar4;
    param_2[1] = uVar7 + uVar6;
    param_2[2] = uVar11 + uVar8;
    param_2[3] = uVar12 + uVar17;
  }
  return;
}

