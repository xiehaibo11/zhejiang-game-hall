
void FUN_00e1430c(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  lVar1 = (long)*(short *)(param_1 + 0x1a);
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x20) + lVar1 * 0x10;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x28) + lVar1;
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x30) + (long)*(short *)(param_1 + 0x18) * 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x40) + lVar1 * 0x10;
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x48) + lVar1 * 0x10;
  }
  *(ulong *)(param_1 + 0xa0) = *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x30;
  return;
}

