
bool ec_GF2m_simple_add(EC_GROUP *param_1,EC_POINT *param_2,EC_POINT *param_3,EC_POINT *param_4,
                       BN_CTX *param_5)

{
  bool bVar1;
  int iVar2;
  BN_CTX *c;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  EC_POINT *src;
  
  iVar2 = EC_POINT_is_at_infinity(param_1,param_3);
  src = param_4;
  if ((iVar2 != 0) || (iVar2 = EC_POINT_is_at_infinity(param_1,param_4), src = param_3, iVar2 != 0))
  {
    iVar2 = EC_POINT_copy(param_2,src);
    return iVar2 != 0;
  }
  if (param_5 == (BN_CTX *)0x0) {
    c = BN_CTX_new();
    param_5 = c;
    if (c == (BN_CTX *)0x0) {
      return false;
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
  pBVar3 = BN_CTX_get(param_5);
  pBVar4 = BN_CTX_get(param_5);
  pBVar5 = BN_CTX_get(param_5);
  pBVar6 = BN_CTX_get(param_5);
  if (pBVar6 != (BIGNUM *)0x0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      iVar2 = EC_POINT_get_affine_coordinates_GF2m(param_1,param_3,a,a_00,param_5);
      if (iVar2 != 0) {
LAB_00b9f52c:
        if (*(int *)(param_4 + 0x20) == 0) {
          iVar2 = EC_POINT_get_affine_coordinates_GF2m(param_1,param_4,a_01,a_02,param_5);
          if (iVar2 != 0) {
LAB_00b9f58c:
            iVar2 = BN_ucmp(a,a_01);
            if (iVar2 == 0) {
              iVar2 = BN_ucmp(a_00,a_02);
              if ((iVar2 != 0) || (iVar2 = BN_is_zero(a_01), iVar2 != 0)) {
                iVar2 = EC_POINT_set_to_infinity(param_1,param_2);
LAB_00b9f718:
                bVar1 = iVar2 != 0;
                goto LAB_00b9f6d8;
              }
              iVar2 = (**(code **)(*(long *)param_1 + 0x118))(param_1,pBVar5,a_02,a_01,param_5);
              if ((iVar2 != 0) &&
                 (((iVar2 = BN_GF2m_add(pBVar5,pBVar5,a_01), iVar2 != 0 &&
                   (iVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar3,pBVar5,param_5),
                   iVar2 != 0)) && (iVar2 = BN_GF2m_add(pBVar3,pBVar3,pBVar5), iVar2 != 0)))) {
                iVar2 = BN_GF2m_add(pBVar3,pBVar3,*(undefined8 *)(param_1 + 0x60));
                goto joined_r0x00b9f64c;
              }
            }
            else {
              iVar2 = BN_GF2m_add(pBVar6,a,a_01);
              if (((((iVar2 != 0) && (iVar2 = BN_GF2m_add(pBVar5,a_00,a_02), iVar2 != 0)) &&
                   (iVar2 = (**(code **)(*(long *)param_1 + 0x118))
                                      (param_1,pBVar5,pBVar5,pBVar6,param_5), iVar2 != 0)) &&
                  ((iVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar3,pBVar5,param_5),
                   iVar2 != 0 &&
                   (iVar2 = BN_GF2m_add(pBVar3,pBVar3,*(undefined8 *)(param_1 + 0x60)), iVar2 != 0))
                  )) && (iVar2 = BN_GF2m_add(pBVar3,pBVar3,pBVar5), iVar2 != 0)) {
                iVar2 = BN_GF2m_add(pBVar3,pBVar3,pBVar6);
joined_r0x00b9f64c:
                if (((iVar2 != 0) && (iVar2 = BN_GF2m_add(pBVar4,a_01,pBVar3), iVar2 != 0)) &&
                   ((iVar2 = (**(code **)(*(long *)param_1 + 0x108))
                                       (param_1,pBVar4,pBVar4,pBVar5,param_5), iVar2 != 0 &&
                    ((iVar2 = BN_GF2m_add(pBVar4,pBVar4,pBVar3), iVar2 != 0 &&
                     (iVar2 = BN_GF2m_add(pBVar4,pBVar4,a_02), iVar2 != 0)))))) {
                  iVar2 = EC_POINT_set_affine_coordinates_GF2m
                                    (param_1,param_2,pBVar3,pBVar4,param_5);
                  goto LAB_00b9f718;
                }
              }
            }
          }
        }
        else {
          pBVar7 = BN_copy(a_01,*(BIGNUM **)(param_4 + 8));
          if ((pBVar7 != (BIGNUM *)0x0) &&
             (pBVar7 = BN_copy(a_02,*(BIGNUM **)(param_4 + 0x10)), pBVar7 != (BIGNUM *)0x0))
          goto LAB_00b9f58c;
        }
      }
    }
    else {
      pBVar7 = BN_copy(a,*(BIGNUM **)(param_3 + 8));
      if ((pBVar7 != (BIGNUM *)0x0) &&
         (pBVar7 = BN_copy(a_00,*(BIGNUM **)(param_3 + 0x10)), pBVar7 != (BIGNUM *)0x0))
      goto LAB_00b9f52c;
    }
  }
  bVar1 = false;
LAB_00b9f6d8:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return bVar1;
}

