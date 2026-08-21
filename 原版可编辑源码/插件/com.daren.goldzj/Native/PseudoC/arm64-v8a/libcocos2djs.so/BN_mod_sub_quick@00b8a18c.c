
int BN_mod_sub_quick(BIGNUM *r,BIGNUM *a,BIGNUM *b,BIGNUM *m)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BN_sub(r,a,b);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (r->neg != 0) {
      iVar2 = BN_add(r,r,m);
      return iVar2;
    }
    iVar2 = 1;
  }
  return iVar2;
}

