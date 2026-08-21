
bool FUN_011a394c(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x70)) {
    return *(long *)(*(long *)(param_1 + 0x68) + (long)(int)param_2 * 8) != 0;
  }
  return false;
}

