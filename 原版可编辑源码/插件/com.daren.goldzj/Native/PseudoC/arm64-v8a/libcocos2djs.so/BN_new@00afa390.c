
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_new(void)

{
  BIGNUM *pBVar1;
  
                    /* try { // try from 00afa390 to 00bfa39b has its CatchHandler @ 00afa49c */
  pBVar1 = (BIGNUM *)CRYPTO_zalloc(0x18,"crypto/bn/bn_lib.c",0xe3);
  if (pBVar1 != (BIGNUM *)0x0) {
                    /* try { // try from 00afa3b0 to 00bfa3b7 has its CatchHandler @ 00afa494 */
    pBVar1->flags = 1;
    return pBVar1;
  }
  ERR_put_error(3,0x71,0x41,"crypto/bn/bn_lib.c",0xe4);
  return (BIGNUM *)0x0;
}

