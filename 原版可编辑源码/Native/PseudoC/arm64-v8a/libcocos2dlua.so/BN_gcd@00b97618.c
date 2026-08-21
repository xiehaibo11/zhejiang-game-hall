
int BN_gcd(BIGNUM *r,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  uint uVar7;
  
  BN_CTX_start(ctx);
                    /* try { // try from 00b9764c to 00c97653 has its CatchHandler @ 00b976b4 */
  pBVar4 = BN_CTX_get(ctx);
                    /* try { // try from 00b97654 to 00c976eb has its CatchHandler @ 00b973bc */
  pBVar5 = BN_CTX_get(ctx);
  uVar7 = 0;
  if ((pBVar4 == (BIGNUM *)0x0) || (pBVar5 == (BIGNUM *)0x0)) goto LAB_00b977c4;
  pBVar6 = BN_copy(pBVar4,a);
  if ((pBVar6 == (BIGNUM *)0x0) || (pBVar6 = BN_copy(pBVar5,b), pBVar6 == (BIGNUM *)0x0)) {
LAB_00b977c0:
    uVar7 = 0;
  }
  else {
    pBVar4->neg = 0;
    pBVar5->neg = 0;
    iVar1 = BN_cmp(pBVar4,pBVar5);
    pBVar6 = pBVar4;
    if (-1 < iVar1) {
      pBVar6 = pBVar5;
      pBVar5 = pBVar4;
    }
    iVar1 = BN_is_zero(pBVar6);
                    /* catch() { ... } // from try @ 00b9764c with catch @ 00b976b4 */
    if (iVar1 == 0) {
      iVar1 = 0;
      do {
        while( true ) {
          iVar2 = BN_is_odd(pBVar5);
          iVar3 = BN_is_odd(pBVar6);
                    /* try { // try from 00b976ec to 00c97767 has its CatchHandler @ 00b976ec
                       catch() { ... } // from try @ 00b976ec with catch @ 00b976ec
                       catch() { ... } // from try @ 00b9778c with catch @ 00b976ec */
          if (iVar2 == 0) break;
          if (iVar3 == 0) {
            iVar2 = BN_rshift1(pBVar6,pBVar6);
                    /* try { // try from 00b9778c to 00c97817 has its CatchHandler @ 00b976ec */
          }
          else {
            iVar2 = BN_sub(pBVar5,pBVar5,pBVar6);
            if (iVar2 == 0) goto LAB_00b977c0;
            iVar2 = BN_rshift1(pBVar5,pBVar5);
          }
joined_r0x00b97750:
          if (iVar2 == 0) goto LAB_00b977c0;
          iVar2 = BN_cmp(pBVar5,pBVar6);
          pBVar4 = pBVar5;
          if (-1 < iVar2) {
            pBVar4 = pBVar6;
            pBVar6 = pBVar5;
          }
                    /* try { // try from 00b97768 to 00c9778b has its CatchHandler @ 00b977e0 */
          pBVar5 = pBVar6;
          iVar2 = BN_is_zero(pBVar4);
          pBVar6 = pBVar4;
          if (iVar2 != 0) goto LAB_00b97798;
        }
        iVar2 = BN_rshift1(pBVar5,pBVar5);
        if (iVar3 != 0) goto joined_r0x00b97750;
        if ((iVar2 == 0) || (iVar2 = BN_rshift1(pBVar6,pBVar6), iVar2 == 0)) goto LAB_00b977c0;
        iVar1 = iVar1 + 1;
        iVar2 = BN_is_zero(pBVar6);
      } while (iVar2 == 0);
LAB_00b97798:
      if (iVar1 == 0) {
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00b977c0;
      }
      else {
        iVar1 = BN_lshift(pBVar5,pBVar5,iVar1);
        uVar7 = 0;
        if ((pBVar5 == (BIGNUM *)0x0) || (iVar1 == 0)) goto LAB_00b977c4;
      }
    }
    pBVar5 = BN_copy(r,pBVar5);
    uVar7 = (uint)(pBVar5 != (BIGNUM *)0x0);
  }
LAB_00b977c4:
  BN_CTX_end(ctx);
                    /* catch() { ... } // from try @ 00b97768 with catch @ 00b977e0 */
  return uVar7;
}

