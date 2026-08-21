
int EC_GROUP_copy(EC_GROUP *dst,EC_GROUP *src)

{
  int iVar1;
  undefined8 uVar2;
  BN_MONT_CTX *pBVar3;
  BIGNUM *pBVar4;
  void *__dest;
  BN_MONT_CTX *from;
  EC_POINT *pEVar5;
  int reason;
  int line;
  code *pcVar6;
  EC_POINT *pEVar7;
  
  if (*(long *)(*(long *)dst + 0x20) == 0) {
    iVar1 = 0x6a;
    reason = 0x42;
    line = 0x85;
  }
  else if (*(long *)dst == *(long *)src) {
    if (dst == src) {
      return 1;
    }
    *(undefined4 *)(dst + 0x98) = *(undefined4 *)(src + 0x98);
    if (*(int *)(src + 0x98) == 5) {
      uVar2 = EC_ec_pre_comp_dup(*(undefined8 *)(src + 0xa0));
    }
    else {
      uVar2 = 0;
    }
    *(undefined8 *)(dst + 0xa0) = uVar2;
    from = *(BN_MONT_CTX **)(src + 0x90);
    pBVar3 = *(BN_MONT_CTX **)(dst + 0x90);
    if (from == (BN_MONT_CTX *)0x0) {
      BN_MONT_CTX_free(pBVar3);
      *(undefined8 *)(dst + 0x90) = 0;
    }
    else {
      if (pBVar3 == (BN_MONT_CTX *)0x0) {
        pBVar3 = BN_MONT_CTX_new();
        *(BN_MONT_CTX **)(dst + 0x90) = pBVar3;
        if (pBVar3 == (BN_MONT_CTX *)0x0) {
          return 0;
        }
        from = *(BN_MONT_CTX **)(src + 0x90);
      }
      pBVar3 = BN_MONT_CTX_copy(pBVar3,from);
      if (pBVar3 == (BN_MONT_CTX *)0x0) {
        return 0;
      }
    }
    pEVar5 = *(EC_POINT **)(src + 8);
    pEVar7 = *(EC_POINT **)(dst + 8);
    if (pEVar5 == (EC_POINT *)0x0) {
      if (pEVar7 != (EC_POINT *)0x0) {
        pcVar6 = *(code **)(*(long *)pEVar7 + 0x60);
        if ((pcVar6 != (code *)0x0) ||
           (pcVar6 = *(code **)(*(long *)pEVar7 + 0x58), pcVar6 != (code *)0x0)) {
          (*pcVar6)(pEVar7);
        }
        CRYPTO_clear_free(pEVar7,0x28,"crypto/ec/ec_lib.c",0x252);
      }
      *(undefined8 *)(dst + 8) = 0;
LAB_00b1e2cc:
      if ((**(byte **)src >> 1 & 1) == 0) {
        pBVar4 = BN_copy(*(BIGNUM **)(dst + 0x10),*(BIGNUM **)(src + 0x10));
        if (pBVar4 == (BIGNUM *)0x0) {
          return 0;
        }
        pBVar4 = BN_copy(*(BIGNUM **)(dst + 0x18),*(BIGNUM **)(src + 0x18));
        if (pBVar4 == (BIGNUM *)0x0) {
          return 0;
        }
      }
      *(undefined4 *)(dst + 0x20) = *(undefined4 *)(src + 0x20);
      *(undefined4 *)(dst + 0x24) = *(undefined4 *)(src + 0x24);
      *(undefined4 *)(dst + 0x28) = *(undefined4 *)(src + 0x28);
      if (*(long *)(src + 0x30) == 0) {
        CRYPTO_free(*(void **)(dst + 0x30));
        uVar2 = 0;
        *(undefined8 *)(dst + 0x30) = 0;
      }
      else {
        CRYPTO_free(*(void **)(dst + 0x30));
        __dest = CRYPTO_malloc((int)*(undefined8 *)(src + 0x38),"crypto/ec/ec_lib.c",0xd3);
        *(void **)(dst + 0x30) = __dest;
        if (__dest == (void *)0x0) {
          return 0;
        }
        memcpy(__dest,*(void **)(src + 0x30),*(size_t *)(src + 0x38));
        uVar2 = *(undefined8 *)(src + 0x38);
      }
      *(undefined8 *)(dst + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00b1e3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(*(long *)dst + 0x20))(dst,src);
      return iVar1;
    }
    if (pEVar7 == (EC_POINT *)0x0) {
      pEVar7 = EC_POINT_new(dst);
      *(EC_POINT **)(dst + 8) = pEVar7;
      if (pEVar7 == (EC_POINT *)0x0) {
        return 0;
      }
      pEVar5 = *(EC_POINT **)(src + 8);
    }
    pcVar6 = *(code **)(*(long *)pEVar7 + 0x68);
    if (pcVar6 == (code *)0x0) {
      iVar1 = 0x72;
      reason = 0x42;
      line = 600;
    }
    else {
      if (*(long *)pEVar7 == *(long *)pEVar5) {
        if ((pEVar7 != pEVar5) && (iVar1 = (*pcVar6)(pEVar7), iVar1 == 0)) {
          return 0;
        }
        goto LAB_00b1e2cc;
      }
      iVar1 = 0x72;
      reason = 0x65;
      line = 0x25c;
    }
  }
  else {
    iVar1 = 0x6a;
    reason = 0x65;
    line = 0x89;
  }
  ERR_put_error(0x10,iVar1,reason,"crypto/ec/ec_lib.c",line);
  return 0;
}

