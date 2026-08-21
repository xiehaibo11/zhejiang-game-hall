
int BN_mod_add_quick(BIGNUM *r,BIGNUM *a,BIGNUM *b,BIGNUM *m)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BN_uadd(r,a,b);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BN_ucmp(r,m);
    if (-1 < iVar2) {
      iVar2 = BN_usub(r,r,m);
      return iVar2;
    }
    iVar2 = 1;
  }
  return iVar2;
}

