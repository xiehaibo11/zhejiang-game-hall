
int BN_mod_lshift1_quick(BIGNUM *r,BIGNUM *a,BIGNUM *m)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BN_lshift1(r,a);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BN_cmp(r,m);
    if (-1 < iVar2) {
      iVar2 = BN_sub(r,r,m);
      return iVar2;
    }
    iVar2 = 1;
  }
  return iVar2;
}

