
int BN_mod_lshift(BIGNUM *r,BIGNUM *a,int n,BIGNUM *m,BN_CTX *ctx)

{
  code *pcVar1;
  BIGNUM *m_00;
  int iVar2;
  BIGNUM *a_00;
  
  iVar2 = BN_div((BIGNUM *)0x0,r,a,m,ctx);
  if (iVar2 == 0) {
LAB_00b98ca0:
    iVar2 = 0;
  }
  else {
    if (r->neg != 0) {
      pcVar1 = BN_sub;
      if (m->neg == 0) {
        pcVar1 = BN_add;
      }
      iVar2 = (*pcVar1)(r,r,m);
      if (iVar2 == 0) goto LAB_00b98ca0;
    }
    if (m->neg == 0) {
      a_00 = (BIGNUM *)0x0;
    }
    else {
      a_00 = BN_dup(m);
      if (a_00 == (BIGNUM *)0x0) goto LAB_00b98ca0;
      a_00->neg = 0;
    }
    m_00 = a_00;
    if (a_00 == (BIGNUM *)0x0) {
      m_00 = m;
    }
    iVar2 = BN_mod_lshift_quick(r,r,n,m_00);
    BN_free(a_00);
  }
  return iVar2;
}

