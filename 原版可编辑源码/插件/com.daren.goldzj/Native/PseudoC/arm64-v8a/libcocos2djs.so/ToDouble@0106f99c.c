
/* v8::internal::MutableBigInt::ToDouble(v8::internal::Handle<v8::internal::BigIntBase>) */

undefined1  [16] v8::internal::MutableBigInt::ToDouble(long *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar3 = *param_1;
  if ((*(uint *)(lVar3 + 3) & 0x7ffffffe) == 0) {
    return ZEXT816(0);
  }
  uVar10 = *(uint *)(lVar3 + 3) >> 1;
  uVar2 = uVar10 & 0x3fffffff;
  iVar6 = uVar2 - 1;
  uVar8 = *(ulong *)(lVar3 + ((long)(iVar6 * 8) | 7U));
  iVar12 = (int)LZCOUNT(uVar8);
  iVar7 = uVar10 * 0x40 - iVar12;
  if (iVar7 < 0x401) {
    uVar4 = 0;
    if (iVar12 + 1U != 0x40) {
      uVar4 = (uVar8 << ((ulong)(iVar12 + 1U) & 0x3f)) >> 0xc;
    }
    uVar10 = iVar12 - 0xb;
    if ((0 < iVar6) && (0x3f < (int)uVar10)) {
      iVar6 = uVar2 - 2;
      uVar8 = *(ulong *)(lVar3 + ((long)(iVar6 * 8) | 7U));
      uVar10 = iVar12 - 0x4b;
      uVar4 = uVar8 << ((ulong)uVar10 & 0x3f) | uVar4;
    }
    uVar5 = (ulong)(iVar7 + -1);
    if ((0 < iVar6) && (0 < (int)uVar10)) {
      uVar8 = *(ulong *)(lVar3 + ((long)((iVar6 + -1) * 8) | 7U));
      uVar2 = -uVar10;
      uVar10 = uVar10 - 0x40;
      uVar4 = uVar8 >> ((ulong)uVar2 & 0x3f) | uVar4;
      iVar6 = iVar6 + -1;
    }
    if ((int)uVar10 < 1) {
      if ((int)uVar10 < 0) {
        uVar11 = (ulong)~uVar10;
      }
      else {
        if (iVar6 == 0) goto LAB_0106fa90;
        iVar6 = iVar6 + -1;
        uVar8 = *(ulong *)(lVar3 + ((long)(iVar6 * 8) | 7U));
        uVar11 = 0x3f;
      }
      uVar11 = 1L << (uVar11 & 0x3f);
      if ((uVar11 & uVar8) != 0) {
        if ((uVar11 - 1 & uVar8) == 0) {
          iVar7 = iVar6 * 8 + -1;
          lVar9 = (long)iVar6 + 1;
          do {
            lVar9 = lVar9 + -1;
            if (lVar9 < 1) {
              if ((uVar4 & 1) == 0) goto LAB_0106fa90;
              break;
            }
            lVar1 = (long)iVar7;
            iVar7 = iVar7 + -8;
          } while (*(long *)(lVar3 + lVar1) == 0);
        }
        uVar4 = uVar4 + 1;
        if (uVar4 >> 0x34 != 0) {
          uVar5 = uVar5 + 1;
          if (0x3ff < uVar5) goto LAB_0106f9dc;
          uVar4 = 0;
        }
      }
    }
LAB_0106fa90:
    auVar14._8_8_ = 0;
    auVar14._0_8_ =
         (uVar5 << 0x34) + 0x3ff0000000000000 | uVar4 | (ulong)*(uint *)(lVar3 + 3) << 0x3f;
    return auVar14;
  }
LAB_0106f9dc:
  uVar8 = 0x7ff0000000000000;
  if ((*(uint *)(lVar3 + 3) & 1) != 0) {
    uVar8 = 0xfff0000000000000;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar8;
  return auVar13;
}

