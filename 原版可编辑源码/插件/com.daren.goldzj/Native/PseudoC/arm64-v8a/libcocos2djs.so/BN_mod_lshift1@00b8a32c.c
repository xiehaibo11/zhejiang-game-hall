
int BN_mod_lshift1(BIGNUM *r,BIGNUM *a,BIGNUM *m,BN_CTX *ctx)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  
  iVar1 = BN_lshift1(r,a);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = BN_div((BIGNUM *)0x0,r,r,m,ctx), iVar2 = 0, iVar1 != 0)) {
    if (r->neg != 0) {
      UNRECOVERED_JUMPTABLE = BN_sub;
      if (m->neg == 0) {
        UNRECOVERED_JUMPTABLE = BN_add;
      }
                    /* WARNING: Could not recover jumptable at 0x00b8a3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*UNRECOVERED_JUMPTABLE)(r,r,m);
      return iVar2;
    }
    iVar2 = 1;
  }
  return iVar2;
}

