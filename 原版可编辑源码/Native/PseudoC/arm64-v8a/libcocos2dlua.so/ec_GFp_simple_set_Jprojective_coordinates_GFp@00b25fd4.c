
undefined4
ec_GFp_simple_set_Jprojective_coordinates_GFp
          (long *param_1,long param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          BN_CTX *param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  BN_CTX *c;
  undefined4 uVar5;
  
  if (param_6 == (BN_CTX *)0x0) {
    c = BN_CTX_new();
    if (c == (BN_CTX *)0x0) {
      return 0;
    }
    param_6 = c;
    if (param_3 != (BIGNUM *)0x0) goto LAB_00b26028;
LAB_00b26064:
    if ((param_4 == (BIGNUM *)0x0) ||
       ((iVar1 = BN_nnmod(*(BIGNUM **)(param_2 + 0x10),param_4,(BIGNUM *)param_1[8],param_6),
        iVar1 != 0 &&
        ((*(code **)(*param_1 + 0x120) == (code *)0x0 ||
         (iVar1 = (**(code **)(*param_1 + 0x120))
                            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10)
                             ,param_6), iVar1 != 0)))))) {
      if (param_5 != (BIGNUM *)0x0) {
        iVar1 = BN_nnmod(*(BIGNUM **)(param_2 + 0x18),param_5,(BIGNUM *)param_1[8],param_6);
        if (iVar1 == 0) goto LAB_00b260f8;
        iVar1 = BN_is_one(*(undefined8 *)(param_2 + 0x18));
        pcVar3 = *(code **)(*param_1 + 0x120);
        if (pcVar3 != (code *)0x0) {
          if ((iVar1 == 0) || (pcVar4 = *(code **)(*param_1 + 0x130), pcVar4 == (code *)0x0)) {
            iVar2 = (*pcVar3)(param_1,*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_2 + 0x18),param_6);
          }
          else {
            iVar2 = (*pcVar4)(param_1,*(undefined8 *)(param_2 + 0x18),param_6);
          }
          if (iVar2 == 0) goto LAB_00b260f8;
        }
        *(int *)(param_2 + 0x20) = iVar1;
      }
      uVar5 = 1;
      goto LAB_00b26128;
    }
  }
  else {
    c = (BN_CTX *)0x0;
    if (param_3 == (BIGNUM *)0x0) goto LAB_00b26064;
LAB_00b26028:
    iVar1 = BN_nnmod(*(BIGNUM **)(param_2 + 8),param_3,(BIGNUM *)param_1[8],param_6);
    if ((iVar1 != 0) &&
       ((*(code **)(*param_1 + 0x120) == (code *)0x0 ||
        (iVar1 = (**(code **)(*param_1 + 0x120))
                           (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 8),
                            param_6), iVar1 != 0)))) goto LAB_00b26064;
  }
LAB_00b260f8:
  uVar5 = 0;
LAB_00b26128:
  BN_CTX_free(c);
  return uVar5;
}

