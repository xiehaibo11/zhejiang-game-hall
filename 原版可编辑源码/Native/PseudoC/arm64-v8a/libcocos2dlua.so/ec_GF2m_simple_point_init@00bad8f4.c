
undefined8 ec_GF2m_simple_point_init(long param_1)

{
  BIGNUM *pBVar1;
  undefined8 uVar2;
  
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 8) = pBVar1;
                    /* try { // try from 00bad90c to 00cad953 has its CatchHandler @ 00bad90c
                       catch() { ... } // from try @ 00bad90c with catch @ 00bad90c
                       catch() { ... } // from try @ 00badb5c with catch @ 00bad90c */
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x10) = pBVar1;
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x18) = pBVar1;
  if (((*(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) || (pBVar1 == (BIGNUM *)0x0)) ||
     (*(long *)(param_1 + 0x10) == 0)) {
    BN_free(*(BIGNUM **)(param_1 + 8));
    BN_free(*(BIGNUM **)(param_1 + 0x10));
    BN_free(*(BIGNUM **)(param_1 + 0x18));
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
                    /* try { // try from 00bad954 to 00cad95b has its CatchHandler @ 00badc08 */
  return uVar2;
}

