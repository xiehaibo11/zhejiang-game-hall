
undefined4
SRP_create_verifier_BN
          (long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,BIGNUM *param_5,
          BIGNUM *param_6)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *p;
  BIGNUM *a;
  undefined4 uVar2;
  uchar auStack_a24 [2500];
  
  ctx = BN_CTX_new();
  uVar2 = 0;
  p = (BIGNUM *)0x0;
  a = p;
  if (((((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined8 *)0x0)) ||
      ((param_4 == (undefined8 *)0x0 || (param_5 == (BIGNUM *)0x0)))) ||
     ((param_6 == (BIGNUM *)0x0 || (a = (BIGNUM *)0x0, ctx == (BN_CTX *)0x0))))
  goto joined_r0x00b62584;
  a = (BIGNUM *)*param_3;
  if (a == (BIGNUM *)0x0) {
    iVar1 = RAND_bytes(auStack_a24,0x14);
    if (0 < iVar1) {
      a = BN_bin2bn(auStack_a24,0x14,(BIGNUM *)0x0);
      goto LAB_00b624c0;
    }
    p = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
  }
  else {
LAB_00b624c0:
    p = (BIGNUM *)SRP_Calc_x(a,param_1,param_2);
    r = BN_new();
    *param_4 = r;
    if (r == (BIGNUM *)0x0) {
      uVar2 = 0;
      goto joined_r0x00b62584;
    }
    iVar1 = BN_mod_exp(r,param_6,p,param_5,ctx);
    if (iVar1 != 0) {
      uVar2 = 1;
      *param_3 = a;
      goto joined_r0x00b62584;
    }
    BN_clear_free((BIGNUM *)*param_4);
  }
  uVar2 = 0;
joined_r0x00b62584:
  if ((param_3 != (undefined8 *)0x0) && ((BIGNUM *)*param_3 != a)) {
    BN_clear_free(a);
  }
  BN_clear_free(p);
  BN_CTX_free(ctx);
  return uVar2;
}

