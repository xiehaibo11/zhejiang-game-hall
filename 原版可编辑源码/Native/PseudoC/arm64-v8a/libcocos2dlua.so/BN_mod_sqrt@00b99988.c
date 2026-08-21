
BIGNUM * BN_mod_sqrt(BIGNUM *ret,BIGNUM *a,BIGNUM *n,BN_CTX *ctx)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *pBVar8;
  BIGNUM *a_00;
  int iVar9;
  long lVar10;
  
                    /* catch() { ... } // from try @ 00b9969c with catch @ 00b99988 */
                    /* try { // try from 00b999b0 to 00c99a4f has its CatchHandler @ 00b999b0
                       catch() { ... } // from try @ 00b999b0 with catch @ 00b999b0
                       catch() { ... } // from try @ 00b99a58 with catch @ 00b999b0
                       catch() { ... } // from try @ 00b99a84 with catch @ 00b999b0
                       catch() { ... } // from try @ 00b99ba0 with catch @ 00b999b0
                       catch() { ... } // from try @ 00b99bcc with catch @ 00b999b0
                       catch() { ... } // from try @ 00b99c00 with catch @ 00b999b0 */
  iVar2 = BN_is_odd(n);
  pBVar5 = ret;
  if ((iVar2 == 0) || (iVar2 = BN_abs_is_word(n,1), iVar2 != 0)) {
    iVar2 = BN_abs_is_word(n,2);
    if (iVar2 == 0) {
      ERR_put_error(3,0x79,0x70,"crypto/bn/bn_sqrt.c",0x29);
      return (BIGNUM *)0x0;
    }
    if (ret == (BIGNUM *)0x0) {
      pBVar5 = BN_new();
      a_00 = (BIGNUM *)0x0;
      if (pBVar5 == (BIGNUM *)0x0) goto joined_r0x00b99d94;
    }
    iVar2 = BN_is_bit_set(a,0);
    goto LAB_00b99a5c;
  }
  iVar2 = BN_is_zero(a);
  if ((iVar2 == 0) && (iVar2 = BN_is_one(a), iVar2 == 0)) {
                    /* try { // try from 00b99a84 to 00c99b8f has its CatchHandler @ 00b999b0 */
    BN_CTX_start(ctx);
    pBVar5 = BN_CTX_get(ctx);
    pBVar6 = BN_CTX_get(ctx);
    pBVar7 = BN_CTX_get(ctx);
    r = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    r_01 = BN_CTX_get(ctx);
    if (r_01 != (BIGNUM *)0x0) {
      a_00 = ret;
      if (((ret != (BIGNUM *)0x0) || (a_00 = BN_new(), a_00 != (BIGNUM *)0x0)) &&
         (iVar2 = BN_nnmod(pBVar5,a,n,ctx), iVar2 != 0)) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          iVar3 = BN_is_bit_set(n,iVar2);
        } while (iVar3 == 0);
        if (iVar2 == 2) {
                    /* try { // try from 00b99bbc to 00c99bcb has its CatchHandler @ 00b99c58 */
          iVar2 = BN_mod_lshift1_quick(r,pBVar5,n);
                    /* try { // try from 00b99bcc to 00c99bef has its CatchHandler @ 00b999b0 */
          if ((iVar2 != 0) && (iVar2 = BN_rshift(pBVar7,n,3), iVar2 != 0)) {
            pBVar7->neg = 0;
                    /* try { // try from 00b99bf0 to 00c99bff has its CatchHandler @ 00b99c54 */
            iVar2 = BN_mod_exp(pBVar6,r,pBVar7,n,ctx);
                    /* try { // try from 00b99c00 to 00c99c77 has its CatchHandler @ 00b999b0 */
                    /* catch() { ... } // from try @ 00b99bf0 with catch @ 00b99c54 */
                    /* catch() { ... } // from try @ 00b99bbc with catch @ 00b99c58 */
                    /* catch() { ... } // from try @ 00b99b90 with catch @ 00b99c5c */
                    /* catch() { ... } // from try @ 00b99a7c with catch @ 00b99c60 */
                    /* catch() { ... } // from try @ 00b99a50 with catch @ 00b99c64 */
            if ((((iVar2 != 0) &&
                 ((iVar2 = BN_mod_sqr(r_01,pBVar6,n,ctx), iVar2 != 0 &&
                  (iVar2 = BN_mod_mul(r,r,r_01,n,ctx), iVar2 != 0)))) &&
                (iVar2 = BN_sub_word(r,1), iVar2 != 0)) &&
               ((iVar2 = BN_mod_mul(r_00,pBVar5,pBVar6,n,ctx), iVar2 != 0 &&
                (iVar2 = BN_mod_mul(r_00,r_00,r,n,ctx), iVar2 != 0)))) {
LAB_00b99c80:
              pBVar6 = BN_copy(a_00,r_00);
              if (pBVar6 != (BIGNUM *)0x0) goto LAB_00b99b74;
            }
          }
        }
        else if (iVar2 == 1) {
          iVar2 = BN_rshift(pBVar7,n,2);
          if (iVar2 != 0) {
            pBVar7->neg = 0;
            iVar2 = BN_add_word(pBVar7,1);
            if ((iVar2 != 0) && (iVar2 = BN_mod_exp(a_00,pBVar5,pBVar7,n,ctx), iVar2 != 0)) {
LAB_00b99b74:
              iVar2 = BN_mod_sqr(r_00,a_00,n,ctx);
              if (iVar2 != 0) {
                    /* try { // try from 00b99b90 to 00c99b9f has its CatchHandler @ 00b99c5c */
                iVar2 = BN_cmp(r_00,pBVar5);
                if (iVar2 == 0) goto LAB_00b99dcc;
                    /* try { // try from 00b99ba0 to 00c99bbb has its CatchHandler @ 00b999b0 */
                iVar2 = 0x6f;
                iVar3 = 0x158;
LAB_00b99d8c:
                ERR_put_error(3,0x79,iVar2,"crypto/bn/bn_sqrt.c",iVar3);
              }
            }
          }
        }
        else {
          pBVar8 = BN_copy(pBVar7,n);
          if (pBVar8 != (BIGNUM *)0x0) {
            lVar10 = 1;
            pBVar7->neg = 0;
            do {
              if ((long)(lVar10 + 1U) < 0x16) {
LAB_00b99d28:
                iVar3 = BN_set_word(r_01,lVar10 + 1U);
                if (iVar3 == 0) goto joined_r0x00b99d94;
              }
              else {
                iVar3 = BN_num_bits(n);
                iVar3 = BN_pseudo_rand(r_01,iVar3,0,0);
                if (iVar3 == 0) goto joined_r0x00b99d94;
                iVar3 = BN_ucmp(r_01,n);
                if (-1 < iVar3) {
                  pcVar1 = BN_add;
                  if (n->neg == 0) {
                    pcVar1 = BN_sub;
                  }
                  iVar3 = (*pcVar1)(r_01,r_01,n);
                  if (iVar3 == 0) goto joined_r0x00b99d94;
                }
                iVar3 = BN_is_zero(r_01);
                if (iVar3 != 0) goto LAB_00b99d28;
              }
              iVar3 = BN_kronecker(r_01,pBVar7,ctx);
              if (iVar3 < -1) goto joined_r0x00b99d94;
              if (iVar3 != 1) {
                if (iVar3 == -1) {
                  iVar3 = BN_rshift(pBVar7,pBVar7,iVar2);
                  if ((iVar3 == 0) || (iVar3 = BN_mod_exp(r_01,r_01,pBVar7,n,ctx), iVar3 == 0))
                  goto joined_r0x00b99d94;
                  iVar3 = BN_is_one(r_01);
                  if (iVar3 != 0) {
                    iVar2 = 0x70;
                    iVar3 = 0xe2;
                    goto LAB_00b99d8c;
                  }
                  iVar3 = BN_rshift1(r,pBVar7);
                  if (iVar3 == 0) goto joined_r0x00b99d94;
                  iVar3 = BN_is_zero(r);
                  if (iVar3 == 0) {
                    iVar3 = BN_mod_exp(r_00,pBVar5,r,n,ctx);
                    if (iVar3 == 0) goto joined_r0x00b99d94;
                    iVar3 = BN_is_zero(r_00);
                    if (iVar3 != 0) goto LAB_00b99ec8;
                  }
                  else {
                    iVar3 = BN_nnmod(r,pBVar5,n,ctx);
                    if (iVar3 == 0) goto joined_r0x00b99d94;
                    iVar3 = BN_is_zero(r);
                    if (iVar3 != 0) {
LAB_00b99ec8:
                      BN_set_word(a_00,0);
                      goto LAB_00b99dcc;
                    }
                    iVar3 = BN_set_word(r_00,1);
                    if (iVar3 == 0) goto joined_r0x00b99d94;
                  }
                  iVar3 = BN_mod_sqr(pBVar6,r_00,n,ctx);
                  if (iVar3 == 0) goto joined_r0x00b99d94;
                  iVar3 = BN_mod_mul(pBVar6,pBVar6,pBVar5,n,ctx);
                  pBVar7 = pBVar5;
                  pBVar8 = r_00;
                  goto joined_r0x00b99f08;
                }
                if (iVar3 == 0) {
                  iVar2 = 0x70;
                  iVar3 = 199;
                  goto LAB_00b99d8c;
                }
                break;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < 0x51);
            ERR_put_error(3,0x79,0x71,"crypto/bn/bn_sqrt.c",0xd3);
          }
        }
      }
joined_r0x00b99d94:
      if (a_00 != ret) {
        BN_clear_free(a_00);
      }
    }
    a_00 = (BIGNUM *)0x0;
