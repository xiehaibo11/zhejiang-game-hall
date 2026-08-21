
undefined8 ec_GFp_simple_point_init(long param_1)

{
  BIGNUM *pBVar1;
  undefined8 uVar2;
  
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 8) = pBVar1;
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x10) = pBVar1;
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x18) = pBVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (((*(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (pBVar1 == (BIGNUM *)0x0)) {
    BN_free(*(BIGNUM **)(param_1 + 8));
    BN_free(*(BIGNUM **)(param_1 + 0x10));
    BN_free(*(BIGNUM **)(param_1 + 0x18));
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

