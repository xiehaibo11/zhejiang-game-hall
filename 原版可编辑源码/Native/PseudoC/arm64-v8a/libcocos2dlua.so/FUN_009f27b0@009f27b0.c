
void FUN_009f27b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_016a1290;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

