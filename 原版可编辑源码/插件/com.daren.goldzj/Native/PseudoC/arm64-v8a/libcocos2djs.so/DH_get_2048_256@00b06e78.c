
DH * DH_get_2048_256(void)

{
  DH *dh;
  BIGNUM *pBVar1;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
                    /* catch() { ... } // from try @ 00b06cb0 with catch @ 00b06e94 */
    pBVar1 = BN_dup((BIGNUM *)_bignum_dh2048_256_p);
                    /* catch() { ... } // from try @ 00b06d44 with catch @ 00b06e9c */
    dh->p = pBVar1;
    pBVar1 = BN_dup((BIGNUM *)_bignum_dh2048_256_g);
    dh->g = pBVar1;
    pBVar1 = BN_dup((BIGNUM *)_bignum_dh2048_256_q);
    dh->q = pBVar1;
    if (((pBVar1 == (BIGNUM *)0x0) || (dh->p == (BIGNUM *)0x0)) || (dh->g == (BIGNUM *)0x0)) {
      DH_free(dh);
      dh = (DH *)0x0;
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b07008 with catch @ 00b06ee0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b07088 with catch @ 00b06ee0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b07098 with catch @ 00b06ee0
                        */
  return dh;
}

