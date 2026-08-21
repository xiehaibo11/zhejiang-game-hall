
void FUN_007c405c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01697cf8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}

