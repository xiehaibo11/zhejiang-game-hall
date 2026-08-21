
void FUN_00fca660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01723b40;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[4]);
  return;
}

