
BIGNUM * SRP_Calc_client_key(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                            BIGNUM *param_5,BIGNUM *param_6)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *b;
  BIGNUM *r_02;
  
  if (param_5 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_4 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_3 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_1 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_2 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_6 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return (BIGNUM *)0x0;
  }
  r = BN_new();
  if (r == (BIGNUM *)0x0) {
    r_00 = (BIGNUM *)0x0;
LAB_00b60e6c:
    r_01 = (BIGNUM *)0x0;
    b = (BIGNUM *)0x0;
  }
  else {
    r_00 = BN_new();
    if ((r_00 == (BIGNUM *)0x0) || (r_01 = BN_new(), r_01 == (BIGNUM *)0x0)) goto LAB_00b60e6c;
    iVar1 = BN_mod_exp(r,param_3,param_4,param_1,ctx);
    if (iVar1 == 0) {
      b = (BIGNUM *)0x0;
    }
    else {
      b = (BIGNUM *)FUN_00b60740(param_1,param_3,param_1);
      if ((((b != (BIGNUM *)0x0) && (iVar1 = BN_mod_mul(r_00,r,b,param_1,ctx), iVar1 != 0)) &&
          (iVar1 = BN_mod_sub(r,param_2,r_00,param_1,ctx), iVar1 != 0)) &&
         ((iVar1 = BN_mul(r_01,param_6,param_4,ctx), iVar1 != 0 &&
          (iVar1 = BN_add(r_00,param_5,r_01), iVar1 != 0)))) {
        r_02 = BN_new();
        if ((r_02 == (BIGNUM *)0x0) || (iVar1 = BN_mod_exp(r_02,r,r_00,param_1,ctx), iVar1 != 0))
        goto LAB_00b60e84;
        BN_free(r_02);
      }
    }
  }
  r_02 = (BIGNUM *)0x0;
LAB_00b60e84:
  BN_CTX_free(ctx);
  BN_clear_free(r);
  BN_clear_free(r_00);
  BN_clear_free(r_01);
  BN_free(b);
  return r_02;
}

