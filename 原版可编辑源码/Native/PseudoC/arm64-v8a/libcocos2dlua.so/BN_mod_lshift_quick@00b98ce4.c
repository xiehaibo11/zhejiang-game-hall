
int BN_mod_lshift_quick(BIGNUM *r,BIGNUM *a,int n,BIGNUM *m)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  
  if ((r != a) && (pBVar3 = BN_copy(r,a), pBVar3 == (BIGNUM *)0x0)) {
    return 0;
  }
  do {
    if (n < 1) {
      return 1;
    }
    iVar1 = BN_num_bits(m);
    iVar2 = BN_num_bits(r);
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      ERR_put_error(3,0x77,0x6e,"crypto/bn/bn_mod.c",0xae);
      return 0;
    }
    iVar2 = n;
    if (iVar1 <= n) {
      iVar2 = iVar1;
    }
    if (iVar2 == 0) {
      iVar1 = BN_lshift1(r,r);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = -1;
    }
    else {
      iVar1 = BN_lshift(r,r,iVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = -iVar2;
    }
    n = n + iVar2;
    iVar1 = BN_cmp(r,m);
  } while ((iVar1 < 0) || (iVar1 = BN_sub(r,r,m), iVar1 != 0));
  return 0;
}

