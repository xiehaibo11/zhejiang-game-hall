
void FUN_00aa68c0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x106);
  if ((uVar1 >> 0xe & 1) == 0) {
    *(uint *)(param_1 + 0x106) = uVar1 | 0x4000;
    lVar2 = *(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0xe8);
    *(long *)(lVar2 + 0xe8) = param_1;
  }
  return;
}

