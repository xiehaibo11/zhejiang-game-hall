
short FUN_01099434(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    uVar3 = uVar2 + uVar1 >> 1;
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + uVar3 * 0x10);
    if (uVar4 == param_2) {
      return *(short *)(*(long *)(param_1 + 0x20) + uVar3 * 0x10 + 8) + 1;
    }
    if (uVar4 < param_2) {
      uVar2 = uVar3 + 1;
      uVar3 = uVar1;
    }
    uVar1 = uVar3;
  } while (uVar2 < uVar1);
  return 0;
}

