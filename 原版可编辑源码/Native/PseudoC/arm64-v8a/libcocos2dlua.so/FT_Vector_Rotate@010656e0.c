
void FT_Vector_Rotate(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    lVar10 = *param_1;
    lVar14 = param_1[1];
    if (lVar14 != 0 || lVar10 != 0) {
      uVar4 = -(uint)lVar10;
      if (-1 < lVar10) {
        uVar4 = (uint)lVar10;
      }
      uVar3 = -(uint)lVar14;
      if (-1 < lVar14) {
        uVar3 = (uint)lVar14;
      }
      iVar5 = -(int)LZCOUNT(uVar3 | uVar4);
      iVar7 = iVar5 + 0x1f;
      uVar4 = iVar5 + 2;
      if (uVar4 == 0 || iVar7 < 0x1d) {
        uVar8 = (ulong)(0x1d - iVar7);
        lVar10 = lVar10 << (uVar8 & 0x3f);
        lVar14 = lVar14 << (uVar8 & 0x3f);
      }
      else {
        lVar10 = lVar10 >> ((ulong)uVar4 & 0x3f);
        lVar14 = lVar14 >> ((ulong)uVar4 & 0x3f);
        uVar8 = (ulong)(0x1d - iVar7);
      }
      lVar6 = param_2;
      lVar12 = lVar10;
      if (param_2 < -0x2d0000) {
        do {
          lVar10 = lVar14;
          lVar6 = param_2 + 0x5a0000;
          lVar14 = -lVar12;
          bVar1 = param_2 < -0x870000;
          param_2 = lVar6;
          lVar12 = lVar10;
        } while (bVar1);
      }
      lVar12 = lVar6;
      lVar13 = lVar14;
      if (0x2d0000 < lVar6) {
        do {
          lVar14 = lVar10;
          lVar6 = lVar12 + -0x5a0000;
          lVar10 = -lVar13;
          bVar1 = 0x870000 < lVar12;
          lVar12 = lVar6;
          lVar13 = lVar14;
        } while (bVar1);
      }
      lVar12 = 0;
      lVar13 = 1;
      do {
        uVar2 = lVar12 + 1;
        lVar16 = lVar14 + lVar13 >> (uVar2 & 0x3f);
        if (lVar6 < 0) {
          lVar17 = (&DAT_0145cbf8)[lVar12];
          lVar15 = -(lVar10 + lVar13 >> (uVar2 & 0x3f));
        }
        else {
          lVar15 = lVar10 + lVar13 >> (uVar2 & 0x3f);
          lVar16 = -lVar16;
          lVar17 = -(&DAT_0145cbf8)[lVar12];
        }
        lVar14 = lVar15 + lVar14;
        lVar10 = lVar10 + lVar16;
        lVar6 = lVar6 + lVar17;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 << 1;
      } while (lVar12 != 0x16);
      lVar6 = -lVar10;
      if (-1 < lVar10) {
        lVar6 = lVar10;
      }
      uVar9 = lVar6 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar2 = -uVar9;
      if (-1 < lVar10) {
        uVar2 = uVar9;
      }
      lVar10 = -lVar14;
      if (-1 < lVar14) {
        lVar10 = lVar14;
      }
      uVar11 = lVar10 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar9 = -uVar11;
      if (-1 < lVar14) {
        uVar9 = uVar11;
      }
      iVar7 = (int)uVar8;
      if (iVar7 < 1) {
        lVar14 = uVar2 << ((ulong)(uint)-iVar7 & 0x3f);
        lVar10 = uVar9 << ((ulong)(uint)-iVar7 & 0x3f);
      }
      else {
        lVar10 = (long)(1 << (ulong)(iVar7 - 1U & 0x1f));
        lVar14 = (long)(uVar2 + lVar10 + ((long)uVar2 >> 0x3f)) >> (uVar8 & 0x3f);
        lVar10 = (long)(uVar9 + lVar10 + ((long)uVar9 >> 0x3f)) >> (uVar8 & 0x3f);
      }
      *param_1 = lVar14;
      param_1[1] = lVar10;
    }
  }
  return;
}

