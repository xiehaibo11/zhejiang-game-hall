
undefined8 FUN_00a15550(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  bVar1 = *param_3;
  if ((0x3d < bVar1 - 0x30) &&
     ((0x2b < bVar1 || ((1L << ((ulong)bVar1 & 0x3f) & 0xec400000000U) == 0)))) {
    return 0xffffffff;
  }
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3[1] - 0x21 < 0x5e) {
    iVar2 = (uint)param_3[1] + (uint)bVar1 * 0x5e;
    uVar3 = iVar2 - 0xc3f;
    if (uVar3 < 0x1d6) {
      if (0xae < uVar3) {
        return 0xffffffff;
      }
      uVar3 = iVar2 - 0xc9d;
      puVar4 = &DAT_0130b5c8;
    }
    else if (uVar3 < 0x2f0) {
      if (0x291 < uVar3) {
        return 0xffffffff;
      }
      uVar3 = iVar2 - 0xe15;
      puVar4 = &DAT_0130b66a;
    }
    else if (uVar3 < 0x582) {
      if (0x402 < uVar3) {
        return 0xffffffff;
      }
      uVar3 = iVar2 - 0xf2f;
      puVar4 = &DAT_0130b7e2;
    }
    else {
      if (0x1c2a < uVar3) {
        return 0xffffffff;
      }
      uVar3 = iVar2 - 0x11c1;
      puVar4 = &DAT_0130ba08;
    }
    if (*(ushort *)(puVar4 + (ulong)uVar3 * 2) != 0xfffd) {
      *param_2 = (uint)*(ushort *)(puVar4 + (ulong)uVar3 * 2);
      return 2;
    }
  }
  return 0xffffffff;
}

