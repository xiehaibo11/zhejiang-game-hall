
bool SSL_is_init_finished(long param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    return false;
  }
  return *(int *)(param_1 + 0x5c) == 1;
}

