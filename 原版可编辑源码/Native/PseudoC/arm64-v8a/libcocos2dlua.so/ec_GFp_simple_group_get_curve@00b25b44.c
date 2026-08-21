
undefined4
ec_GFp_simple_group_get_curve
          (long *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  BIGNUM *pBVar2;
  undefined4 uVar3;
  BN_CTX *c;
  
  if ((param_2 != (BIGNUM *)0x0) &&
     (pBVar2 = BN_copy(param_2,(BIGNUM *)param_1[8]), pBVar2 == (BIGNUM *)0x0)) {
    return 0;
  }
  if (param_3 == (BIGNUM *)0x0 && param_4 == (BIGNUM *)0x0) {
LAB_00b25bd4:
    c = (BN_CTX *)0x0;
LAB_00b25bd8:
    uVar3 = 1;
  }
  else {
    if (*(long *)(*param_1 + 0x128) == 0) {
      if ((param_3 != (BIGNUM *)0x0) &&
         (pBVar2 = BN_copy(param_3,(BIGNUM *)param_1[0xc]), pBVar2 == (BIGNUM *)0x0)) {
        uVar3 = 0;
        c = (BN_CTX *)0x0;
        goto LAB_00b25bdc;
      }
      if (param_4 == (BIGNUM *)0x0) goto LAB_00b25bd4;
      pBVar2 = BN_copy(param_4,(BIGNUM *)param_1[0xd]);
      c = (BN_CTX *)0x0;
      if (pBVar2 != (BIGNUM *)0x0) goto LAB_00b25bd8;
    }
    else {
      if (param_5 == (BN_CTX *)0x0) {
        c = BN_CTX_new();
        param_5 = c;
        if (c == (BN_CTX *)0x0) {
          return 0;
        }
      }
      else {
        c = (BN_CTX *)0x0;
      }
      if (((param_3 == (BIGNUM *)0x0) ||
          (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_3,param_1[0xc],param_5), iVar1 != 0
          )) && ((param_4 == (BIGNUM *)0x0 ||
                 (iVar1 = (**(code **)(*param_1 + 0x128))(param_1,param_4,param_1[0xd],param_5),
                 iVar1 != 0)))) goto LAB_00b25bd8;
    }
    uVar3 = 0;
  }
LAB_00b25bdc:
  BN_CTX_free(c);
  return uVar3;
}

