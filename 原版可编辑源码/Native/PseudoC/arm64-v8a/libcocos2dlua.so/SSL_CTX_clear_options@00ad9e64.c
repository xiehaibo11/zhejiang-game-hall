
uint SSL_CTX_clear_options(long param_1,uint param_2)

{
  uint uVar1;
  
                    /* try { // try from 00ad9e6c to 00bd9ed7 has its CatchHandler @ 00ad9de4 */
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = uVar1;
  return uVar1;
}

