
BN_MONT_CTX * BN_MONT_CTX_set_locked(BN_MONT_CTX **pmont,int lock,BIGNUM *mod,BN_CTX *ctx)

{
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  int iVar1;
  BN_MONT_CTX *mont;
  
  CRYPTO_THREAD_read_lock(lock);
  mont = *pmont;
  CRYPTO_THREAD_unlock(lock);
  if ((mont == (BN_MONT_CTX *)0x0) &&
     (mont = CRYPTO_malloc(0x68,"crypto/bn/bn_mont.c",0xd9), mont != (BN_MONT_CTX *)0x0)) {
    a = &mont->RR;
    mont->ri = 0;
    bn_init(a);
    a_00 = &mont->N;
    bn_init(a_00);
    a_01 = &mont->Ni;
    bn_init(a_01);
    mont->n0[0] = 0;
    mont->n0[1] = 0;
    mont->flags = 1;
    iVar1 = BN_MONT_CTX_set(mont,mod,ctx);
    if (iVar1 == 0) {
      BN_clear_free(a);
      BN_clear_free(a_00);
      BN_clear_free(a_01);
      if ((mont->flags & 1) == 0) {
        mont = (BN_MONT_CTX *)0x0;
      }
      else {
                    /* try { // try from 00b0bae8 to 00c0baef has its CatchHandler @ 00b0bbe4 */
                    /* try { // try from 00b0baf0 to 00c0bb13 has its CatchHandler @ 00b0ba80 */
        CRYPTO_free(mont);
        mont = (BN_MONT_CTX *)0x0;
      }
    }
    else {
      CRYPTO_THREAD_write_lock(lock);
      if (*pmont == (BN_MONT_CTX *)0x0) {
        *pmont = mont;
      }
      else {
        BN_clear_free(a);
        BN_clear_free(a_00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b0baf0 with catch @ 00b0ba80
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0bb20 with catch @ 00b0ba80
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0bb50 with catch @ 00b0ba80
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0bb78 with catch @ 00b0ba80
                       catch(type#1 @ 00000000) { ... } // from try @ 00b0bba4 with catch @ 00b0ba80
                        */
        BN_clear_free(a_01);
        if ((mont->flags & 1) != 0) {
          CRYPTO_free(mont);
        }
        mont = *pmont;
      }
      CRYPTO_THREAD_unlock(lock);
    }
  }
  return mont;
}

