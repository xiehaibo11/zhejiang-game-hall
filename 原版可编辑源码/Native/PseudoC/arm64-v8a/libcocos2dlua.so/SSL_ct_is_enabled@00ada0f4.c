
bool SSL_ct_is_enabled(long param_1)

{
  return *(long *)(param_1 + 0x238) != 0;
}

