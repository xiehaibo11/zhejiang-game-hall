
void FUN_00e02d90(long param_1,undefined8 param_2,ulong param_3)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(ulong *)(param_1 + 0x10) = param_3;
  if (param_3 < *(ulong *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  if (*(ulong *)(param_1 + 0x18) == param_3) {
    *(uint *)(param_1 + 0x24) = (uint)(0x40 < *(int *)(param_1 + 0x20));
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

