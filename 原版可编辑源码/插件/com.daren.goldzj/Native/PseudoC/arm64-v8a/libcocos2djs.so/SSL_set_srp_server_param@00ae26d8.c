
undefined4
SSL_set_srp_server_param
          (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  BIGNUM *pBVar2;
  
                    /* catch() { ... } // from try @ 00ae2474 with catch @ 00ae26dc */
                    /* catch() { ... } // from try @ 00ae24b4 with catch @ 00ae26f4 */
                    /* catch() { ... } // from try @ 00ae2374 with catch @ 00ae26f8 */
                    /* catch() { ... } // from try @ 00ae23fc with catch @ 00ae2700 */
  if (param_2 != (BIGNUM *)0x0) {
                    /* catch() { ... } // from try @ 00ae2628 with catch @ 00ae2704 */
    if (*(BIGNUM **)(param_1 + 0x340) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_2);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x340),param_2);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00ae2730;
      BN_free(*(BIGNUM **)(param_1 + 0x340));
      pBVar2 = (BIGNUM *)0x0;
    }
    *(BIGNUM **)(param_1 + 0x340) = pBVar2;
  }
LAB_00ae2730:
  if (param_3 != (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 0x348) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_3);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x348),param_3);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00ae2764;
      BN_free(*(BIGNUM **)(param_1 + 0x348));
      pBVar2 = (BIGNUM *)0x0;
                    /* catch() { ... } // from try @ 00ae290c with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae2a7c with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae2b60 with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae2cb0 with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae2df4 with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae30ec with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae3140 with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae3300 with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae34b0 with catch @ 00ae2754
                       catch() { ... } // from try @ 00ae35dc with catch @ 00ae2754 */
    }
    *(BIGNUM **)(param_1 + 0x348) = pBVar2;
  }
LAB_00ae2764:
  if (param_4 != (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 0x350) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_4);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x350),param_4);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00ae2798;
      BN_free(*(BIGNUM **)(param_1 + 0x350));
      pBVar2 = (BIGNUM *)0x0;
    }
    *(BIGNUM **)(param_1 + 0x350) = pBVar2;
  }
LAB_00ae2798:
  if (param_5 != (BIGNUM *)0x0) {
    if (*(BIGNUM **)(param_1 + 0x378) == (BIGNUM *)0x0) {
      pBVar2 = BN_dup(param_5);
    }
    else {
      pBVar2 = BN_copy(*(BIGNUM **)(param_1 + 0x378),param_5);
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00ae27cc;
      BN_free(*(BIGNUM **)(param_1 + 0x378));
      pBVar2 = (BIGNUM *)0x0;
    }
    *(BIGNUM **)(param_1 + 0x378) = pBVar2;
  }
LAB_00ae27cc:
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

