
void FUN_0116c4c8(long param_1,long *param_2)

{
  if (*param_2 == 0) {
    FUN_0116c4c8(param_1,param_2[4]);
    FUN_0116c4c8(param_1,param_2[5]);
    param_2[3] = *(long *)(param_1 + 0x38);
    *(long **)(param_1 + 0x38) = param_2;
  }
  return;
}

