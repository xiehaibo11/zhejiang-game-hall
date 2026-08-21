
undefined4 FUN_00c0eb90(long *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar2 = (param_2 & 0xffffffff) * 0x18;
  uVar1 = *(uint *)(lVar3 + lVar2);
  while (uVar1 >> 0x1c == 8) {
    lVar2 = (ulong)(ushort)uVar1 * 0x18;
    uVar1 = *(uint *)(lVar3 + lVar2);
  }
  if (uVar1 >> 0x1c < 6) {
    return *(undefined4 *)(lVar3 + lVar2 + 4);
  }
  return 0xffffffff;
}

