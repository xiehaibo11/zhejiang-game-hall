
undefined8 RSA_set0_crt_params(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (((param_2 == 0 && *(BIGNUM **)(param_1 + 0x48) == (BIGNUM *)0x0) ||
      (param_3 == 0 && *(long *)(param_1 + 0x50) == 0)) ||
     (param_4 == 0 && *(long *)(param_1 + 0x58) == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x48));
      *(long *)(param_1 + 0x48) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x50));
      *(long *)(param_1 + 0x50) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x58));
      *(long *)(param_1 + 0x58) = param_4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

