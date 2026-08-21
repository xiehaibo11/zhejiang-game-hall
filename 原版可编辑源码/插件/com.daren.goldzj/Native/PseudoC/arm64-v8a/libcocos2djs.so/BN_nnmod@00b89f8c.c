
int BN_nnmod(BIGNUM *r,BIGNUM *m,BIGNUM *d,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  
  iVar1 = BN_div((BIGNUM *)0x0,r,m,d,ctx);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (r->neg != 0) {
      UNRECOVERED_JUMPTABLE = BN_sub;
      if (d->neg == 0) {
        UNRECOVERED_JUMPTABLE = BN_add;
      }
                    /* WARNING: Could not recover jumptable at 0x00b89ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)(r,r,d);
      return iVar2;
    }
    iVar2 = 1;
  }
  return iVar2;
}

