
bool ossl_statem_in_error(long param_1)

{
  return *(int *)(param_1 + 0x48) == 1;
}

