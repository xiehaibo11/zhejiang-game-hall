
bool SSL_in_before(long param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    return false;
  }
  return *(int *)(param_1 + 0x48) == 0;
}

