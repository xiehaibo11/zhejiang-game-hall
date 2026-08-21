
bool BN_is_negative(long param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}

