
uint ec_GFp_simple_add(EC_GROUP *param_1,EC_POINT *param_2,EC_POINT *param_3,EC_POINT *param_4,
                      BN_CTX *param_5)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *a_03;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *pBVar5;
  EC_POINT *src;
  BN_CTX *c;
  BIGNUM *m;
  
  if (param_3 == param_4) {
    uVar4 = EC_POINT_dbl(param_1,param_2,param_3,param_5);
    return uVar4;
  }
  iVar3 = EC_POINT_is_at_infinity(param_1,param_3);
  src = param_4;
  if ((iVar3 != 0) || (iVar3 = EC_POINT_is_at_infinity(param_1,param_4), src = param_3, iVar3 != 0))
  {
    uVar4 = EC_POINT_copy(param_2,src);
    return uVar4;
  }
  m = *(BIGNUM **)(param_1 + 0x40);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  pcVar2 = *(code **)(*(long *)param_1 + 0x110);
  if (param_5 == (BN_CTX *)0x0) {
    param_5 = BN_CTX_new();
    c = param_5;
    if (param_5 == (BN_CTX *)0x0) {
      return 0;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_5);
  a = BN_CTX_get(param_5);
  a_00 = BN_CTX_get(param_5);
  a_01 = BN_CTX_get(param_5);
  a_02 = BN_CTX_get(param_5);
  a_03 = BN_CTX_get(param_5);
  r = BN_CTX_get(param_5);
  r_00 = BN_CTX_get(param_5);
  if (r_00 == (BIGNUM *)0x0) {
LAB_00b26b24:
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_4 + 0x20) == 0) {
      iVar3 = (*pcVar2)(param_1,a,*(undefined8 *)(param_4 + 0x18),param_5);
      if ((((iVar3 != 0) &&
           (iVar3 = (*pcVar1)(param_1,a_00,*(undefined8 *)(param_3 + 8),a,param_5), iVar3 != 0)) &&
          (iVar3 = (*pcVar1)(param_1,a,a,*(undefined8 *)(param_4 + 0x18),param_5), iVar3 != 0)) &&
         (iVar3 = (*pcVar1)(param_1,a_01,*(undefined8 *)(param_3 + 0x10),a,param_5), iVar3 != 0))
      goto LAB_00b26794;
      goto LAB_00b26b24;
    }
    pBVar5 = BN_copy(a_00,*(BIGNUM **)(param_3 + 8));
    if ((pBVar5 == (BIGNUM *)0x0) ||
       (pBVar5 = BN_copy(a_01,*(BIGNUM **)(param_3 + 0x10)), pBVar5 == (BIGNUM *)0x0))
    goto LAB_00b26b24;
LAB_00b26794:
    if (*(int *)(param_3 + 0x20) == 0) {
      iVar3 = (*pcVar2)(param_1,a,*(undefined8 *)(param_3 + 0x18),param_5);
      if (((iVar3 != 0) &&
          (iVar3 = (*pcVar1)(param_1,a_02,*(undefined8 *)(param_4 + 8),a,param_5), iVar3 != 0)) &&
         ((iVar3 = (*pcVar1)(param_1,a,a,*(undefined8 *)(param_3 + 0x18),param_5), iVar3 != 0 &&
          (iVar3 = (*pcVar1)(param_1,a_03,*(undefined8 *)(param_4 + 0x10),a,param_5), iVar3 != 0))))
      goto LAB_00b267bc;
      goto LAB_00b26b24;
    }
    pBVar5 = BN_copy(a_02,*(BIGNUM **)(param_4 + 8));
    if ((pBVar5 == (BIGNUM *)0x0) ||
       (pBVar5 = BN_copy(a_03,*(BIGNUM **)(param_4 + 0x10)), pBVar5 == (BIGNUM *)0x0))
    goto LAB_00b26b24;
