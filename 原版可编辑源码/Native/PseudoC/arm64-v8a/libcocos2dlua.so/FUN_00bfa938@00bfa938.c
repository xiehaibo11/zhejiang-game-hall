
void FUN_00bfa938(long param_1,undefined8 *param_2)

{
  FUN_00bfbd3c();
  if (param_2 < (undefined8 *)(*(long *)(param_1 + 0x28) + -8)) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + -8);
    *(undefined8 **)(param_1 + 0x28) = param_2 + 1;
  }
  FUN_00bfe068(param_1);
  return;
}

