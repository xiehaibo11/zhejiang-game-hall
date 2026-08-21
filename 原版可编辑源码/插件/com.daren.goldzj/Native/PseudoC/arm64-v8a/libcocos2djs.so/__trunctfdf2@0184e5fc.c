
undefined1  [16] __trunctfdf2(undefined1 param_1 [16])

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar14;
  undefined1 auVar13 [16];
  
  uVar14 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  uVar7 = fpcr;
  uVar11 = uVar14 >> 0x30 & 0x7fff;
  bVar1 = -(param_1[0xf] >> 7);
  uVar5 = (uVar14 & 0xffffffffffff) << 3 | uVar6 >> 0x3d;
  uVar10 = uVar6 << 3;
  if ((uVar11 + 1 & 0x7fff) < 2) {
    if (uVar11 == 0) {
      uVar5 = (ulong)(uVar5 != 0 || uVar10 != 0);
LAB_0184e784:
      uVar9 = 0;
      goto LAB_0184e794;
    }
    if (uVar5 == 0 && uVar10 == 0) {
      uVar5 = 0;
      uVar9 = 0x7ff;
      goto LAB_0184e794;
    }
    uVar4 = 0;
    if (uVar11 == 0x7fff) {
      uVar4 = (param_1._12_4_ & 0xffff) >> 0xf ^ 1;
    }
    uVar9 = 0x7ff;
    uVar5 = (uVar6 & 0x1fffffffffffffff) >> 0x39 & 0xfffffffffffffff8 | uVar5 << 4 |
            0x40000000000000;
  }
  else {
    uVar9 = uVar11 - 0x3c00;
    if ((long)uVar9 < 0x7ff) {
      if ((long)uVar9 < 1) {
        if ((long)uVar9 < -0x34) {
          uVar5 = 1;
        }
        else {
          uVar5 = uVar5 | 0x8000000000000;
          iVar8 = (int)uVar9;
          if ((long)(0x3c3d - uVar11) < 0x40) {
            uVar5 = uVar10 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar5 << ((ulong)(iVar8 + 3) & 0x3f);
            uVar6 = (ulong)(uVar10 << ((ulong)(iVar8 + 3) & 0x3f) != 0);
          }
          else {
            lVar12 = 0;
            uVar6 = uVar5 >> ((ulong)(-iVar8 - 3) & 0x3f);
            if (0x3c3d - uVar11 != 0x40) {
              lVar12 = uVar5 << ((ulong)(iVar8 + 0x43) & 0x3f);
            }
            uVar5 = (ulong)(lVar12 != 0 || uVar10 != 0);
          }
          uVar5 = uVar5 | uVar6;
        }
        goto LAB_0184e784;
      }
      uVar5 = (ulong)((uVar6 & 0x1ffffffffffffff) != 0) | uVar5 << 4 |
              (uVar6 & 0x1fffffffffffffff) >> 0x39;
LAB_0184e794:
      uVar4 = 0;
    }
    else {
      uVar5 = uVar7 & 0xc00000;
      if (uVar5 == 0) {
LAB_0184e770:
        uVar5 = 0;
        uVar9 = 0x7ff;
      }
      else if (uVar5 == 0x400000) {
        uVar5 = -(ulong)((long)uVar14 < 0);
        uVar9 = 0x7ff;
        if ((long)uVar14 < 0) {
          uVar9 = 0x7fe;
        }
      }
      else {
        if ((uVar5 == 0x800000) && (bVar1 != 0)) goto LAB_0184e770;
        uVar5 = 0xffffffffffffffff;
        uVar9 = 0x7fe;
      }
      uVar4 = 0x14;
    }
  }
  bVar2 = uVar5 == 0;
  uVar10 = uVar5;
  if ((uVar5 & 7) == 0) {
    if ((bVar2 || uVar9 != 0) || ((uVar4 >> 4 == 0 && (((uint)uVar7 >> 0xb & 1) == 0))))
    goto LAB_0184e810;
  }
  else {
    uVar11 = uVar7 & 0xc00000;
    uVar4 = uVar4 | 0x10;
    if (uVar11 == 0x400000) {
      uVar10 = uVar5 + 8;
      if ((long)uVar14 < 0) {
        uVar10 = uVar5;
      }
    }
    else {
      if (uVar11 == 0x800000) {
        uVar10 = uVar5 + 8;
        bVar3 = -1 < (long)uVar14;
      }
      else {
        if (uVar11 != 0) goto LAB_0184e8a8;
        uVar10 = uVar5 + 4;
        bVar3 = (uVar5 & 0xf) == 4;
      }
      if (bVar3) {
        uVar10 = uVar5;
      }
    }
LAB_0184e8a8:
    uVar5 = uVar10;
    if (bVar2 || uVar9 != 0) goto LAB_0184e810;
  }
  uVar4 = uVar4 | 8;
  uVar10 = uVar5;
LAB_0184e810:
  if ((uVar10 >> 0x37 & 1) != 0) {
    uVar9 = uVar9 + 1;
    uVar10 = uVar10 & 0xff7fffffffffffff;
    if (uVar9 == 0x7ff) {
      uVar7 = uVar7 & 0xc00000;
      uVar10 = 0;
      if (uVar7 != 0) {
        if (uVar7 == 0x400000) {
          uVar10 = -(ulong)((long)uVar14 < 0);
          if ((long)uVar14 < 0) {
            uVar9 = 0x7fe;
          }
        }
        else if ((uVar7 != 0x800000) || (bVar1 == 0)) {
          uVar10 = 0xffffffffffffffff;
          uVar9 = 0x7fe;
        }
      }
      uVar4 = uVar4 | 0x14;
    }
  }
  uVar10 = uVar10 >> 3;
  uVar7 = uVar10;
  if ((uVar10 != 0) && (uVar7 = uVar10 | 0x8000000000000, uVar9 != 0x7ff)) {
    uVar7 = uVar10;
  }
  if (uVar4 != 0) {
    __sfp_handle_exceptions();
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar7 & 0xfffffffffffff | (uVar9 & 0x7ff) << 0x34 | (ulong)bVar1 << 0x3f;
  return auVar13;
}

