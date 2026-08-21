
undefined4 ec_GF2m_simple_is_on_curve(EC_GROUP *param_1,EC_POINT *param_2,BN_CTX *param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BN_CTX *c;
  
  iVar3 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar3 != 0) {
    return 1;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
LAB_00b9f988:
    uVar4 = 0xffffffff;
  }
  else {
    pcVar1 = *(code **)(*(long *)param_1 + 0x108);
    pcVar2 = *(code **)(*(long *)param_1 + 0x110);
    if (param_3 == (BN_CTX *)0x0) {
      param_3 = BN_CTX_new();
      c = param_3;
      if (param_3 == (BN_CTX *)0x0) goto LAB_00b9f988;
    }
    else {
      c = (BN_CTX *)0x0;
    }
    BN_CTX_start(param_3);
    pBVar5 = BN_CTX_get(param_3);
    pBVar6 = BN_CTX_get(param_3);
    if (((((pBVar6 == (BIGNUM *)0x0) ||
          (iVar3 = BN_GF2m_add(pBVar6,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 0x60)),
          iVar3 == 0)) ||
         (iVar3 = (*pcVar1)(param_1,pBVar6,pBVar6,*(undefined8 *)(param_2 + 8),param_3), iVar3 == 0)
         ) || ((iVar3 = BN_GF2m_add(pBVar6,pBVar6,*(undefined8 *)(param_2 + 0x10)), iVar3 == 0 ||
               (iVar3 = (*pcVar1)(param_1,pBVar6,pBVar6,*(undefined8 *)(param_2 + 8),param_3),
               iVar3 == 0)))) ||
       ((iVar3 = BN_GF2m_add(pBVar6,pBVar6,*(undefined8 *)(param_1 + 0x68)), iVar3 == 0 ||
        ((iVar3 = (*pcVar2)(param_1,pBVar5,*(undefined8 *)(param_2 + 0x10),param_3), iVar3 == 0 ||
         (iVar3 = BN_GF2m_add(pBVar6,pBVar6,pBVar5), iVar3 == 0)))))) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = BN_is_zero(pBVar6);
    }
    BN_CTX_end(param_3);
    BN_CTX_free(c);
  }
  return uVar4;
}

