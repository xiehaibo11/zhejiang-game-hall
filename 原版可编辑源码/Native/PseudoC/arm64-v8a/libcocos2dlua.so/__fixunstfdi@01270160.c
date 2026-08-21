
ulong __fixunstfdi(undefined1 param_1 [16])

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1._0_8_;
  uVar1 = fpcr;
  uVar3 = param_1._14_2_ & 0x7fff;
  uVar2 = param_1._8_8_ & 0xffffffffffff;
  uVar4 = (ulong)(ushort)uVar3;
  uVar5 = -(param_1._12_4_ >> 0x1f);
  if (uVar4 < 0x3fff) {
    if (uVar4 == 0) {
      uVar4 = 0;
      if (uVar2 == 0 && uVar7 == 0) {
        return 0;
      }
    }
    else {
      uVar4 = 0;
    }
LAB_012701c0:
    uVar1 = 0x10;
  }
  else {
    if (uVar5 == 0) {
      if (uVar4 < 0x403f) {
        uVar2 = uVar2 | 0x1000000000000;
        if ((long)(0x406f - uVar4) < 0x40) {
          uVar6 = uVar7 << ((ulong)(uVar3 - 0x402f) & 0x3f);
          uVar4 = uVar7 >> ((ulong)(0x406f - uVar3) & 0x3f) |
                  uVar2 << ((ulong)(uVar3 - 0x402f) & 0x3f);
        }
        else {
          uVar6 = 0;
          if (0x406f - uVar4 != 0x40) {
            uVar6 = uVar2 << ((ulong)(uVar3 - 0x3fef) & 0x3f);
          }
          uVar6 = uVar6 | uVar7;
          uVar4 = uVar2 >> ((ulong)(0x402f - uVar3) & 0x3f);
        }
        if (uVar6 == 0) {
          return uVar4;
        }
        goto LAB_012701c0;
      }
LAB_012701d8:
      uVar4 = -(ulong)(uVar5 ^ 1);
    }
    else {
      if (0x403d < uVar4) goto LAB_012701d8;
      uVar4 = 0;
    }
    uVar1 = 1;
  }
  __sfp_handle_exceptions(uVar1);
  return uVar4;
}

