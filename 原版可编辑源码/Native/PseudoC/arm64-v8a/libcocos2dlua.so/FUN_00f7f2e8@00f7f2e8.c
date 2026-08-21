
long FUN_00f7f2e8(long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_2;
  if (param_3 == 1) {
    if ((long)*(int *)(param_1 + 0x10) + param_2 < *(ulong *)(param_1 + 8)) {
      iVar2 = *(int *)(param_1 + 0x10) + uVar1;
LAB_00f7f340:
      *(int *)(param_1 + 0x10) = iVar2;
      return (long)iVar2;
    }
  }
  else {
    if (param_3 == 0) {
      if (*(ulong *)(param_1 + 8) <= param_2) {
        return -1;
      }
LAB_00f7f35c:
      *(uint *)(param_1 + 0x10) = uVar1;
      return (long)(int)uVar1;
    }
    uVar3 = *(ulong *)(param_1 + 8);
    if (param_3 == 2) {
      if (param_2 < uVar3) {
        iVar2 = (int)uVar3 + (uVar1 ^ 0xffffffff);
        goto LAB_00f7f340;
      }
    }
    else if (param_2 < uVar3) goto LAB_00f7f35c;
  }
  return -1;
}

