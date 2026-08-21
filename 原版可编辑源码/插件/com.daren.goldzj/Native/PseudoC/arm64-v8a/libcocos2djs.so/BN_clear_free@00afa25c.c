
void BN_clear_free(BIGNUM *a)

{
  uint uVar1;
  
  if (a != (BIGNUM *)0x0) {
    if (a->d != (ulong *)0x0) {
      OPENSSL_cleanse(a->d,(long)a->dmax << 3);
      if (((uint)a->flags >> 1 & 1) == 0) {
                    /* try { // try from 00afa298 to 00bfa2c7 has its CatchHandler @ 00afa300 */
        if (((uint)a->flags >> 3 & 1) == 0) {
          CRYPTO_free(a->d);
        }
        else {
          CRYPTO_secure_free(a->d,"crypto/bn/bn_lib.c",0xae);
        }
      }
    }
    uVar1 = a->flags;
                    /* try { // try from 00afa2c8 to 00bfa31b has its CatchHandler @ 00afa198 */
    OPENSSL_cleanse(a,0x18);
    if ((uVar1 & 1) != 0) {
      CRYPTO_free(a);
      return;
    }
  }
  return;
}

