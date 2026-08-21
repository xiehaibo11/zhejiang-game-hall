
undefined8 DH_set0_pqg(long param_1,long param_2,BIGNUM *param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0 && *(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) ||
     (param_4 == 0 && *(long *)(param_1 + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 8));
      *(long *)(param_1 + 8) = param_2;
    }
    if (param_3 != (BIGNUM *)0x0) {
      BN_free(*(BIGNUM **)(param_1 + 0x40));
      *(BIGNUM **)(param_1 + 0x40) = param_3;
    }
    if (param_4 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x10));
      *(long *)(param_1 + 0x10) = param_4;
    }
    if (param_3 != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(param_3);
      *(long *)(param_1 + 0x18) = (long)iVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

