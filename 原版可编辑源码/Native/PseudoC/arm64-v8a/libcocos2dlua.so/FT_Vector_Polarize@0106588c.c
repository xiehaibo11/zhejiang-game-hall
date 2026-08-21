
void FT_Vector_Polarize(long *param_1,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  if (((param_1 != (long *)0x0) && (param_2 != (ulong *)0x0)) && (param_3 != (ulong *)0x0)) {
    lVar12 = *param_1;
    lVar13 = param_1[1];
    if (lVar13 != 0 || lVar12 != 0) {
      uVar4 = -(uint)lVar12;
      if (-1 < lVar12) {
        uVar4 = (uint)lVar12;
      }
      uVar1 = -(uint)lVar13;
      if (-1 < lVar13) {
        uVar1 = (uint)lVar13;
      }
      iVar5 = -(int)LZCOUNT(uVar1 | uVar4);
      iVar3 = iVar5 + 0x1f;
      uVar4 = iVar5 + 2;
      if (uVar4 == 0 || iVar3 < 0x1d) {
        uVar6 = (ulong)(0x1d - iVar3);
        lVar12 = lVar12 << (uVar6 & 0x3f);
        lVar13 = lVar13 << (uVar6 & 0x3f);
      }
      else {
        lVar12 = lVar12 >> ((ulong)uVar4 & 0x3f);
        lVar13 = lVar13 >> ((ulong)uVar4 & 0x3f);
        uVar6 = (ulong)(0x1d - iVar3);
      }
      lVar7 = -lVar12;
      if (lVar12 < lVar13) {
        lVar10 = 0x5a0000;
        lVar8 = lVar13;
        if (lVar13 <= lVar7) {
          lVar10 = 0xb40000;
          if (lVar13 < 1) {
            lVar10 = -0xb40000;
          }
          lVar8 = lVar7;
          lVar7 = -lVar13;
        }
      }
      else {
        lVar10 = -0x5a0000;
        if (lVar13 < lVar7) {
          lVar8 = -lVar13;
          lVar7 = lVar12;
        }
        else {
          lVar10 = 0;
          lVar8 = lVar12;
          lVar7 = lVar13;
        }
      }
      lVar12 = 0;
      lVar13 = 1;
      do {
        uVar11 = lVar12 + 1;
        lVar15 = lVar7 + lVar13 >> (uVar11 & 0x3f);
        if (lVar7 < 1) {
          lVar14 = lVar8 + lVar13 >> (uVar11 & 0x3f);
          lVar15 = -lVar15;
          lVar16 = -(&DAT_0145cbf8)[lVar12];
        }
        else {
          lVar16 = (&DAT_0145cbf8)[lVar12];
          lVar14 = -(lVar8 + lVar13 >> (uVar11 & 0x3f));
        }
        lVar7 = lVar7 + lVar14;
        lVar10 = lVar16 + lVar10;
        lVar8 = lVar15 + lVar8;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 << 1;
      } while (lVar12 != 0x16);
      if (lVar10 < 0) {
        uVar11 = -(8U - lVar10 & 0xfffffffffffffff0);
      }
      else {
        uVar11 = lVar10 + 8U & 0xfffffffffffffff0;
      }
      lVar12 = -lVar8;
      if (-1 < lVar8) {
        lVar12 = lVar8;
      }
      uVar9 = lVar12 * 0xdbd95b16 + 0x40000000U >> 0x20;
      uVar2 = -uVar9;
      if (-1 < lVar8) {
        uVar2 = uVar9;
      }
      uVar9 = (long)uVar2 >> (uVar6 & 0x3f);
      if ((int)uVar6 < 0) {
        uVar9 = (ulong)(uint)((int)uVar2 << (ulong)(-(int)uVar6 & 0x1f));
      }
      *param_2 = uVar9;
      *param_3 = uVar11;
    }
  }
  return;
}

