
uint SSL_set_options(long param_1,uint param_2)

{
  param_2 = *(uint *)(param_1 + 0x1e4) | param_2;
                    /* try { // try from 00ad9e58 to 00bd9e6b has its CatchHandler @ 00ad9eb8 */
  *(uint *)(param_1 + 0x1e4) = param_2;
  return param_2;
}

