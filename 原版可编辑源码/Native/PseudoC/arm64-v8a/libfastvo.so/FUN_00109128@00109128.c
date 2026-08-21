
int FUN_00109128(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  
  if (0x7fff < (int)param_1) {
    uVar2 = param_1 >> 0x10;
    uVar4 = uVar2;
    if (uVar2 == 0) {
      uVar4 = param_1;
    }
    uVar6 = (ushort)(uVar2 != 0);
    uVar1 = uVar6 << 4 | 8;
    uVar2 = uVar4 >> 8;
    if (uVar4 < 0x100) {
      uVar1 = uVar6 << 4;
      uVar2 = uVar4;
    }
    uVar6 = uVar1 | 4;
    uVar4 = uVar2 >> 4;
    if (uVar2 < 0x10) {
      uVar6 = uVar1;
      uVar4 = uVar2;
    }
    uVar1 = uVar6 | 2;
    uVar2 = uVar4 >> 2;
    if (uVar4 < 4) {
      uVar1 = uVar6;
      uVar2 = uVar4;
    }
    if (1 < uVar2) {
      uVar1 = uVar1 + 1;
    }
    uVar4 = (uint)(short)uVar1;
    iVar5 = 0x6488;
    if (uVar4 < 0x1d) {
      iVar5 = (int)(short)(param_1 >> (ulong)(uVar4 - 0xe & 0x1f));
      sVar3 = 0;
      if (iVar5 != 0) {
        sVar3 = (short)((0x7fff << (ulong)(0x1d - uVar4 & 0x1f)) / iVar5);
      }
      iVar5 = (int)sVar3;
      iVar5 = 0x6488 - ((((int)((((int)((((int)((iVar5 * 0x2690 + 0x8000U & 0xffff0000) + 0xd1590000
                                               ) >> 0x10) * iVar5 * 2 + 0x8000U & 0xffff0000) -
                                       0x150000) >> 0x10) * iVar5 * 2 + 0x8000U & 0xffff0000) +
                               0x7fff0000) >> 0x10) * iVar5 + 0x4000) * 2 >> 0x11);
    }
    return iVar5;
  }
  iVar5 = (int)(short)param_1;
  return (int)((((int)((((int)((((int)((iVar5 * 0x2690 + 0x8000U & 0xffff0000) + 0xd1590000) >> 0x10
                                ) * iVar5 * 2 + 0x8000U & 0xffff0000) - 0x150000) >> 0x10) * iVar5 *
                        2 + 0x8000U & 0xffff0000) + 0x7fff0000) >> 0x10) * iVar5 + 0x4000U >> 0xf)
              << 0x10) >> 0x11;
}

