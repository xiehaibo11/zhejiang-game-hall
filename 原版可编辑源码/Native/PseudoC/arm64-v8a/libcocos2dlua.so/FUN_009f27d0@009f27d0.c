
void FUN_009f27d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_016a1290;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}

