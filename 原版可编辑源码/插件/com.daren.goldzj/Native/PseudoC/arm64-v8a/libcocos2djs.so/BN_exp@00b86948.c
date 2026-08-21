
int BN_exp(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar4;
  
  iVar1 = BN_get_flags(p,4);
  if (iVar1 != 0) {
    ERR_put_error(3,0x7b,0x42,"crypto/bn/bn_exp.c",0x30);
    return 0;
  }
  BN_CTX_start(ctx);
  if ((r == a) || (a_00 = r, r == p)) {
    a_00 = BN_CTX_get(ctx);
  }
  a_01 = BN_CTX_get(ctx);
  iVar1 = 0;
  if ((a_00 == (BIGNUM *)0x0) || (a_01 == (BIGNUM *)0x0)) goto LAB_00b86aa0;
  pBVar4 = BN_copy(a_01,a);
  if (pBVar4 != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(p);
    iVar2 = BN_is_odd(p);
    if (iVar2 == 0) {
      iVar2 = BN_set_word(a_00,1);
      if (iVar2 != 0) goto LAB_00b86a1c;
    }
    else {
      pBVar4 = BN_copy(a_00,a);
      if (pBVar4 != (BIGNUM *)0x0) {
LAB_00b86a1c:
        if (1 < iVar1) {
          iVar2 = 1;
          do {
            iVar3 = BN_sqr(a_01,a_01,ctx);
            if ((iVar3 == 0) ||
               ((iVar3 = BN_is_bit_set(p,iVar2), iVar3 != 0 &&
                (iVar3 = BN_mul(a_00,a_00,a_01,ctx), iVar3 == 0)))) goto LAB_00b86a9c;
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        if (a_00 != r) {
          BN_copy(r,a_00);
        }
        iVar1 = 1;
        goto LAB_00b86aa0;
      }
    }
  }
LAB_00b86a9c:
  iVar1 = 0;
LAB_00b86aa0:
  BN_CTX_end(ctx);
  return iVar1;
}

