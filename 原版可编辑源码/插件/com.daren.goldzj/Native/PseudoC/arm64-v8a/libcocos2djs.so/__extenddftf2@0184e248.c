
undefined1  [16] __extenddftf2(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = fpcr;
  uVar2 = param_1 >> 0x34 & 0x7ff;
  uVar4 = param_1 & 0xfffffffffffff;
  if ((uVar2 + 1 & 0x7ff) < 2) {
    if (uVar2 == 0) {
      if (uVar4 == 0) {
        uVar3 = 0;
        uVar2 = 0;
      }
      else {
        uVar5 = (uint)LZCOUNT(uVar4);
        if (uVar5 < 0xf) {
          uVar3 = uVar4 >> ((ulong)(0xf - uVar5) & 0x3f);
          uVar4 = uVar4 << ((ulong)(uVar5 + 0x31) & 0x3f);
        }
        else {
          uVar3 = uVar4 << ((ulong)(uVar5 - 0xf) & 0x3f);
          uVar4 = 0;
        }
        uVar2 = (ulong)(int)(0x3c0c - uVar5);
      }
    }
    else {
      if (uVar4 != 0) {
        uVar5 = (uint)(uVar4 >> 0x33) ^ 1;
        uVar3 = uVar4 >> 4 | 0x800000000000;
        uVar4 = param_1 << 0x3c;
        uVar2 = 0x7fff;
        goto LAB_0184e30c;
      }
      uVar3 = 0;
      uVar2 = 0x7fff;
    }
  }
  else {
    uVar3 = uVar4 >> 4;
    uVar2 = uVar2 + 0x3c00;
    uVar4 = param_1 << 0x3c;
  }
  uVar5 = 0;
LAB_0184e30c:
  if (uVar5 != 0) {
    __sfp_handle_exceptions(1);
  }
  auVar6._8_8_ = uVar3 & 0xffffffffffff | (uVar2 & 0x7fff) << 0x30 | param_1 & 0x8000000000000000;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

