
int FUN_00a1a08c(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      param_1 = *(long *)(param_1 + 0x28);
      iVar1 = iVar1 + 1;
    } while (param_1 != 0);
    return iVar1;
  }
  return 0;
}

