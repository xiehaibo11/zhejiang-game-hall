
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
      if (pBVar5 == (BIGNUM *)0x0) goto joined_r0x00b8b594;
    }
    iVar2 = BN_is_bit_set(a,0);
    goto LAB_00b8b25c;
  }
  iVar2 = BN_is_zero(a);
  if ((iVar2 == 0) && (iVar2 = BN_is_one(a), iVar2 == 0)) {
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
          iVar2 = BN_mod_lshift1_quick(r,pBVar5,n);
          if ((iVar2 != 0) && (iVar2 = BN_rshift(pBVar7,n,3), iVar2 != 0)) {
            pBVar7->neg = 0;
            iVar2 = BN_mod_exp(pBVar6,r,pBVar7,n,ctx);
            if ((((iVar2 != 0) &&
                 ((iVar2 = BN_mod_sqr(r_01,pBVar6,n,ctx), iVar2 != 0 &&
                  (iVar2 = BN_mod_mul(r,r,r_01,n,ctx), iVar2 != 0)))) &&
                (iVar2 = BN_sub_word(r,1), iVar2 != 0)) &&
               ((iVar2 = BN_mod_mul(r_00,pBVar5,pBVar6,n,ctx), iVar2 != 0 &&
                (iVar2 = BN_mod_mul(r_00,r_00,r,n,ctx), iVar2 != 0)))) {
LAB_00b8b480:
              pBVar6 = BN_copy(a_00,r_00);
              if (pBVar6 != (BIGNUM *)0x0) goto LAB_00b8b374;
            }
          }
        }
        else if (iVar2 == 1) {
          iVar2 = BN_rshift(pBVar7,n,2);
          if (iVar2 != 0) {
            pBVar7->neg = 0;
            iVar2 = BN_add_word(pBVar7,1);
            if ((iVar2 != 0) && (iVar2 = BN_mod_exp(a_00,pBVar5,pBVar7,n,ctx), iVar2 != 0)) {
LAB_00b8b374:
              iVar2 = BN_mod_sqr(r_00,a_00,n,ctx);
              if (iVar2 != 0) {
                iVar2 = BN_cmp(r_00,pBVar5);
                if (iVar2 == 0) goto LAB_00b8b5cc;
                iVar2 = 0x6f;
                iVar3 = 0x158;
LAB_00b8b58c:
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
LAB_00b8b528:
                iVar3 = BN_set_word(r_01,lVar10 + 1U);
                if (iVar3 == 0) goto joined_r0x00b8b594;
              }
              else {
                iVar3 = BN_num_bits(n);
                iVar3 = BN_pseudo_rand(r_01,iVar3,0,0);
                if (iVar3 == 0) goto joined_r0x00b8b594;
                iVar3 = BN_ucmp(r_01,n);
                if (-1 < iVar3) {
                  pcVar1 = BN_add;
                  if (n->neg == 0) {
                    pcVar1 = BN_sub;
                  }
                  iVar3 = (*pcVar1)(r_01,r_01,n);
                  if (iVar3 == 0) goto joined_r0x00b8b594;
                }
                iVar3 = BN_is_zero(r_01);
                if (iVar3 != 0) goto LAB_00b8b528;
              }
              iVar3 = BN_kronecker(r_01,pBVar7,ctx);
              if (iVar3 < -1) goto joined_r0x00b8b594;
              if (iVar3 != 1) {
                if (iVar3 == -1) {
                  iVar3 = BN_rshift(pBVar7,pBVar7,iVar2);
                  if ((iVar3 == 0) || (iVar3 = BN_mod_exp(r_01,r_01,pBVar7,n,ctx), iVar3 == 0))
                  goto joined_r0x00b8b594;
                  iVar3 = BN_is_one(r_01);
                  if (iVar3 != 0) {
                    iVar2 = 0x70;
                    iVar3 = 0xe2;
                    goto LAB_00b8b58c;
                  }
                  iVar3 = BN_rshift1(r,pBVar7);
                  if (iVar3 == 0) goto joined_r0x00b8b594;
                  iVar3 = BN_is_zero(r);
                  if (iVar3 == 0) {
                    iVar3 = BN_mod_exp(r_00,pBVar5,r,n,ctx);
                    if (iVar3 == 0) goto joined_r0x00b8b594;
                    iVar3 = BN_is_zero(r_00);
                    if (iVar3 != 0) goto LAB_00b8b6c8;
                  }
                  else {
                    iVar3 = BN_nnmod(r,pBVar5,n,ctx);
                    if (iVar3 == 0) goto joined_r0x00b8b594;
                    iVar3 = BN_is_zero(r);
                    if (iVar3 != 0) {
LAB_00b8b6c8:
                      BN_set_word(a_00,0);
                      goto LAB_00b8b5cc;
                    }
                    iVar3 = BN_set_word(r_00,1);
                    if (iVar3 == 0) goto joined_r0x00b8b594;
                  }
                  iVar3 = BN_mod_sqr(pBVar6,r_00,n,ctx);
                  if (iVar3 == 0) goto joined_r0x00b8b594;
                  iVar3 = BN_mod_mul(pBVar6,pBVar6,pBVar5,n,ctx);
                  pBVar7 = pBVar5;
                  pBVar8 = r_00;
                  goto joined_r0x00b8b708;
                }
                if (iVar3 == 0) {
                  iVar2 = 0x70;
                  iVar3 = 199;
                  goto LAB_00b8b58c;
                }
                break;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < 0x51);
            ERR_put_error(3,0x79,0x71,"crypto/bn/bn_sqrt.c",0xd3);
          }
        }
      }
