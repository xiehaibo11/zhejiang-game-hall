
int FUN_00e45a84(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = uVar4 + (uVar3 - uVar4 >> 1);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10);
      if (uVar2 == param_2) {
        return uVar1 + 1;
      }
      if (uVar2 < param_2) {
        uVar4 = uVar1 + 1;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

