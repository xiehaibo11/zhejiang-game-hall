
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
                    /* catch() { ... } // from try @ 00bada70 with catch @ 00badc04 */
  src = param_4;
                    /* catch() { ... } // from try @ 00bad9dc with catch @ 00badc1c */
                    /* catch() { ... } // from try @ 00bada24 with catch @ 00badc20 */
  if ((iVar2 != 0) || (iVar2 = EC_POINT_is_at_infinity(param_1,param_4), src = param_3, iVar2 != 0))
  {
                    /* catch() { ... } // from try @ 00bad9a4 with catch @ 00badc2c */
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
                    /* try { // try from 00badcdc to 00caddc7 has its CatchHandler @ 00badcdc
                       catch() { ... } // from try @ 00badcdc with catch @ 00badcdc
                       catch() { ... } // from try @ 00baddec with catch @ 00badcdc */
  if (pBVar6 != (BIGNUM *)0x0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      iVar2 = EC_POINT_get_affine_coordinates_GF2m(param_1,param_3,a,a_00,param_5);
      if (iVar2 != 0) {
LAB_00badd2c:
        if (*(int *)(param_4 + 0x20) == 0) {
          iVar2 = EC_POINT_get_affine_coordinates_GF2m(param_1,param_4,a_01,a_02,param_5);
          if (iVar2 != 0) {
LAB_00badd8c:
            iVar2 = BN_ucmp(a,a_01);
            if (iVar2 == 0) {
              iVar2 = BN_ucmp(a_00,a_02);
              if ((iVar2 != 0) || (iVar2 = BN_is_zero(a_01), iVar2 != 0)) {
                iVar2 = EC_POINT_set_to_infinity(param_1,param_2);
LAB_00badf18:
                bVar1 = iVar2 != 0;
                goto LAB_00baded8;
              }
              iVar2 = (**(code **)(*(long *)param_1 + 0x118))(param_1,pBVar5,a_02,a_01,param_5);
                    /* try { // try from 00badf58 to 00cadfe3 has its CatchHandler @ 00badf58
                       catch() { ... } // from try @ 00badf58 with catch @ 00badf58
                       catch() { ... } // from try @ 00bae03c with catch @ 00badf58 */
              if ((iVar2 != 0) &&
                 (((iVar2 = BN_GF2m_add(pBVar5,pBVar5,a_01), iVar2 != 0 &&
                   (iVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar3,pBVar5,param_5),
                   iVar2 != 0)) && (iVar2 = BN_GF2m_add(pBVar3,pBVar3,pBVar5), iVar2 != 0)))) {
                iVar2 = BN_GF2m_add(pBVar3,pBVar3,*(undefined8 *)(param_1 + 0x60));
                goto joined_r0x00bade4c;
              }
            }
            else {
              iVar2 = BN_GF2m_add(pBVar6,a,a_01);
                    /* try { // try from 00baddc8 to 00caddd3 has its CatchHandler @ 00bade28 */
                    /* try { // try from 00badde0 to 00caddeb has its CatchHandler @ 00bade20 */
                    /* try { // try from 00baddec to 00cade3f has its CatchHandler @ 00badcdc */
                    /* catch() { ... } // from try @ 00badde0 with catch @ 00bade20 */
                    /* catch() { ... } // from try @ 00baddc8 with catch @ 00bade28 */
              if (((((iVar2 != 0) && (iVar2 = BN_GF2m_add(pBVar5,a_00,a_02), iVar2 != 0)) &&
                   (iVar2 = (**(code **)(*(long *)param_1 + 0x118))
                                      (param_1,pBVar5,pBVar5,pBVar6,param_5), iVar2 != 0)) &&
                  ((iVar2 = (**(code **)(*(long *)param_1 + 0x110))(param_1,pBVar3,pBVar5,param_5),
                   iVar2 != 0 &&
                   (iVar2 = BN_GF2m_add(pBVar3,pBVar3,*(undefined8 *)(param_1 + 0x60)), iVar2 != 0))
                  )) && (iVar2 = BN_GF2m_add(pBVar3,pBVar3,pBVar5), iVar2 != 0)) {
                iVar2 = BN_GF2m_add(pBVar3,pBVar3,pBVar6);
joined_r0x00bade4c:
                if (((iVar2 != 0) && (iVar2 = BN_GF2m_add(pBVar4,a_01,pBVar3), iVar2 != 0)) &&
                   ((iVar2 = (**(code **)(*(long *)param_1 + 0x108))
                                       (param_1,pBVar4,pBVar4,pBVar5,param_5), iVar2 != 0 &&
                    ((iVar2 = BN_GF2m_add(pBVar4,pBVar4,pBVar3), iVar2 != 0 &&
                     (iVar2 = BN_GF2m_add(pBVar4,pBVar4,a_02), iVar2 != 0)))))) {
                  iVar2 = EC_POINT_set_affine_coordinates_GF2m
                                    (param_1,param_2,pBVar3,pBVar4,param_5);
                  goto LAB_00badf18;
                }
              }
            }
          }
        }
        else {
          pBVar7 = BN_copy(a_01,*(BIGNUM **)(param_4 + 8));
          if ((pBVar7 != (BIGNUM *)0x0) &&
             (pBVar7 = BN_copy(a_02,*(BIGNUM **)(param_4 + 0x10)), pBVar7 != (BIGNUM *)0x0))
          goto LAB_00badd8c;
        }
      }
    }
    else {
      pBVar7 = BN_copy(a,*(BIGNUM **)(param_3 + 8));
      if ((pBVar7 != (BIGNUM *)0x0) &&
         (pBVar7 = BN_copy(a_00,*(BIGNUM **)(param_3 + 0x10)), pBVar7 != (BIGNUM *)0x0))
      goto LAB_00badd2c;
    }
  }
  bVar1 = false;
LAB_00baded8:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
                    /* catch() { ... } // from try @ 00bad98c with catch @ 00badc48 */
                    /* catch() { ... } // from try @ 00bad97c with catch @ 00badc4c */
                    /* catch() { ... } // from try @ 00badb2c with catch @ 00badc50 */
                    /* catch() { ... } // from try @ 00badad4 with catch @ 00badc54 */
                    /* catch() { ... } // from try @ 00bad9f8 with catch @ 00badc58 */
  return bVar1;
}

