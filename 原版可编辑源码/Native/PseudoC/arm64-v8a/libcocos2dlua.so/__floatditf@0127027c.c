
undefined1  [16] __floatditf(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (param_1 == 0) {
    uVar4 = 0;
    lVar2 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    iVar3 = -(int)((long)param_1 >> 0x3f);
    uVar6 = (ulong)(byte)iVar3;
    uVar1 = -param_1;
    if (iVar3 == 0) {
      uVar1 = param_1;
    }
    iVar3 = -(int)LZCOUNT(uVar1) + 0x403e;
    uVar5 = (ulong)iVar3;
    if ((long)(0x406f - uVar5) < 0x40) {
      uVar4 = uVar1 >> ((ulong)(-(int)LZCOUNT(uVar1) + 0xf) & 0x3f);
      lVar2 = uVar1 << ((ulong)(0x406f - iVar3) & 0x3f);
    }
    else {
      uVar4 = uVar1 << ((ulong)(0x402f - iVar3) & 0x3f);
      lVar2 = 0;
    }
  }
  auVar7._8_8_ = uVar4 & 0xffffffffffff | (uVar5 & 0x7fff) << 0x30 | uVar6 << 0x3f;
  auVar7._0_8_ = lVar2;
  return auVar7;
}

