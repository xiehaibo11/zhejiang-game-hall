
int FUN_00de3ef8(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    iVar1 = 0;
    do {
      if (0 < *(int *)(param_1 + 0x18)) {
        return iVar1;
      }
      FUN_00df4754(param_1);
      iVar1 = iVar1 + 1;
    } while (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

