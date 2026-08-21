
ulong FT_Atan2(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  if (param_2 == 0 && param_1 == 0) {
    return 0;
  }
  uVar3 = -(uint)param_1;
  if (-1 < param_1) {
    uVar3 = (uint)param_1;
  }
  uVar1 = -(uint)param_2;
  if (-1 < param_2) {
    uVar1 = (uint)param_2;
  }
  iVar4 = -(int)LZCOUNT(uVar1 | uVar3);
  iVar2 = iVar4 + 0x1f;
  uVar3 = iVar4 + 2;
  if (uVar3 == 0 || iVar2 < 0x1d) {
    uVar5 = (ulong)(0x1d - iVar2);
    param_1 = param_1 << (uVar5 & 0x3f);
    param_2 = param_2 << (uVar5 & 0x3f);
  }
  else {
    param_1 = param_1 >> ((ulong)uVar3 & 0x3f);
    param_2 = param_2 >> ((ulong)uVar3 & 0x3f);
  }
  lVar7 = -param_1;
  if (param_1 < param_2) {
    lVar6 = 0x5a0000;
    lVar8 = param_2;
    if (param_2 <= lVar7) {
      lVar6 = 0xb40000;
      if (param_2 < 1) {
        lVar6 = -0xb40000;
      }
      lVar8 = lVar7;
      lVar7 = -param_2;
    }
  }
  else {
    lVar6 = -0x5a0000;
    if (param_2 < lVar7) {
      lVar8 = -param_2;
      lVar7 = param_1;
    }
    else {
      lVar6 = 0;
      lVar8 = param_1;
      lVar7 = param_2;
    }
  }
  lVar9 = 0;
  lVar10 = 1;
  do {
    uVar5 = lVar9 + 1;
    lVar12 = lVar7 + lVar10 >> (uVar5 & 0x3f);
    if (lVar7 < 1) {
      lVar11 = lVar8 + lVar10 >> (uVar5 & 0x3f);
      lVar12 = -lVar12;
      lVar13 = -(&DAT_0145cbf8)[lVar9];
    }
    else {
      lVar13 = (&DAT_0145cbf8)[lVar9];
      lVar11 = -(lVar8 + lVar10 >> (uVar5 & 0x3f));
    }
    lVar7 = lVar7 + lVar11;
    lVar8 = lVar12 + lVar8;
    lVar6 = lVar13 + lVar6;
    lVar9 = lVar9 + 1;
    lVar10 = lVar10 << 1;
  } while (lVar9 != 0x16);
  if (-1 < lVar6) {
    return lVar6 + 8U & 0xfffffffffffffff0;
  }
  return -(8U - lVar6 & 0xfffffffffffffff0);
}

