
undefined8 FUN_00a19cb0(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ushort *puVar5;
  
  uVar1 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar1;
    return 1;
  }
  uVar4 = 0xffffffff;
  if ((0xa0 < uVar1) && (uVar1 != 0xff)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar2 = param_3[1];
    if (bVar2 < 0xa1) {
      return 0xffffffff;
    }
    if (bVar2 == 0xff) {
      return 0xffffffff;
    }
    if (8 < (uVar1 + 0x5f & 0xff) && 0x47 < (uVar1 + 0x50 & 0xff)) {
      return 0xffffffff;
    }
    if (0x5d < (bVar2 + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    iVar3 = (bVar2 ^ 0x80) + (uVar1 ^ 0x80) * 0x5e;
    uVar1 = iVar3 - 0xc3f;
    if (uVar1 < 0x582) {
      if (0x33e < uVar1) {
        return 0xffffffff;
      }
      puVar5 = (ushort *)(&DAT_01312c68 + (ulong)uVar1 * 2);
    }
    else {
      if (0xff8 < uVar1 >> 1) {
        return 0xffffffff;
      }
      puVar5 = (ushort *)(&DAT_013132e6 + (ulong)(iVar3 - 0x11c1) * 2);
    }
    if (*puVar5 == 0xfffd) {
      return 0xffffffff;
    }
    uVar4 = 2;
    *param_2 = (uint)*puVar5;
  }
  return uVar4;
}

