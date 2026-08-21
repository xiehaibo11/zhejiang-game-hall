
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
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = 0;
  if (param_1 != (ulong *)0x0) {
    uVar9 = *param_1;
    uVar6 = param_1[1];
    if (uVar9 == 0) {
      uVar4 = -uVar6;
      if (-1 < (long)uVar6) {
        uVar4 = uVar6;
      }
      return uVar4;
    }
    uVar4 = -uVar9;
    if (-1 < (long)uVar9) {
      uVar4 = uVar9;
    }
                    /* catch() { ... } // from try @ 0105a418 with catch @ 0105a4b4 */
    if (uVar6 != 0) {
      uVar1 = -(uint)uVar6;
      if (-1 < (long)uVar6) {
        uVar1 = (uint)uVar6;
      }
      iVar2 = -(int)LZCOUNT(uVar1 | (uint)uVar4);
      iVar3 = iVar2 + 0x1f;
      uVar1 = iVar2 + 2;
      if (uVar1 == 0 || iVar3 < 0x1d) {
        uVar4 = (ulong)(0x1d - iVar3);
        lVar10 = uVar9 << (uVar4 & 0x3f);
        lVar8 = uVar6 << (uVar4 & 0x3f);
      }
      else {
        lVar10 = (long)uVar9 >> ((ulong)uVar1 & 0x3f);
        lVar8 = (long)uVar6 >> ((ulong)uVar1 & 0x3f);
        uVar4 = (ulong)(0x1d - iVar3);
      }
      lVar7 = -lVar10;
      if (lVar10 < lVar8) {
        lVar5 = lVar7;
        lVar10 = lVar8;
        if (lVar8 <= lVar7) {
          lVar5 = -lVar8;
          lVar10 = lVar7;
        }
      }
      else {
        lVar5 = lVar8;
        if (lVar8 < lVar7) {
          lVar5 = lVar10;
          lVar10 = -lVar8;
        }
      }
      uVar9 = 1;
      lVar8 = 1;
      do {
        lVar7 = lVar5 + lVar8 >> (uVar9 & 0x3f);
        if (lVar5 < 1) {
          lVar7 = -lVar7;
          lVar11 = lVar10 + lVar8 >> (uVar9 & 0x3f);
        }
        else {
          lVar11 = -(lVar10 + lVar8 >> (uVar9 & 0x3f));
        }
        lVar10 = lVar7 + lVar10;
        lVar5 = lVar5 + lVar11;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 << 1;
      } while (uVar9 != 0x17);
      lVar8 = -lVar10;
      if (-1 < lVar10) {
        lVar8 = lVar10;
      }
      uVar6 = lVar8 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar9 = -uVar6;
      if (-1 < lVar10) {
        uVar9 = uVar6;
      }
      iVar3 = (int)uVar4;
      if (0 < iVar3) {
        return (long)(uVar9 + (long)(1 << (ulong)(iVar3 - 1U & 0x1f))) >> (uVar4 & 0x3f);
      }
      uVar4 = (ulong)(uint)((int)uVar9 << (ulong)(-iVar3 & 0x1f));
    }
  }
  return uVar4;
}