LAB_00b267bc:
    iVar3 = BN_mod_sub_quick(r,a_00,a_02,m);
    if ((iVar3 == 0) || (iVar3 = BN_mod_sub_quick(r_00,a_01,a_03,m), iVar3 == 0)) goto LAB_00b26b24;
    iVar3 = BN_is_zero(r);
    if (iVar3 == 0) {
      iVar3 = BN_mod_add_quick(a_00,a_00,a_02,m);
      if ((iVar3 == 0) || (iVar3 = BN_mod_add_quick(a_01,a_01,a_03,m), iVar3 == 0))
      goto LAB_00b26b24;
      if (*(int *)(param_3 + 0x20) == 0) {
        pBVar5 = *(BIGNUM **)(param_3 + 0x18);
        if (*(int *)(param_4 + 0x20) != 0) goto LAB_00b269a0;
        iVar3 = (*pcVar1)(param_1,a,pBVar5,*(undefined8 *)(param_4 + 0x18),param_5);
        if (iVar3 == 0) goto LAB_00b26b24;
LAB_00b269d0:
        iVar3 = (*pcVar1)(param_1,*(undefined8 *)(param_2 + 0x18),a,r,param_5);
        if (iVar3 == 0) goto LAB_00b26b24;
      }
      else {
        if (*(int *)(param_4 + 0x20) == 0) {
          pBVar5 = *(BIGNUM **)(param_4 + 0x18);
LAB_00b269a0:
          pBVar5 = BN_copy(a,pBVar5);
          if (pBVar5 == (BIGNUM *)0x0) goto LAB_00b26b24;
          goto LAB_00b269d0;
        }
        pBVar5 = BN_copy(*(BIGNUM **)(param_2 + 0x18),r);
        if (pBVar5 == (BIGNUM *)0x0) goto LAB_00b26b24;
      }
      *(undefined4 *)(param_2 + 0x20) = 0;
      iVar3 = (*pcVar2)(param_1,a,r_00,param_5);
      if (((((iVar3 == 0) || (iVar3 = (*pcVar2)(param_1,a_03,r,param_5), iVar3 == 0)) ||
           (iVar3 = (*pcVar1)(param_1,a_02,a_00,a_03,param_5), iVar3 == 0)) ||
          ((((iVar3 = BN_mod_sub_quick(*(BIGNUM **)(param_2 + 8),a,a_02,m), iVar3 == 0 ||
             (iVar3 = BN_mod_lshift1_quick(a,*(BIGNUM **)(param_2 + 8),m), iVar3 == 0)) ||
            ((iVar3 = BN_mod_sub_quick(a,a_02,a,m), iVar3 == 0 ||
             ((iVar3 = (*pcVar1)(param_1,a,a,r_00,param_5), iVar3 == 0 ||
              (iVar3 = (*pcVar1)(param_1,r,a_03,r,param_5), iVar3 == 0)))))) ||
           (iVar3 = (*pcVar1)(param_1,a_00,a_01,r,param_5), iVar3 == 0)))) ||
         ((iVar3 = BN_mod_sub_quick(a,a,a_00,m), iVar3 == 0 ||
          ((iVar3 = BN_is_odd(a), iVar3 != 0 && (iVar3 = BN_add(a,a,m), iVar3 == 0))))))
      goto LAB_00b26b24;
      iVar3 = BN_rshift1(*(BIGNUM **)(param_2 + 0x10),a);
      uVar4 = (uint)(iVar3 != 0);
    }
    else {
      iVar3 = BN_is_zero(r_00);
      if (iVar3 != 0) {
        BN_CTX_end(param_5);
        uVar4 = EC_POINT_dbl(param_1,param_2,param_3,param_5);
        goto LAB_00b26b30;
      }
      BN_set_word(*(BIGNUM **)(param_2 + 0x18),0);
      *(undefined4 *)(param_2 + 0x20) = 0;
      uVar4 = 1;
    }
  }
  BN_CTX_end(param_5);
LAB_00b26b30:
  BN_CTX_free(c);
  return uVar4;
}

