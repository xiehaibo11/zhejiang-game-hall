
void FUN_009f033c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_016a0f78;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

