
void cpSpaceLock(long param_1)

{
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  return;
}

