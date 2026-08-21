
void FUN_00bfe0a0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uint)(param_2 * 4) < uVar1) && (uVar1 - 0x5f < 0xff86)) {
    if ((*(long *)(*(long *)(param_1 + 0x10) + 0x160) == 0) ||
       (param_1 != *(long *)(*(long *)(param_1 + 0x10) + 0x158))) {
      FUN_00bfdcd8(param_1,uVar1 >> 1);
      return;
    }
  }
  return;
}

