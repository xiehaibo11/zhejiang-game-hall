
void FUN_00a72038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c6ece0;
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[5]);
  return;
}

