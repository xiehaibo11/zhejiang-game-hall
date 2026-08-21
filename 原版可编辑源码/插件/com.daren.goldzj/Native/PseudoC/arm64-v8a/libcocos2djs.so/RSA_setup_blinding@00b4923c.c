
BN_BLINDING * RSA_setup_blinding(RSA *rsa,BN_CTX *ctx)

{
  int iVar1;
  BN_CTX *ctx_00;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BN_BLINDING *pBVar4;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *b;
  long lVar5;
  void *buf;
  int line;
  BIGNUM *a;
  
  ctx_00 = ctx;
  if ((ctx == (BN_CTX *)0x0) && (ctx_00 = BN_CTX_new(), ctx_00 == (BN_CTX *)0x0)) {
    return (BN_BLINDING *)0x0;
  }
  BN_CTX_start(ctx_00);
  pBVar2 = BN_CTX_get(ctx_00);
  if (pBVar2 == (BIGNUM *)0x0) {
    iVar1 = 0x41;
    line = 0x7e;
LAB_00b49448:
    ERR_put_error(4,0x88,iVar1,"crypto/rsa/rsa_crpt.c",line);
    pBVar2 = (BIGNUM *)0x0;
  }
  else {
    pBVar2 = rsa->e;
    if (pBVar2 == (BIGNUM *)0x0) {
      pBVar2 = rsa->d;
      if (((pBVar2 != (BIGNUM *)0x0) && (pBVar3 = rsa->p, pBVar3 != (BIGNUM *)0x0)) &&
         (a = rsa->q, a != (BIGNUM *)0x0)) {
        BN_CTX_start(ctx_00);
        r = BN_CTX_get(ctx_00);
        r_00 = BN_CTX_get(ctx_00);
        r_01 = BN_CTX_get(ctx_00);
        if (r_01 != (BIGNUM *)0x0) {
          b = BN_value_one();
          iVar1 = BN_sub(r_00,pBVar3,b);
          if (iVar1 != 0) {
            pBVar3 = BN_value_one();
            iVar1 = BN_sub(r_01,a,pBVar3);
            if ((iVar1 != 0) && (iVar1 = BN_mul(r,r_00,r_01,ctx_00), iVar1 != 0)) {
              pBVar2 = BN_mod_inverse((BIGNUM *)0x0,pBVar2,r,ctx_00);
              BN_CTX_end(ctx_00);
              if (pBVar2 != (BIGNUM *)0x0) goto LAB_00b49290;
              goto LAB_00b49430;
            }
          }
        }
        BN_CTX_end(ctx_00);
      }
LAB_00b49430:
      iVar1 = 0x8c;
      line = 0x85;
      goto LAB_00b49448;
    }
LAB_00b49290:
    iVar1 = RAND_status();
    if (((iVar1 == 0) && (rsa->d != (BIGNUM *)0x0)) && (lVar5 = bn_get_words(), lVar5 != 0)) {
      buf = (void *)bn_get_words(rsa->d);
      iVar1 = bn_get_dmax(rsa->d);
      RAND_add(buf,iVar1 << 3,0.0);
    }
    pBVar3 = BN_new();
    if (pBVar3 != (BIGNUM *)0x0) {
      BN_with_flags(pBVar3,rsa->n,4);
      pBVar4 = BN_BLINDING_create_param
                         ((BN_BLINDING *)0x0,pBVar2,pBVar3,ctx_00,
                          (bn_mod_exp *)rsa->meth->bn_mod_exp,*(BN_MONT_CTX **)&rsa->references);
      BN_free(pBVar3);
      if (pBVar4 == (BN_BLINDING *)0x0) {
        ERR_put_error(4,0x88,3,"crypto/rsa/rsa_crpt.c",0xa4);
      }
      else {
        BN_BLINDING_set_current_thread(pBVar4);
      }
      goto LAB_00b49454;
    }
    ERR_put_error(4,0x88,0x41,"crypto/rsa/rsa_crpt.c",0x99);
  }
  pBVar4 = (BN_BLINDING *)0x0;
LAB_00b49454:
  BN_CTX_end(ctx_00);
  if (ctx_00 != ctx) {
    BN_CTX_free(ctx_00);
  }
  if (pBVar2 != rsa->e) {
    BN_free(pBVar2);
  }
  return pBVar4;
}

