
undefined8 DSA_set0_pqg(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  if (((param_2 == 0 && *(BIGNUM **)(param_1 + 0x10) == (BIGNUM *)0x0) ||
      (param_3 == 0 && *(long *)(param_1 + 0x18) == 0)) ||
     (param_4 == 0 && *(long *)(param_1 + 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x10));
      *(long *)(param_1 + 0x10) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x18));
      *(long *)(param_1 + 0x18) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x20));
      *(long *)(param_1 + 0x20) = param_4;
    }
    uVar1 = 1;
  }
  return uVar1;
}

