
ulong FT_Vector_Length(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar10 = *param_1;
  uVar6 = param_1[1];
  if (uVar10 == 0) {
    uVar10 = -uVar6;
    if (-1 < (long)uVar6) {
      uVar10 = uVar6;
    }
    return uVar10;
  }
  uVar4 = -uVar10;
  if (-1 < (long)uVar10) {
    uVar4 = uVar10;
  }
  if (uVar6 == 0) {
    return uVar4;
  }
  uVar1 = -(uint)uVar6;
  if (-1 < (long)uVar6) {
    uVar1 = (uint)uVar6;
  }
  iVar2 = -(int)LZCOUNT(uVar1 | (uint)uVar4);
  iVar3 = iVar2 + 0x1f;
  uVar1 = iVar2 + 2;
  if (uVar1 == 0 || iVar3 < 0x1d) {
    uVar4 = (ulong)(0x1d - iVar3);
    lVar9 = uVar10 << (uVar4 & 0x3f);
    lVar7 = uVar6 << (uVar4 & 0x3f);
    lVar11 = -lVar9;
    lVar8 = lVar7;
    if (lVar7 <= lVar9) {
LAB_00e12afc:
      lVar5 = lVar9;
      if (lVar8 < lVar11) {
        lVar5 = -lVar8;
        lVar8 = lVar9;
      }
      goto LAB_00e12b40;
    }
  }
  else {
    lVar9 = (long)uVar10 >> ((ulong)uVar1 & 0x3f);
    lVar7 = (long)uVar6 >> ((ulong)uVar1 & 0x3f);
    uVar4 = (ulong)(0x1d - iVar3);
    lVar11 = -lVar9;
    lVar8 = lVar7;
    if (lVar7 <= lVar9) goto LAB_00e12afc;
  }
  lVar5 = lVar7;
  lVar8 = lVar11;
  if (lVar7 <= lVar11) {
    lVar5 = lVar11;
    lVar8 = -lVar7;
  }
LAB_00e12b40:
  uVar10 = 1;
  lVar7 = 1;
  do {
    while( true ) {
      lVar11 = lVar8 + lVar7 >> (uVar10 & 0x3f);
      lVar9 = lVar5 + lVar7;
      if (lVar8 < 1) break;
      lVar5 = lVar11 + lVar5;
      lVar8 = lVar8 - (lVar9 >> (uVar10 & 0x3f));
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 << 1;
      if (uVar10 == 0x17) goto LAB_00e12b98;
    }
    lVar5 = lVar5 - lVar11;
    lVar8 = (lVar9 >> (uVar10 & 0x3f)) + lVar8;
    uVar10 = uVar10 + 1;
    lVar7 = lVar7 << 1;
  } while (uVar10 != 0x17);
LAB_00e12b98:
  lVar8 = -lVar5;
  if (-1 < lVar5) {
    lVar8 = lVar5;
  }
  uVar6 = lVar8 * 0xdbd95b16 + 0x40000000U >> 0x20;
  uVar10 = -uVar6;
  if (-1 < lVar5) {
    uVar10 = uVar6;
  }
  iVar3 = (int)uVar4;
  if (iVar3 < 1) {
    return (ulong)(uint)((int)uVar10 << (ulong)(-iVar3 & 0x1f));
  }
  return (long)(uVar10 + (1L << ((ulong)(iVar3 - 1) & 0x3f))) >> (uVar4 & 0x3f);
}

