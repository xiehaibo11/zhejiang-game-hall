
undefined8 RSA_set0_factors(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == 0 && *(BIGNUM **)(param_1 + 0x38) == (BIGNUM *)0x0) ||
     (param_3 == 0 && *(long *)(param_1 + 0x40) == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x38));
      *(long *)(param_1 + 0x38) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x40));
      *(long *)(param_1 + 0x40) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

