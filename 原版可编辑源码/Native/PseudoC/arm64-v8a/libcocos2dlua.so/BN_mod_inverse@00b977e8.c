
BIGNUM * BN_mod_inverse(BIGNUM *ret,BIGNUM *a,BIGNUM *n,BN_CTX *ctx)

{
  BIGNUM *pBVar1;
  int local_14;
  
  pBVar1 = (BIGNUM *)int_bn_mod_inverse();
  if (local_14 != 0) {
                    /* try { // try from 00b97818 to 00c9789f has its CatchHandler @ 00b97818
                       catch() { ... } // from try @ 00b97818 with catch @ 00b97818
                       catch() { ... } // from try @ 00b978c4 with catch @ 00b97818 */
    ERR_put_error(3,0x6e,0x6c,"crypto/bn/bn_gcd.c",0x83);
  }
  return pBVar1;
}

