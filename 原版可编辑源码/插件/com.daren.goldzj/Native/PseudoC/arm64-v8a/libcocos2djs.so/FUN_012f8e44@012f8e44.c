
bool FUN_012f8e44(long param_1,long param_2)

{
  if (*(short *)(param_1 + 0x10) == *(short *)(param_2 + 0x10)) {
    return *(long *)(param_1 + 0x30) == *(long *)(param_2 + 0x30) &&
           *(long *)(param_1 + 0x38) == *(long *)(param_2 + 0x38);
  }
  return false;
}

