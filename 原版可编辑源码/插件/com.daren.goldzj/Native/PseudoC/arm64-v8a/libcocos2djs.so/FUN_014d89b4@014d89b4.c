
void FUN_014d89b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_01cc43a8;
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}

