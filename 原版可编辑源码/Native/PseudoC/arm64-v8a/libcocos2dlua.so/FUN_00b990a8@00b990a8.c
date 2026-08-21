
undefined8 FUN_00b990a8(int param_1,BIGNUM *param_2,BIGNUM *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  pcVar1 = BN_pseudo_rand;
                    /* catch() { ... } // from try @ 00b99080 with catch @ 00b990d8 */
  if (param_1 == 0) {
    pcVar1 = BN_rand;
  }
  if ((param_3->neg == 0) && (iVar2 = BN_is_zero(param_3), iVar2 == 0)) {
    iVar2 = BN_num_bits(param_3);
    if (iVar2 == 1) {
      BN_set_word(param_2,0);
      uVar5 = 1;
    }
    else {
      iVar3 = BN_is_bit_set(param_3,iVar2 + -2);
      if ((iVar3 == 0) && (iVar3 = BN_is_bit_set(param_3,iVar2 + -3), iVar3 == 0)) {
        iVar3 = -100;
        do {
          uVar5 = (*pcVar1)(param_2,iVar2 + 1,0xffffffff,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          iVar4 = BN_cmp(param_2,param_3);
          if (-1 < iVar4) {
            iVar4 = BN_sub(param_2,param_2,param_3);
            if (iVar4 == 0) {
              return 0;
            }
            iVar4 = BN_cmp(param_2,param_3);
            if (-1 < iVar4) {
              iVar4 = BN_sub(param_2,param_2,param_3);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
                    /* try { // try from 00b99230 to 00c9941f has its CatchHandler @ 00b99230
                       catch() { ... } // from try @ 00b99230 with catch @ 00b99230
                       catch() { ... } // from try @ 00b9946c with catch @ 00b99230
                       catch() { ... } // from try @ 00b994fc with catch @ 00b99230
                       catch() { ... } // from try @ 00b996e8 with catch @ 00b99230
                       catch() { ... } // from try @ 00b99804 with catch @ 00b99230 */
          iVar3 = iVar3 + 1;
          if (iVar3 == 0) {
            iVar2 = 0x71;
            iVar3 = 0x99;
            goto LAB_00b99108;
          }
          iVar4 = BN_cmp(param_2,param_3);
          uVar5 = 1;
        } while (-1 < iVar4);
      }
      else {
        iVar3 = -100;
        do {
          uVar5 = (*pcVar1)(param_2,iVar2,0xffffffff,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          iVar3 = iVar3 + 1;
          if (iVar3 == 0) {
            iVar2 = 0x71;
            iVar3 = 0xa6;
            goto LAB_00b99108;
          }
          iVar4 = BN_cmp(param_2,param_3);
          uVar5 = 1;
        } while (-1 < iVar4);
      }
    }
  }
  else {
    iVar2 = 0x73;
    iVar3 = 0x78;
LAB_00b99108:
    ERR_put_error(3,0x7a,iVar2,"crypto/bn/bn_rand.c",iVar3);
    uVar5 = 0;
  }
  return uVar5;
}

