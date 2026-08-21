
uint SSL_clear_options(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = ~param_2 & *(uint *)(param_1 + 0x1e4);
  *(uint *)(param_1 + 0x1e4) = uVar1;
  return uVar1;
}

