
undefined8 DSA_set0_key(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0 && *(BIGNUM **)(param_1 + 0x28) == (BIGNUM *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x28));
      *(long *)(param_1 + 0x28) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x30));
      *(long *)(param_1 + 0x30) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

