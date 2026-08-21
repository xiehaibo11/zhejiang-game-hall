
uint SSL_CTX_clear_options(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = uVar1;
  return uVar1;
}

