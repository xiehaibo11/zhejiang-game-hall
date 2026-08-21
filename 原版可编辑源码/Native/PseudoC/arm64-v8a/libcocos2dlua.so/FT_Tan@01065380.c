
ulong FT_Tan(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar5 = 0xdbd95b;
  uVar8 = 0;
  if (param_1 < -0x2d0000) {
    lVar6 = param_1;
    uVar9 = 0xdbd95b;
    do {
      uVar5 = uVar8;
      param_1 = lVar6 + 0x5a0000;
      uVar8 = -uVar9;
      bVar1 = lVar6 < -0x870000;
      lVar6 = param_1;
      uVar9 = uVar5;
    } while (bVar1);
  }
  lVar6 = param_1;
  uVar9 = uVar8;
  if (0x2d0000 < param_1) {
    do {
      uVar8 = uVar5;
      param_1 = lVar6 + -0x5a0000;
      uVar5 = -uVar9;
      bVar1 = 0x870000 < lVar6;
      lVar6 = param_1;
      uVar9 = uVar8;
    } while (bVar1);
  }
  lVar6 = 0;
  lVar7 = 1;
  do {
    uVar9 = lVar6 + 1;
    lVar11 = (long)(uVar8 + lVar7) >> (uVar9 & 0x3f);
    if (param_1 < 0) {
      lVar12 = (&DAT_0145cbf8)[lVar6];
      lVar10 = -((long)(uVar5 + lVar7) >> (uVar9 & 0x3f));
    }
    else {
      lVar10 = (long)(uVar5 + lVar7) >> (uVar9 & 0x3f);
      lVar11 = -lVar11;
      lVar12 = -(&DAT_0145cbf8)[lVar6];
    }
    uVar8 = lVar10 + uVar8;
    uVar5 = uVar5 + lVar11;
    param_1 = param_1 + lVar12;
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 << 1;
  } while (lVar6 != 0x16);
  iVar2 = 1;
  if ((long)uVar8 < 0) {
    iVar2 = -1;
  }
  uVar9 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar9 = uVar5;
  }
  iVar3 = -iVar2;
  if (-1 < (long)uVar5) {
    iVar3 = iVar2;
  }
  if ((long)uVar9 < 1) {
    uVar5 = 0x7fffffff;
  }
  else {
    uVar4 = -uVar8;
    if (-1 < (long)uVar8) {
      uVar4 = uVar8;
    }
    uVar5 = 0;
    if (uVar9 != 0) {
      uVar5 = (uVar4 * 0x10000 + (uVar9 >> 1)) / uVar9;
    }
  }
  uVar8 = -uVar5;
  if (-1 < iVar3) {
    uVar8 = uVar5;
  }
  return uVar8;
}

