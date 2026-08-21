
int DH_check_pub_key(DH *dh,BIGNUM *pub_key,int *codes)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *pBVar2;
  
  *codes = 0;
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return 0;
  }
  BN_CTX_start(ctx);
  a = BN_CTX_get(ctx);
  if ((a != (BIGNUM *)0x0) && (iVar1 = BN_set_word(a,1), iVar1 != 0)) {
    iVar1 = BN_cmp(pub_key,a);
    if (iVar1 < 1) {
      *codes = *codes | 1;
    }
                    /* catch() { ... } // from try @ 00ba6c44 with catch @ 00ba6ffc */
    pBVar2 = BN_copy(a,dh->p);
    if ((pBVar2 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) {
      iVar1 = BN_cmp(pub_key,a);
      if (-1 < iVar1) {
        *codes = *codes | 2;
      }
      if (dh->q != (BIGNUM *)0x0) {
        iVar1 = BN_mod_exp(a,pub_key,dh->q,dh->p,ctx);
        if (iVar1 == 0) goto LAB_00ba7070;
        iVar1 = BN_is_one(a);
        if (iVar1 == 0) {
          *codes = *codes | 4;
        }
      }
      iVar1 = 1;
      goto LAB_00ba7074;
    }
  }
LAB_00ba7070:
  iVar1 = 0;
LAB_00ba7074:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return iVar1;
}

