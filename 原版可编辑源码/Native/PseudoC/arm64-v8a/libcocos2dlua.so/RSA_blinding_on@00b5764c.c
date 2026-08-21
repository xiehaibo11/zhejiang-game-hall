
int RSA_blinding_on(RSA *rsa,BN_CTX *ctx)

{
  uint uVar1;
  BN_BLINDING *pBVar2;
  
  if ((BN_BLINDING *)rsa->bignum_data != (BN_BLINDING *)0x0) {
    BN_BLINDING_free((BN_BLINDING *)rsa->bignum_data);
    uVar1 = *(uint *)&(rsa->ex_data).field_0xc;
    rsa->bignum_data = (char *)0x0;
    *(uint *)&(rsa->ex_data).field_0xc = uVar1 & 0xffffff77 | 0x80;
  }
  pBVar2 = RSA_setup_blinding(rsa,ctx);
  rsa->bignum_data = (char *)pBVar2;
  if (pBVar2 != (BN_BLINDING *)0x0) {
    *(uint *)&(rsa->ex_data).field_0xc = *(uint *)&(rsa->ex_data).field_0xc & 0xffffff77 | 8;
  }
  return (int)(pBVar2 != (BN_BLINDING *)0x0);
}

