
int EC_GROUP_set_generator(EC_GROUP *group,EC_POINT *generator,BIGNUM *order,BIGNUM *cofactor)

{
  int iVar1;
  EC_POINT *pEVar2;
  BIGNUM *pBVar3;
  BN_CTX *ctx;
  BN_MONT_CTX *mont;
  int reason;
  int line;
  code *pcVar4;
  
  if (generator == (EC_POINT *)0x0) {
    iVar1 = 0x6f;
    reason = 0x43;
    line = 0x107;
LAB_00b1e624:
    ERR_put_error(0x10,iVar1,reason,"crypto/ec/ec_lib.c",line);
    return 0;
  }
  pEVar2 = *(EC_POINT **)(group + 8);
  if (pEVar2 == (EC_POINT *)0x0) {
    pEVar2 = EC_POINT_new(group);
    *(EC_POINT **)(group + 8) = pEVar2;
    if (pEVar2 == (EC_POINT *)0x0) {
      return 0;
    }
  }
  pcVar4 = *(code **)(*(long *)pEVar2 + 0x68);
  if (pcVar4 == (code *)0x0) {
    iVar1 = 0x72;
    reason = 0x42;
    line = 600;
    goto LAB_00b1e624;
  }
  if (*(long *)pEVar2 != *(long *)generator) {
    iVar1 = 0x72;
    reason = 0x65;
    line = 0x25c;
    goto LAB_00b1e624;
  }
  if ((pEVar2 != generator) && (iVar1 = (*pcVar4)(pEVar2,generator), iVar1 == 0)) {
    return 0;
  }
  if (order == (BIGNUM *)0x0) {
    BN_set_word(*(BIGNUM **)(group + 0x10),0);
    pBVar3 = *(BIGNUM **)(group + 0x18);
    if (cofactor == (BIGNUM *)0x0) goto LAB_00b1e690;
LAB_00b1e670:
    pBVar3 = BN_copy(pBVar3,cofactor);
    if (pBVar3 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  else {
    pBVar3 = BN_copy(*(BIGNUM **)(group + 0x10),order);
    if (pBVar3 == (BIGNUM *)0x0) {
      return 0;
    }
    pBVar3 = *(BIGNUM **)(group + 0x18);
    if (cofactor != (BIGNUM *)0x0) goto LAB_00b1e670;
LAB_00b1e690:
    BN_set_word(pBVar3,0);
  }
  iVar1 = BN_is_odd(*(undefined8 *)(group + 0x10));
  if (iVar1 == 0) {
    BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
    *(undefined8 *)(group + 0x90) = 0;
    return 1;
  }
  ctx = BN_CTX_new();
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
  *(undefined8 *)(group + 0x90) = 0;
  if (ctx != (BN_CTX *)0x0) {
    mont = BN_MONT_CTX_new();
    *(BN_MONT_CTX **)(group + 0x90) = mont;
    if (mont != (BN_MONT_CTX *)0x0) {
      iVar1 = BN_MONT_CTX_set(mont,*(BIGNUM **)(group + 0x10),ctx);
      if (iVar1 == 0) {
        BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
        iVar1 = 0;
        *(undefined8 *)(group + 0x90) = 0;
      }
      else {
        iVar1 = 1;
      }
      goto LAB_00b1e710;
    }
  }
  iVar1 = 0;
LAB_00b1e710:
  BN_CTX_free(ctx);
  return iVar1;
}

