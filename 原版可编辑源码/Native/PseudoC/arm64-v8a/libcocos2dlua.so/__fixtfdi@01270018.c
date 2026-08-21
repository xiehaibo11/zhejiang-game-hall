
ulong __fixtfdi(undefined1 param_1 [16])

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = param_1._8_8_;
  uVar8 = param_1._0_8_;
  uVar1 = fpcr;
  uVar4 = param_1._14_2_ & 0x7fff;
  uVar3 = uVar9 & 0xffffffffffff;
  uVar5 = (ulong)(ushort)uVar4;
  if (uVar5 < 0x3fff) {
    if (uVar5 == 0) {
      uVar3 = uVar3 | uVar8;
      uVar7 = 0;
      goto LAB_0127009c;
    }
    uVar7 = 0;
  }
  else {
    if (uVar5 < 0x403e) {
      uVar3 = uVar3 | 0x1000000000000;
      if ((long)(0x406f - uVar5) < 0x40) {
        uVar6 = uVar8 << ((ulong)(uVar4 - 0x402f) & 0x3f);
        uVar7 = uVar8 >> ((ulong)(0x406f - uVar4) & 0x3f) |
                uVar3 << ((ulong)(uVar4 - 0x402f) & 0x3f);
      }
      else {
        uVar6 = 0;
        if (0x406f - uVar5 != 0x40) {
          uVar6 = uVar3 << ((ulong)(uVar4 - 0x3fef) & 0x3f);
        }
        uVar6 = uVar6 | uVar8;
        uVar7 = uVar3 >> ((ulong)(0x402f - uVar4) & 0x3f);
      }
      if (uVar6 == 0) {
        if (-1 < (long)uVar9) {
          return uVar7;
        }
        iVar2 = 0;
      }
      else {
        if (-1 < (long)uVar9) goto LAB_01270148;
        iVar2 = 0x10;
      }
      uVar7 = -uVar7;
      if (iVar2 == 0) {
        return uVar7;
      }
      goto LAB_01270130;
    }
    uVar7 = 0x7fffffffffffffff - ((long)uVar9 >> 0x3f);
    if (((uVar5 != 0x403e) || (-1 < (long)uVar9)) || (uVar8 >> 0x31 != 0 || uVar3 != 0)) {
      iVar2 = 1;
      goto LAB_01270130;
    }
    uVar3 = uVar8 << 0xf;
LAB_0127009c:
    if (uVar3 == 0) {
      return uVar7;
    }
  }
LAB_01270148:
  iVar2 = 0x10;
LAB_01270130:
  __sfp_handle_exceptions(iVar2);
  return uVar7;
}

