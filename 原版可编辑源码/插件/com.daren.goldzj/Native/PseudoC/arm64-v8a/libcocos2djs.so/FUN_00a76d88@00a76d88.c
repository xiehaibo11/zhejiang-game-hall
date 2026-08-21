
void FUN_00a76d88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c6f050;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

