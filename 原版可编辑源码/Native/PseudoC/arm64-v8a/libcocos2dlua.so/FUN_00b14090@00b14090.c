
undefined8 FUN_00b14090(long param_1,long param_2,uint param_3)

{
  BIGNUM *pBVar1;
  long lVar2;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)(*(long *)(param_2 + 0x40) != 0);
    pBVar1 = *(BIGNUM **)(param_2 + 8);
  }
  else {
    pBVar1 = *(BIGNUM **)(param_2 + 8);
  }
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)0x0;
  }
  else {
    pBVar1 = BN_dup(pBVar1);
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  BN_free(*(BIGNUM **)(param_1 + 8));
  *(BIGNUM **)(param_1 + 8) = pBVar1;
  if (*(BIGNUM **)(param_2 + 0x10) == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)0x0;
  }
  else {
    pBVar1 = BN_dup(*(BIGNUM **)(param_2 + 0x10));
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  BN_free(*(BIGNUM **)(param_1 + 0x10));
  *(BIGNUM **)(param_1 + 0x10) = pBVar1;
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    if (*(BIGNUM **)(param_2 + 0x40) == (BIGNUM *)0x0) {
      pBVar1 = (BIGNUM *)0x0;
    }
    else {
      pBVar1 = BN_dup(*(BIGNUM **)(param_2 + 0x40));
      if (pBVar1 == (BIGNUM *)0x0) {
        return 0;
      }
    }
    BN_free(*(BIGNUM **)(param_1 + 0x40));
    *(BIGNUM **)(param_1 + 0x40) = pBVar1;
    if (*(BIGNUM **)(param_2 + 0x48) == (BIGNUM *)0x0) {
      pBVar1 = (BIGNUM *)0x0;
    }
    else {
      pBVar1 = BN_dup(*(BIGNUM **)(param_2 + 0x48));
      if (pBVar1 == (BIGNUM *)0x0) {
        return 0;
      }
    }
    BN_free(*(BIGNUM **)(param_1 + 0x48));
    *(BIGNUM **)(param_1 + 0x48) = pBVar1;
    CRYPTO_free(*(void **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(long *)(param_2 + 0x50) != 0) {
      lVar2 = CRYPTO_memdup(*(long *)(param_2 + 0x50),(long)*(int *)(param_2 + 0x58),
                            "crypto/dh/dh_ameth.c",0x195);
      *(long *)(param_1 + 0x50) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
  }
  return 1;
}

