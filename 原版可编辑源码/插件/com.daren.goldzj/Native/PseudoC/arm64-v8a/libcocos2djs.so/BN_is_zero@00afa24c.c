
bool BN_is_zero(long param_1)

{
  return *(int *)(param_1 + 8) == 0;
}

