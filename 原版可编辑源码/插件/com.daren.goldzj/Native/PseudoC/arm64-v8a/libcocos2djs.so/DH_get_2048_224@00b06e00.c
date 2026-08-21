
DH * DH_get_2048_224(void)

{
  DH *dh;
  BIGNUM *pBVar1;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
                    /* try { // try from 00b06e18 to 00c06edf has its CatchHandler @ 00b06bbc */
    pBVar1 = BN_dup((BIGNUM *)_bignum_dh2048_224_p);
    dh->p = pBVar1;
    pBVar1 = BN_dup((BIGNUM *)_bignum_dh2048_224_g);
    dh->g = pBVar1;
    pBVar1 = BN_dup((BIGNUM *)_bignum_dh2048_224_q);
    dh->q = pBVar1;
    if (((pBVar1 == (BIGNUM *)0x0) || (dh->p == (BIGNUM *)0x0)) || (dh->g == (BIGNUM *)0x0)) {
      DH_free(dh);
      dh = (DH *)0x0;
    }
  }
  return dh;
}

