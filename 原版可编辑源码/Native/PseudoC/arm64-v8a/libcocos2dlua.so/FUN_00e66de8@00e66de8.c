
void FUN_00e66de8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_016f3968;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}

