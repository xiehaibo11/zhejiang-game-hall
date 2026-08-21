
undefined2 FUN_00e76e28(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    return 0;
  }
  if (param_2 < *(int *)(param_1 + 0x1c) + *(uint *)(param_1 + 0x18)) {
    return *(undefined2 *)(*(long *)(param_1 + 0x20) + (ulong)param_2 * 2);
  }
  return 0;
}

