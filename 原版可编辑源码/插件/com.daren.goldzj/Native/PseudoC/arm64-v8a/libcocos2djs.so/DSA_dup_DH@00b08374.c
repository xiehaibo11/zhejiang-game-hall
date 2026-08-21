
DH * DSA_dup_DH(DSA *r)

{
  int iVar1;
  DH *dh;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  
                    /* catch() { ... } // from try @ 00b083e4 with catch @ 00b0838c */
  if (r == (DSA *)0x0) {
    dh = (DH *)0x0;
    a = (BIGNUM *)0x0;
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    a_03 = (BIGNUM *)0x0;
    goto LAB_00b0847c;
  }
  dh = DH_new();
  if (dh == (DH *)0x0) goto LAB_00b08468;
  if (*(BIGNUM **)&r->write_params == (BIGNUM *)0x0) {
    if ((r->q != (BIGNUM *)0x0) || (r->p != (BIGNUM *)0x0)) {
LAB_00b08468:
      a = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      goto LAB_00b08474;
    }
LAB_00b0842c:
                    /* catch() { ... } // from try @ 00b083bc with catch @ 00b0842c */
    if (r->g == (BIGNUM *)0x0) {
      if (r->pub_key == (BIGNUM *)0x0) {
        return dh;
      }
      goto LAB_00b08468;
    }
    a_02 = BN_dup(r->g);
    if (a_02 != (BIGNUM *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b084d4 with catch @ 00b08440
                       catch(type#1 @ 00000000) { ... } // from try @ 00b08578 with catch @ 00b08440
                        */
      if (r->pub_key == (BIGNUM *)0x0) {
        a_03 = (BIGNUM *)0x0;
LAB_00b084dc:
        iVar1 = DH_set0_key(dh,a_02,a_03);
        if (iVar1 != 0) {
          return dh;
        }
      }
      else {
        a_03 = BN_dup(r->pub_key);
        if (a_03 != (BIGNUM *)0x0) goto LAB_00b084dc;
      }
      a = (BIGNUM *)0x0;
      a_01 = (BIGNUM *)0x0;
      a_00 = (BIGNUM *)0x0;
      goto LAB_00b0847c;
    }
    a = (BIGNUM *)0x0;
                    /* try { // try from 00b084cc to 00c084d3 has its CatchHandler @ 00b08580 */
    a_01 = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
                    /* try { // try from 00b084d4 to 00c08573 has its CatchHandler @ 00b08440 */
  }
  else {
    if ((r->q == (BIGNUM *)0x0) || (r->p == (BIGNUM *)0x0)) goto LAB_00b08468;
    a = BN_dup(*(BIGNUM **)&r->write_params);
                    /* try { // try from 00b083bc to 00c083e3 has its CatchHandler @ 00b0842c */
    a_00 = BN_dup(r->q);
    a_01 = BN_dup(r->p);
    a_02 = (BIGNUM *)0x0;
                    /* try { // try from 00b083e4 to 00c0843f has its CatchHandler @ 00b0838c */
    if (((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) || (a_01 == (BIGNUM *)0x0)) {
      a_03 = (BIGNUM *)0x0;
      goto LAB_00b0847c;
    }
    iVar1 = DH_set0_pqg(dh,a,a_01,a_00);
    if (iVar1 != 0) goto LAB_00b0842c;
LAB_00b08474:
    a_02 = (BIGNUM *)0x0;
  }
  a_03 = (BIGNUM *)0x0;
LAB_00b0847c:
  BN_free(a);
  BN_free(a_00);
                    /* try { // try from 00b08490 to 00c08493 has its CatchHandler @ 00b0857c */
  BN_free(a_01);
  BN_free(a_02);
  BN_free(a_03);
  DH_free(dh);
  return (DH *)0x0;
}