joined_r0x00b8b594:
      if (a_00 != ret) {
        BN_clear_free(a_00);
      }
    }
    a_00 = (BIGNUM *)0x0;
LAB_00b8b5cc:
    BN_CTX_end(ctx);
    return a_00;
  }
  if (ret == (BIGNUM *)0x0) {
    pBVar5 = BN_new();
    a_00 = (BIGNUM *)0x0;
    if (pBVar5 == (BIGNUM *)0x0) goto joined_r0x00b8b594;
  }
  iVar2 = BN_is_one(a);
LAB_00b8b25c:
  iVar2 = BN_set_word(pBVar5,(long)iVar2);
  if (iVar2 == 0) {
    if (pBVar5 != ret) {
      BN_free(pBVar5);
    }
    return (BIGNUM *)0x0;
  }
  return pBVar5;
joined_r0x00b8b708:
  if ((iVar3 == 0) || (iVar3 = BN_mod_mul(pBVar8,pBVar8,pBVar7,n,ctx), iVar3 == 0))
  goto joined_r0x00b8b594;
  iVar3 = BN_is_one(pBVar6);
  if (iVar3 != 0) goto LAB_00b8b480;
  iVar3 = BN_mod_sqr(r,pBVar6,n,ctx);
  if (iVar3 == 0) goto joined_r0x00b8b594;
  iVar9 = 0;
  iVar3 = iVar2 + -2;
  while (iVar4 = BN_is_one(r), iVar4 == 0) {
    if (iVar3 == iVar9) {
      iVar2 = 0x6f;
      iVar3 = 0x136;
      goto LAB_00b8b58c;
    }
    iVar4 = BN_mod_mul(r,r,r,n,ctx);
    iVar9 = iVar9 + 1;
    iVar2 = iVar2 + -1;
    if (iVar4 == 0) goto joined_r0x00b8b594;
  }
  pBVar7 = BN_copy(r,r_01);
  if (pBVar7 == (BIGNUM *)0x0) goto joined_r0x00b8b594;
  while (iVar2 = iVar2 + -1, 1 < iVar2) {
    iVar3 = BN_mod_sqr(r,r,n,ctx);
    if (iVar3 == 0) goto joined_r0x00b8b594;
  }
  iVar2 = BN_mod_mul(r_01,r,r,n,ctx);
  if (iVar2 == 0) goto joined_r0x00b8b594;
  iVar3 = BN_mod_mul(r_00,r_00,r,n,ctx);
  iVar2 = iVar9 + 1;
  pBVar7 = r_01;
  pBVar8 = pBVar6;
  goto joined_r0x00b8b708;
}

