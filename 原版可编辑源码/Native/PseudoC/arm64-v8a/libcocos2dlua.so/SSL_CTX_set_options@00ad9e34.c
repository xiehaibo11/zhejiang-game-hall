
uint SSL_CTX_set_options(long param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 0x108) | param_2;
  *(uint *)(param_1 + 0x108) = param_2;
  return param_2;
}

