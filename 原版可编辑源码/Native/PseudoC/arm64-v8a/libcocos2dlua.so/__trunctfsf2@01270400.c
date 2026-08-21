
uint __trunctfsf2(undefined1 param_1 [16])

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = param_1._8_8_;
  uVar1 = fpcr;
  uVar12 = uVar13 >> 0x30 & 0x7fff;
  uVar8 = (uVar13 & 0xffffffffffff) << 3;
  uVar7 = param_1._0_8_ >> 0x3d;
  uVar6 = uVar8 | uVar7;
  uVar5 = param_1._0_8_ << 3;
  uVar11 = (uint)(byte)(param_1[0xf] >> 7);
  if ((uVar12 + 1 & 0x7fff) < 2) {
    if (uVar12 == 0) {
      uVar7 = (ulong)(uVar6 != 0 || uVar5 != 0);
LAB_01270588:
      lVar10 = 0;
      goto LAB_01270598;
    }
    if (uVar6 == 0 && uVar5 == 0) {
      uVar7 = 0;
      lVar10 = 0xff;
      goto LAB_01270598;
    }
    uVar4 = 0;
    if (uVar12 == 0x7fff) {
      uVar4 = (param_1._12_4_ & 0xffff) >> 0xf ^ 1;
    }
    lVar10 = 0xff;
    uVar7 = (uVar13 & 0xffffffffffff) >> 0x16 & 0xfffffffffffffff8 | 0x2000000;
  }
  else {
    lVar10 = uVar12 - 0x3f80;
    if (lVar10 < 0xff) {
      if (lVar10 < 1) {
        if (lVar10 < -0x17) {
          uVar7 = 1;
        }
        else {
          uVar6 = uVar6 | 0x8000000000000;
          iVar9 = (int)lVar10;
          if ((long)(0x3fda - uVar12) < 0x40) {
            uVar7 = uVar5 >> ((ulong)(0x5a - iVar9) & 0x3f) |
                    uVar6 << ((ulong)(iVar9 - 0x1a) & 0x3f) |
                    (ulong)(uVar5 << ((ulong)(iVar9 - 0x1a) & 0x3f) != 0);
          }
          else {
            lVar10 = 0;
            if (0x3fda - uVar12 != 0x40) {
              lVar10 = uVar6 << ((ulong)(iVar9 + 0x26) & 0x3f);
            }
            uVar7 = (ulong)(lVar10 != 0 || uVar5 != 0) | uVar6 >> ((ulong)(0x1a - iVar9) & 0x3f);
          }
        }
        goto LAB_01270588;
      }
      uVar7 = (ulong)(uVar5 != 0 || ((uVar8 & 0x1ffffff) != 0 || uVar7 != 0)) |
              (uVar13 & 0xffffffffffff) >> 0x16;
LAB_01270598:
      uVar4 = 0;
    }
    else {
      uVar7 = uVar1 & 0xc00000;
      if (uVar7 == 0) {
LAB_01270574:
        uVar7 = 0;
        lVar10 = 0xff;
      }
      else if (uVar7 == 0x400000) {
        uVar7 = -(ulong)((long)uVar13 < 0);
        lVar10 = 0xff;
        if ((long)uVar13 < 0) {
          lVar10 = 0xfe;
        }
      }
      else {
        if ((uVar7 == 0x800000) && (uVar11 != 0)) goto LAB_01270574;
        uVar7 = 0xffffffffffffffff;
        lVar10 = 0xfe;
      }
      uVar4 = 0x14;
    }
  }
  bVar2 = uVar7 == 0;
  uVar8 = uVar7;
  if ((uVar7 & 7) == 0) {
    if ((bVar2 || lVar10 != 0) || ((uVar4 >> 4 == 0 && (((uint)uVar1 >> 0xb & 1) == 0))))
    goto LAB_01270614;
  }
  else {
    uVar5 = uVar1 & 0xc00000;
    uVar4 = uVar4 | 0x10;
    if (uVar5 == 0x400000) {
      uVar8 = uVar7 + 8;
      if ((long)uVar13 < 0) {
        uVar8 = uVar7;
      }
    }
    else {
      if (uVar5 == 0x800000) {
        uVar8 = uVar7 + 8;
        bVar3 = -1 < (long)uVar13;
      }
      else {
        if (uVar5 != 0) goto LAB_012706ac;
        uVar8 = uVar7 + 4;
        bVar3 = (uVar7 & 0xf) == 4;
      }
      if (bVar3) {
        uVar8 = uVar7;
      }
    }
LAB_012706ac:
    uVar7 = uVar8;
    if (bVar2 || lVar10 != 0) goto LAB_01270614;
  }
  uVar4 = uVar4 | 8;
  uVar8 = uVar7;
LAB_01270614:
  if (((uint)uVar8 >> 0x1a & 1) != 0) {
    lVar10 = lVar10 + 1;
    uVar8 = uVar8 & 0xfffffffffbffffff;
    if (lVar10 == 0xff) {
      uVar1 = uVar1 & 0xc00000;
      uVar8 = 0;
      if (uVar1 != 0) {
        if (uVar1 == 0x400000) {
          uVar8 = -(ulong)((long)uVar13 < 0);
          if ((long)uVar13 < 0) {
            lVar10 = 0xfe;
          }
        }
        else if ((uVar1 != 0x800000) || (uVar11 == 0)) {
          uVar8 = 0xffffffffffffffff;
          lVar10 = 0xfe;
        }
      }
      uVar4 = uVar4 | 0x14;
    }
  }
  uVar8 = uVar8 >> 3;
  uVar7 = uVar8;
  if ((uVar8 != 0) && (uVar7 = uVar8 | 0x400000, lVar10 != 0xff)) {
    uVar7 = uVar8;
  }
  if (uVar4 != 0) {
    __sfp_handle_exceptions();
  }
  return (uint)uVar7 & 0x7fffff | ((uint)lVar10 & 0xff) << 0x17 | uVar11 << 0x1f;
}

