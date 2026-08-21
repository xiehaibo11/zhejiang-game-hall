
long gztell(long param_1)

{
  if (param_1 == 0) {
    return -1;
  }
  if ((*(int *)(param_1 + 0x18) != 0x79b1) && (*(int *)(param_1 + 0x18) != 0x1c4f)) {
    return -1;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    return *(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x10);
  }
  return *(long *)(param_1 + 0x10);
}

