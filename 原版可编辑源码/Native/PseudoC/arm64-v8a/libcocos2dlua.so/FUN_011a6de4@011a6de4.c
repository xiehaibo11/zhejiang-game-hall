
void FUN_011a6de4(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x10); plVar1 != (long *)(param_1 + 0x10);
      plVar1 = (long *)*plVar1) {
    if (*(int *)(plVar1 + -2) == 0x10) {
      FUN_011a6e70(plVar1 + -4);
    }
  }
  if (*(int *)(param_1 + 0x228) != -1) {
    FUN_011a2d5c();
    *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x22c) != -1) {
    FUN_011a2d5c();
    *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  }
  return;
}

