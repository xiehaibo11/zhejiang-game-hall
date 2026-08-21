
undefined8 ec_key_simple_oct2priv(long param_1,uchar *param_2,int param_3)

{
  int reason;
  BIGNUM *pBVar1;
  int line;
  
  pBVar1 = *(BIGNUM **)(param_1 + 0x28);
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)BN_secure_new();
    *(BIGNUM **)(param_1 + 0x28) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) {
      reason = 0x41;
      line = 0x259;
      goto LAB_00b0e390;
    }
  }
  pBVar1 = BN_bin2bn(param_2,param_3,pBVar1);
  *(BIGNUM **)(param_1 + 0x28) = pBVar1;
  if (pBVar1 != (BIGNUM *)0x0) {
    return 1;
  }
  reason = 3;
  line = 0x25e;
LAB_00b0e390:
  ERR_put_error(0x10,0x103,reason,"crypto/ec/ec_key.c",line);
  return 0;
}

