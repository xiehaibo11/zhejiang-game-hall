
undefined1  [16] __floatsitf(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar1 = -param_1;
    if (-1 < (int)param_1) {
      uVar1 = param_1;
    }
    uVar5 = (ulong)(byte)(param_1 >> 0x1f);
    iVar2 = 0x403e - (int)LZCOUNT((ulong)uVar1);
    uVar6 = (ulong)iVar2;
    uVar4 = (ulong)uVar1 << ((ulong)(0x402f - iVar2) & 0x3f);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar4 & 0xffffffffffff | (uVar6 & 0x7fff) << 0x30 | uVar5 << 0x3f;
  return auVar3 << 0x40;
}

