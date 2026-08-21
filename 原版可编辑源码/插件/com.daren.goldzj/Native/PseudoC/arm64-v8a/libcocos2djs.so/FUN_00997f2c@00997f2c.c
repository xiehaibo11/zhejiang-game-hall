
long FUN_00997f2c(long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_2;
  if (param_3 == 1) {
    if (*(ulong *)(param_1 + 8) <= (long)*(int *)(param_1 + 0x10) + param_2) {
      return -1;
    }
    iVar2 = *(int *)(param_1 + 0x10) + uVar1;
LAB_00997fb0:
    *(int *)(param_1 + 0x10) = iVar2;
    return (long)iVar2;
  }
  if (param_3 == 0) {
    if (*(ulong *)(param_1 + 8) <= param_2) {
      return -1;
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    if (param_3 == 2) {
      if (uVar3 <= param_2) {
                    /* try { // try from 00997f80 to 00a97fbb has its CatchHandler @ 0099809c */
        return -1;
      }
      iVar2 = (int)uVar3 + (uVar1 ^ 0xffffffff);
      goto LAB_00997fb0;
    }
    if (uVar3 <= param_2) {
      return -1;
    }
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return (long)(int)uVar1;
}

