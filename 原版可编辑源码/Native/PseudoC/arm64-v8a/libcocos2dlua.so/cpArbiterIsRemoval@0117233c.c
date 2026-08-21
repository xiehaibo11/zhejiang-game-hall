
bool cpArbiterIsRemoval(long param_1)

{
  return *(int *)(param_1 + 0x90) == 4;
}

