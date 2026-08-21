
undefined4
SSL_set_srp_server_param
          (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  BIGNUM *pBVar2;
  
  if (param_2 != (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 0x340) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_2);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x340),param_2);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00af15e4;
      BN_free(*(BIGNUM **)(param_1 + 0x340));
      pBVar2 = (BIGNUM *)0x0;
    }
    *(BIGNUM **)(param_1 + 0x340) = pBVar2;
  }
LAB_00af15e4:
  if (param_3 != (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 0x348) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_3);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x348),param_3);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00af1618;
      BN_free(*(BIGNUM **)(param_1 + 0x348));
      pBVar2 = (BIGNUM *)0x0;
    }
    *(BIGNUM **)(param_1 + 0x348) = pBVar2;
  }
LAB_00af1618:
  if (param_4 != (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 0x350) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_4);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x350),param_4);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00af164c;
      BN_free(*(BIGNUM **)(param_1 + 0x350));
      pBVar2 = (BIGNUM *)0x0;
    }
    *(BIGNUM **)(param_1 + 0x350) = pBVar2;
  }
LAB_00af164c:
  if (param_5 != (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 0x378) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_5);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x378),param_5);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00af1680;
      BN_free(*(BIGNUM **)(param_1 + 0x378));
      pBVar2 = (BIGNUM *)0x0;
    }
    *(BIGNUM **)(param_1 + 0x378) = pBVar2;
  }
LAB_00af1680:
  *(undefined8 *)(param_1 + 0x380) = param_6;
  if (((*(long *)(param_1 + 0x340) == 0) || (*(long *)(param_1 + 0x348) == 0)) ||
     (*(long *)(param_1 + 0x350) == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
    if (*(long *)(param_1 + 0x378) == 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

