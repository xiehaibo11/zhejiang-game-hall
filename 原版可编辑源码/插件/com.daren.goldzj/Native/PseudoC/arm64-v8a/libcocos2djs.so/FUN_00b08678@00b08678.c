
DSA_SIG * FUN_00b08678(uchar *param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  BIGNUM *ret;
  BIGNUM *r;
  BIGNUM *pBVar3;
  DSA_SIG *a;
  BN_CTX *ctx;
  BIGNUM *local_58;
  
  local_58 = (BIGNUM *)0x0;
                    /* try { // try from 00b086a4 to 00c0870f has its CatchHandler @ 00b0878c */
  ret = BN_new();
  r = BN_new();
  ctx = (BN_CTX *)0x0;
  iVar1 = 3;
  a = (DSA_SIG *)0x0;
  if ((ret != (BIGNUM *)0x0) && (r != (BIGNUM *)0x0)) {
    if ((*(long *)(param_3 + 0x10) == 0) ||
       ((*(long *)(param_3 + 0x18) == 0 || (*(long *)(param_3 + 0x20) == 0)))) {
      ctx = (BN_CTX *)0x0;
      a = (DSA_SIG *)0x0;
      iVar1 = 0x65;
    }
    else {
      a = DSA_SIG_new();
      if (a == (DSA_SIG *)0x0) {
        ctx = (BN_CTX *)0x0;
      }
      else {
        pBVar3 = BN_new();
        a->r = pBVar3;
        pBVar3 = BN_new();
        ctx = (BN_CTX *)0x0;
        iVar1 = 3;
        a->s = pBVar3;
        if ((pBVar3 == (BIGNUM *)0x0) || (a->r == (BIGNUM *)0x0)) goto LAB_00b08850;
        ctx = BN_CTX_new();
                    /* try { // try from 00b08714 to 00c0871b has its CatchHandler @ 00b08760 */
                    /* try { // try from 00b0871c to 00c087a7 has its CatchHandler @ 00b085f4 */
        if ((ctx != (BN_CTX *)0x0) &&
           (iVar1 = FUN_00b08c08(param_3,ctx,&local_58,a->r,param_1,param_2), iVar1 != 0)) {
          do {
            iVar2 = BN_num_bits(*(BIGNUM **)(param_3 + 0x18));
            iVar1 = iVar2 + 0xe;
            if (-1 < iVar2 + 7) {
              iVar1 = iVar2 + 7;
            }
            if (iVar1 >> 3 < param_2) {
                    /* catch() { ... } // from try @ 00b08714 with catch @ 00b08760 */
              iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x18));
              param_2 = iVar1 + 0xe;
              if (-1 < iVar1 + 7) {
                param_2 = iVar1 + 7;
              }
              param_2 = param_2 >> 3;
            }
                    /* catch() { ... } // from try @ 00b08650 with catch @ 00b08778 */
            pBVar3 = BN_bin2bn(param_1,param_2,ret);
                    /* catch() { ... } // from try @ 00b086a4 with catch @ 00b0878c */
            if (((((pBVar3 == (BIGNUM *)0x0) ||
                  (iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_3 + 0x30),a->r,
                                      *(BIGNUM **)(param_3 + 0x18),ctx), iVar1 == 0)) ||
                 (iVar1 = BN_add(a->s,r,ret), iVar1 == 0)) ||
                ((iVar1 = BN_cmp(a->s,*(BIGNUM **)(param_3 + 0x18)), 0 < iVar1 &&
                 (iVar1 = BN_sub(a->s,a->s,*(BIGNUM **)(param_3 + 0x18)), iVar1 == 0)))) ||
               (pBVar3 = local_58,
               iVar1 = BN_mod_mul(a->s,a->s,local_58,*(BIGNUM **)(param_3 + 0x18),ctx), iVar1 == 0))
            goto LAB_00b088bc;
            iVar1 = BN_is_zero(a->r);
            if ((iVar1 == 0) && (iVar1 = BN_is_zero(a->s), iVar1 == 0)) goto LAB_00b08878;
            iVar2 = FUN_00b08c08(param_3,ctx,&local_58,a->r,param_1,param_2);
            iVar1 = 3;
          } while (iVar2 != 0);
          goto LAB_00b08850;
        }
      }
LAB_00b088bc:
      iVar1 = 3;
    }
  }
LAB_00b08850:
  ERR_put_error(10,0x70,iVar1,"crypto/dsa/dsa_ossl.c",0x74);
  DSA_SIG_free(a);
  a = (DSA_SIG *)0x0;
  pBVar3 = local_58;
LAB_00b08878:
  BN_CTX_free(ctx);
  BN_clear_free(ret);
  BN_clear_free(r);
  BN_clear_free(pBVar3);
  return a;
}