LAB_00b99dcc:
    BN_CTX_end(ctx);
    return a_00;
  }
  if (ret == (BIGNUM *)0x0) {
    pBVar5 = BN_new();
                    /* try { // try from 00b99a50 to 00c99a57 has its CatchHandler @ 00b99c64 */
    a_00 = (BIGNUM *)0x0;
    if (pBVar5 == (BIGNUM *)0x0) goto joined_r0x00b99d94;
  }
                    /* try { // try from 00b99a58 to 00c99a7b has its CatchHandler @ 00b999b0 */
  iVar2 = BN_is_one(a);
LAB_00b99a5c:
  iVar2 = BN_set_word(pBVar5,(long)iVar2);
  if (iVar2 == 0) {
    if (pBVar5 != ret) {
      BN_free(pBVar5);
    }
    return (BIGNUM *)0x0;
  }
  return pBVar5;
joined_r0x00b99f08:
  if ((iVar3 == 0) || (iVar3 = BN_mod_mul(pBVar8,pBVar8,pBVar7,n,ctx), iVar3 == 0))
  goto joined_r0x00b99d94;
  iVar3 = BN_is_one(pBVar6);
  if (iVar3 != 0) goto LAB_00b99c80;
  iVar3 = BN_mod_sqr(r,pBVar6,n,ctx);
  if (iVar3 == 0) goto joined_r0x00b99d94;
  iVar9 = 0;
  iVar3 = iVar2 + -2;
  while (iVar4 = BN_is_one(r), iVar4 == 0) {
    if (iVar3 == iVar9) {
      iVar2 = 0x6f;
      iVar3 = 0x136;
      goto LAB_00b99d8c;
    }
    iVar4 = BN_mod_mul(r,r,r,n,ctx);
    iVar9 = iVar9 + 1;
    iVar2 = iVar2 + -1;
    if (iVar4 == 0) goto joined_r0x00b99d94;
  }
  pBVar7 = BN_copy(r,r_01);
  if (pBVar7 == (BIGNUM *)0x0) goto joined_r0x00b99d94;
  while (iVar2 = iVar2 + -1, 1 < iVar2) {
    iVar3 = BN_mod_sqr(r,r,n,ctx);
    if (iVar3 == 0) goto joined_r0x00b99d94;
  }
  iVar2 = BN_mod_mul(r_01,r,r,n,ctx);
  if (iVar2 == 0) goto joined_r0x00b99d94;
  iVar3 = BN_mod_mul(r_00,r_00,r,n,ctx);
  iVar2 = iVar9 + 1;
  pBVar7 = r_01;
  pBVar8 = pBVar6;
  goto joined_r0x00b99f08;
}

