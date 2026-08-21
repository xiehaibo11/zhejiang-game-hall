
BIGNUM * SRP_Calc_B(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *b;
  
  if (param_1 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_2 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_3 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_4 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return (BIGNUM *)0x0;
  }
  r = BN_new();
  if (r == (BIGNUM *)0x0) {
    r_00 = (BIGNUM *)0x0;
LAB_00b60a58:
    r_01 = (BIGNUM *)0x0;
  }
  else {
    r_00 = BN_new();
    if (r_00 == (BIGNUM *)0x0) goto LAB_00b60a58;
    r_01 = BN_new();
    if (r_01 != (BIGNUM *)0x0) {
      iVar1 = BN_mod_exp(r_00,param_3,param_1,param_2,ctx);
      if (iVar1 == 0) {
        b = (BIGNUM *)0x0;
      }
      else {
        b = (BIGNUM *)FUN_00b60740(param_2,param_3,param_2);
        if (((b != (BIGNUM *)0x0) && (iVar1 = BN_mod_mul(r,param_4,b,param_2,ctx), iVar1 != 0)) &&
           (iVar1 = BN_mod_add(r_01,r_00,r,param_2,ctx), iVar1 != 0)) goto LAB_00b60a74;
      }
      BN_free(r_01);
      r_01 = (BIGNUM *)0x0;
      goto LAB_00b60a74;
    }
  }
  b = (BIGNUM *)0x0;
LAB_00b60a74:
  BN_CTX_free(ctx);
  BN_clear_free(r);
  BN_clear_free(r_00);
  BN_free(b);
  return r_01;
}

