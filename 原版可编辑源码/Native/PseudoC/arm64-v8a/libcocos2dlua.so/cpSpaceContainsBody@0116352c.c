
bool cpSpaceContainsBody(long param_1,long param_2)

{
  return *(long *)(param_2 + 0x80) == param_1;
}

