
BIGNUM * BN_mod_inverse(BIGNUM *ret,BIGNUM *a,BIGNUM *n,BN_CTX *ctx)

{
  BIGNUM *pBVar1;
  int local_14;
  
  pBVar1 = (BIGNUM *)int_bn_mod_inverse();
  if (local_14 != 0) {
    ERR_put_error(3,0x6e,0x6c,"crypto/bn/bn_gcd.c",0x83);
  }
  return pBVar1;
}

