
void BN_free(BIGNUM *a)

{
  uint uVar1;
  
  if (a == (BIGNUM *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 00afa460 with catch @ 00afa31c */
  if (((uint)a->flags >> 1 & 1) == 0) {
    if (((uint)a->flags >> 3 & 1) != 0) {
      CRYPTO_secure_free(a->d,"crypto/bn/bn_lib.c",0xae);
      uVar1 = a->flags;
      goto joined_r0x00afa364;
    }
    CRYPTO_free(a->d);
  }
  uVar1 = a->flags;
joined_r0x00afa364:
  if ((uVar1 & 1) == 0) {
    a->flags = uVar1 | 0x8000;
    a->d = (ulong *)0x0;
                    /* try { // try from 00afa350 to 00bfa36f has its CatchHandler @ 00afa498 */
    return;
  }
                    /* try { // try from 00afa37c to 00bfa37f has its CatchHandler @ 00afa490 */
  CRYPTO_free(a);
  return;
}

