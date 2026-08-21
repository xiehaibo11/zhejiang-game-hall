
int FUN_015873f0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(**(long **)(param_1 + 0x18) + 7) >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 >> 1;
}

