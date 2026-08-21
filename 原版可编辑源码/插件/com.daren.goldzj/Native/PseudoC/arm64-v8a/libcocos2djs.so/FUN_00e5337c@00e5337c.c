
uint FUN_00e5337c(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*(ulong *)(param_2 + 8) < *(ulong *)(param_1 + 8));
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_2 + 8)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

