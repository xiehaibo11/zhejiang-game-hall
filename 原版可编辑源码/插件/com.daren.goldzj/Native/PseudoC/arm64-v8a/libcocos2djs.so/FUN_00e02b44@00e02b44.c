
void FUN_00e02b44(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + param_2;
  }
  return;
}

