
DH * DSA_dup_DH(DSA *r)

{
  int iVar1;
  DH *dh;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  
  if (r == (DSA *)0x0) {
    dh = (DH *)0x0;
    a = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    goto LAB_00b178fc;
  }
  dh = DH_new();
  if (dh == (DH *)0x0) goto LAB_00b178e8;
  if (*(BIGNUM **)&r->write_params == (BIGNUM *)0x0) {
    if ((r->q != (BIGNUM *)0x0) || (r->p != (BIGNUM *)0x0)) {
LAB_00b178e8:
      a = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      goto LAB_00b178f4;
    }
LAB_00b178ac:
    if (r->g == (BIGNUM *)0x0) {
      if (r->pub_key == (BIGNUM *)0x0) {
        return dh;
      }
      goto LAB_00b178e8;
    }
    a_02 = BN_dup(r->g);
    if (a_02 != (BIGNUM *)0x0) {
      if (r->pub_key == (BIGNUM *)0x0) {
        a_03 = (BIGNUM *)0x0;
LAB_00b1795c:
        iVar1 = DH_set0_key(dh,a_02,a_03);
        if (iVar1 != 0) {
          return dh;
        }
      }
      else {
        a_03 = BN_dup(r->pub_key);
        if (a_03 != (BIGNUM *)0x0) goto LAB_00b1795c;
      }
      a = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      goto LAB_00b178fc;
    }
    a = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
  }
  else {
    if ((r->q == (BIGNUM *)0x0) || (r->p == (BIGNUM *)0x0)) goto LAB_00b178e8;
    a = BN_dup(*(BIGNUM **)&r->write_params);
    a_00 = BN_dup(r->q);
    a_01 = BN_dup(r->p);
    a_02 = (BIGNUM *)0x0;
    if (((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) || (a_01 == (BIGNUM *)0x0)) {
      a_03 = (BIGNUM *)0x0;
      goto LAB_00b178fc;
    }
    iVar1 = DH_set0_pqg(dh,a,a_01,a_00);
    if (iVar1 != 0) goto LAB_00b178ac;
LAB_00b178f4:
    a_02 = (BIGNUM *)0x0;
  }
  a_03 = (BIGNUM *)0x0;
LAB_00b178fc:
  BN_free(a);
  BN_free(a_00);
  BN_free(a_01);
  BN_free(a_02);
  BN_free(a_03);
  DH_free(dh);
  return (DH *)0x0;
}

