
void FUN_0123645c(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x30) != 0) {
    FUN_0123645c(param_1,*(undefined8 *)(param_2 + 0x28));
    FUN_0123645c(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  if (*param_1 == param_2) {
    *param_1 = 0;
  }
  btAlignedFreeInternal((void *)param_1[1]);
  param_1[1] = param_2;
  return;
}

