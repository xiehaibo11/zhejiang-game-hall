
undefined4 ec_GF2m_simple_is_on_curve(EC_GROUP *param_1,EC_POINT *param_2,BN_CTX *param_3)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BN_CTX *c;
  
                    /* try { // try from 00bae03c to 00cae087 has its CatchHandler @ 00badf58 */
  iVar3 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar3 != 0) {
    return 1;
  }
                    /* catch() { ... } // from try @ 00badfe4 with catch @ 00bae074 */
  if (*(int *)(param_2 + 0x20) == 0) {
LAB_00bae188:
    uVar4 = 0xffffffff;
  }
  else {
    pcVar1 = *(code **)(*(long *)param_1 + 0x108);
    pcVar2 = *(code **)(*(long *)param_1 + 0x110);
    if (param_3 == (BN_CTX *)0x0) {
      param_3 = BN_CTX_new();
      c = param_3;
      if (param_3 == (BN_CTX *)0x0) goto LAB_00bae188;
    }
    else {
      c = (BN_CTX *)0x0;
                    /* catch() { ... } // from try @ 00bae104 with catch @ 00bae088
                       catch() { ... } // from try @ 00bae140 with catch @ 00bae088 */
    }
    BN_CTX_start(param_3);
    pBVar5 = BN_CTX_get(param_3);
    pBVar6 = BN_CTX_get(param_3);
                    /* try { // try from 00bae0f8 to 00cae103 has its CatchHandler @ 00bae178 */
                    /* try { // try from 00bae104 to 00cae133 has its CatchHandler @ 00bae088 */
                    /* try { // try from 00bae134 to 00cae13f has its CatchHandler @ 00bae180 */
                    /* try { // try from 00bae140 to 00cae197 has its CatchHandler @ 00bae088 */
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
                    /* catch() { ... } // from try @ 00bae0f8 with catch @ 00bae178 */
    BN_CTX_end(param_3);
                    /* catch() { ... } // from try @ 00bae134 with catch @ 00bae180 */
    BN_CTX_free(c);
  }
  return uVar4;
}

