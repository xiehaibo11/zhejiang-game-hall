
void FUN_00c938a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01c8dda0;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

