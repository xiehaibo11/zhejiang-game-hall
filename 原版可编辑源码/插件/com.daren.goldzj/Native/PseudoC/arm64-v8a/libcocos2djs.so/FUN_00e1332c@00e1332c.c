
void FUN_00e1332c(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar11 = *param_1;
    lVar12 = *param_2;
    iVar3 = 1;
    if (lVar11 < 0) {
      iVar3 = -1;
    }
    iVar4 = -iVar3;
    if (-1 < lVar12) {
      iVar4 = iVar3;
    }
    uVar9 = param_3 * -0x10000;
    if (-1 < param_3) {
      uVar9 = param_3 * 0x10000;
    }
    iVar1 = -iVar4;
    if (-1 < param_3) {
      iVar1 = iVar4;
    }
    if (uVar9 == 0) {
      uVar10 = 0x7fffffff;
    }
    else {
      lVar13 = -lVar12;
      if (-1 < lVar12) {
        lVar13 = lVar12;
      }
      lVar12 = -lVar11;
      if (-1 < lVar11) {
        lVar12 = lVar11;
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = (lVar13 * lVar12 + (uVar9 >> 1)) / uVar9;
      }
    }
    lVar12 = param_1[1];
    lVar13 = param_2[1];
    uVar5 = -uVar10;
    if (-1 < iVar1) {
      uVar5 = uVar10;
    }
    iVar4 = 1;
    if (lVar12 < 0) {
      iVar4 = -1;
    }
    iVar1 = -iVar4;
    if (-1 < lVar13) {
      iVar1 = iVar4;
    }
    iVar2 = -iVar1;
    if (-1 < param_3) {
      iVar2 = iVar1;
    }
    if (uVar9 == 0) {
      uVar10 = 0x7fffffff;
    }
    else {
      lVar7 = -lVar13;
      if (-1 < lVar13) {
        lVar7 = lVar13;
      }
      lVar13 = -lVar12;
      if (-1 < lVar12) {
        lVar13 = lVar12;
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = (lVar7 * lVar13 + (uVar9 >> 1)) / uVar9;
      }
    }
    lVar13 = param_2[2];
    uVar6 = -uVar10;
    if (-1 < iVar2) {
      uVar6 = uVar10;
    }
    iVar1 = -iVar3;
    if (-1 < lVar13) {
      iVar1 = iVar3;
    }
    iVar3 = -iVar1;
    if (-1 < param_3) {
      iVar3 = iVar1;
    }
    if (uVar9 == 0) {
      uVar10 = 0x7fffffff;
    }
    else {
      lVar7 = -lVar13;
      if (-1 < lVar13) {
        lVar7 = lVar13;
      }
      lVar13 = -lVar11;
      if (-1 < lVar11) {
        lVar13 = lVar11;
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = (lVar7 * lVar13 + (uVar9 >> 1)) / uVar9;
      }
    }
    lVar11 = param_2[3];
    uVar8 = -uVar10;
    if (-1 < iVar3) {
      uVar8 = uVar10;
    }
    iVar3 = -iVar4;
    if (-1 < lVar11) {
      iVar3 = iVar4;
    }
    iVar4 = -iVar3;
    if (-1 < param_3) {
      iVar4 = iVar3;
    }
    if (uVar9 == 0) {
      uVar10 = 0x7fffffff;
    }
    else {
      lVar13 = -lVar11;
      if (-1 < lVar11) {
        lVar13 = lVar11;
      }
      lVar11 = -lVar12;
      if (-1 < lVar12) {
        lVar11 = lVar12;
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = (lVar13 * lVar11 + (uVar9 >> 1)) / uVar9;
      }
    }
    uVar9 = -uVar10;
    if (-1 < iVar4) {
      uVar9 = uVar10;
    }
    *param_1 = uVar6 + uVar5;
    param_1[1] = uVar9 + uVar8;
  }
  return;
}

