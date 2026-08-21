
int FUN_011403a0(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    iVar1 = 0;
    do {
      if (0 < *(int *)(param_1 + 0x18)) {
        return iVar1;
      }
      FUN_01150bfc(param_1);
      iVar1 = iVar1 + 1;
    } while (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

