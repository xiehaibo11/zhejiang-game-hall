
bool cpSpaceIsLocked(long param_1)

{
  return *(int *)(param_1 + 0xa0) != 0;
}

