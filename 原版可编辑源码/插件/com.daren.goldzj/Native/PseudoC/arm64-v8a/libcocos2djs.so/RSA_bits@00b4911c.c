
int RSA_bits(long param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x20));
  return iVar1;
}

