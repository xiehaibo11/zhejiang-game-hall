
void RSA_security_bits(long param_1)

{
  int iVar1;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x20));
  BN_security_bits(iVar1,0xffffffff);
  return;
}

