
undefined8 FUN_00e47c9c(long param_1,int param_2,long *param_3)

{
  *param_3 = 0;
  if (param_2 == 0) {
    return 6;
  }
  if (param_1 != 0) {
    if (param_2 - 1U < *(uint *)(param_1 + 0x248)) {
      *param_3 = (long)*(int *)(*(long *)(param_1 + 600) + (ulong)(param_2 - 1U) * 0x10 + 4);
      return 0;
    }
    return 6;
  }
  return 6;
}

