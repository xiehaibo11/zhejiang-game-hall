
void RSA_blinding_off(RSA *rsa)

{
  uint uVar1;
  
  BN_BLINDING_free((BN_BLINDING *)rsa->bignum_data);
  uVar1 = *(uint *)&(rsa->ex_data).field_0xc;
  rsa->bignum_data = (char *)0x0;
  *(uint *)&(rsa->ex_data).field_0xc = uVar1 & 0xffffff77 | 0x80;
  return;
}

