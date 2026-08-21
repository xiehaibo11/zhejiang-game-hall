
undefined8 FT_Matrix_Invert(ulong *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == (ulong *)0x0) {
    return 6;
  }
  uVar8 = param_1[2];
  uVar6 = param_1[3];
  uVar5 = *param_1;
  uVar9 = param_1[1];
  uVar7 = ((long)(uVar6 * uVar5 + ((long)(uVar6 * uVar5) >> 0x3f) + 0x8000) >> 0x10) -
          ((long)(uVar8 * uVar9 + ((long)(uVar8 * uVar9) >> 0x3f) + 0x8000) >> 0x10);
  if (uVar7 == 0) {
    return 6;
  }
  iVar1 = 1;
  if ((long)uVar9 < 0) {
    iVar1 = -1;
  }
  uVar3 = -uVar7;
  if (-1 < (long)uVar7) {
    uVar3 = uVar7;
  }
  iVar2 = -iVar1;
  if (-1 < (long)uVar7) {
    iVar2 = iVar1;
  }
  if (uVar3 == 0) {
    uVar9 = 0x7fffffff;
  }
  else {
    uVar4 = -uVar9;
    if (-1 < (long)uVar9) {
      uVar4 = uVar9;
    }
    uVar9 = 0;
    if (uVar3 != 0) {
      uVar9 = ((uVar3 >> 1) + uVar4 * 0x10000) / uVar3;
    }
  }
  uVar4 = -uVar9;
  if (-1 < iVar2) {
    uVar4 = uVar9;
  }
  iVar1 = 1;
  if ((long)uVar8 < 0) {
    iVar1 = -1;
  }
  iVar2 = -iVar1;
  if (-1 < (long)uVar7) {
    iVar2 = iVar1;
  }
  param_1[1] = -uVar4;
  if (uVar3 == 0) {
    uVar8 = 0x7fffffff;
  }
  else {
    uVar9 = -uVar8;
    if (-1 < (long)uVar8) {
      uVar9 = uVar8;
    }
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = ((uVar3 >> 1) + uVar9 * 0x10000) / uVar3;
    }
  }
  uVar9 = -uVar8;
  if (-1 < iVar2) {
    uVar9 = uVar8;
  }
  iVar1 = 1;
  if ((long)uVar6 < 0) {
    iVar1 = -1;
  }
  param_1[2] = -uVar9;
  iVar2 = -iVar1;
  if (-1 < (long)uVar7) {
    iVar2 = iVar1;
  }
  if (uVar3 == 0) {
    uVar8 = 0x7fffffff;
  }
  else {
    uVar9 = -uVar6;
    if (-1 < (long)uVar6) {
      uVar9 = uVar6;
    }
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = ((uVar3 >> 1) + uVar9 * 0x10000) / uVar3;
    }
  }
  uVar6 = -uVar8;
  if (-1 < iVar2) {
    uVar6 = uVar8;
  }
  *param_1 = uVar6;
  iVar1 = 1;
  if ((long)uVar5 < 0) {
    iVar1 = -1;
  }
  iVar2 = -iVar1;
  if (-1 < (long)uVar7) {
    iVar2 = iVar1;
  }
  if (uVar3 == 0) {
    uVar8 = 0x7fffffff;
  }
  else {
    uVar6 = -uVar5;
    if (-1 < (long)uVar5) {
      uVar6 = uVar5;
    }
    uVar8 = 0;
    if (uVar3 != 0) {
      uVar8 = ((uVar3 >> 1) + uVar6 * 0x10000) / uVar3;
    }
  }
  uVar5 = -uVar8;
  if (-1 < iVar2) {
    uVar5 = uVar8;
  }
  param_1[3] = uVar5;
  return 0;
}

