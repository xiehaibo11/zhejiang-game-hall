
int ec_GFp_mont_group_set_curve
              (long param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4,BN_CTX *param_5)

{
  int iVar1;
  BN_MONT_CTX *mont;
  BIGNUM *a;
  BIGNUM *pBVar2;
  BN_CTX *c;
  
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x80));
  c = (BN_CTX *)0x0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if ((param_5 == (BN_CTX *)0x0) && (c = BN_CTX_new(), param_5 = c, c == (BN_CTX *)0x0)) {
    return 0;
  }
  mont = BN_MONT_CTX_new();
  if (mont == (BN_MONT_CTX *)0x0) {
LAB_00b13860:
    a = (BIGNUM *)0x0;
  }
  else {
    iVar1 = BN_MONT_CTX_set(mont,param_2,param_5);
    if (iVar1 == 0) {
      ERR_put_error(0x10,0xbd,3,"crypto/ec/ecp_mont.c",0x9d);
      goto LAB_00b13860;
    }
    a = BN_new();
    if (a != (BIGNUM *)0x0) {
      pBVar2 = BN_value_one();
      iVar1 = BN_to_montgomery(a,pBVar2,mont,param_5);
      if (iVar1 != 0) {
        *(BN_MONT_CTX **)(param_1 + 0x78) = mont;
        *(BIGNUM **)(param_1 + 0x80) = a;
        iVar1 = ec_GFp_simple_group_set_curve(param_1,param_2,param_3,param_4,param_5);
        if (iVar1 == 0) {
          BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
          *(undefined8 *)(param_1 + 0x78) = 0;
          BN_free(*(BIGNUM **)(param_1 + 0x80));
          mont = (BN_MONT_CTX *)0x0;
          a = (BIGNUM *)0x0;
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
        else {
          mont = (BN_MONT_CTX *)0x0;
          a = (BIGNUM *)0x0;
        }
        goto LAB_00b13868;
      }
    }
  }
  iVar1 = 0;
LAB_00b13868:
  BN_free(a);
  BN_CTX_free(c);
  BN_MONT_CTX_free(mont);
  return iVar1;
}

