
int DSA_generate_key(DSA *a)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *p;
  code *UNRECOVERED_JUMPTABLE;
  BIGNUM *rnd;
  BIGNUM *r;
  
  UNRECOVERED_JUMPTABLE = (code *)a->method_mont_p->n0[1];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be41d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(a);
    return iVar1;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    iVar1 = 0;
    r = (BIGNUM *)0x0;
    rnd = (BIGNUM *)0x0;
  }
  else {
    rnd = a->pub_key;
    if ((rnd == (BIGNUM *)0x0) && (rnd = (BIGNUM *)BN_secure_new(), rnd == (BIGNUM *)0x0)) {
LAB_00be428c:
      iVar1 = 0;
      r = (BIGNUM *)0x0;
    }
    else {
      do {
        iVar1 = BN_rand_range(rnd,a->p);
        if (iVar1 == 0) goto LAB_00be428c;
        iVar1 = BN_is_zero(rnd);
      } while (iVar1 != 0);
      r = a->g;
      if ((r != (BIGNUM *)0x0) || (r = BN_new(), r != (BIGNUM *)0x0)) {
        p = BN_new();
        iVar1 = 0;
        if (p == (BIGNUM *)0x0) goto LAB_00be4294;
        BN_with_flags(p,rnd,4);
        iVar1 = BN_mod_exp(r,a->q,p,*(BIGNUM **)&a->write_params,ctx);
        BN_free(p);
        if (iVar1 != 0) {
          iVar1 = 1;
          a->g = r;
          a->pub_key = rnd;
          goto LAB_00be4294;
        }
      }
      iVar1 = 0;
    }
  }
LAB_00be4294:
  if (r != a->g) {
    BN_free(r);
  }
  if (rnd != a->pub_key) {
    BN_free(rnd);
  }
  BN_CTX_free(ctx);
  return iVar1;
}

