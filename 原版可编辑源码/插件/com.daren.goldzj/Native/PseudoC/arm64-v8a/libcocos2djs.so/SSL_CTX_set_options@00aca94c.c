
uint SSL_CTX_set_options(long param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 0x108) | param_2;
                    /* try { // try from 00aca954 to 00bca957 has its CatchHandler @ 00acabf0 */
  *(uint *)(param_1 + 0x108) = param_2;
  return param_2;
}

