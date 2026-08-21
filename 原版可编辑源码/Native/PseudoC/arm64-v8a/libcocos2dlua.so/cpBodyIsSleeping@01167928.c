
bool cpBodyIsSleeping(long param_1)

{
  return *(long *)(param_1 + 0xa0) != 0;
}

