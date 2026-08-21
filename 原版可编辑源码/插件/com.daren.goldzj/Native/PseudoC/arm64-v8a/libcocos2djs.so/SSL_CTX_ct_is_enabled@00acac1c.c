
bool SSL_CTX_ct_is_enabled(long param_1)

{
  return *(long *)(param_1 + 400) != 0;
}

