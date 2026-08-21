
BN_BLINDING *
BN_BLINDING_create_param
          (BN_BLINDING *b,BIGNUM *e,BIGNUM *m,BN_CTX *ctx,bn_mod_exp *bn_mod_exp,BN_MONT_CTX *m_ctx)

{
  int iVar1;
  int iVar2;
  BN_BLINDING *ptr;
  BIGNUM *pBVar3;
  long lVar4;
  int local_54;
  
  ptr = b;
  if ((b == (BN_BLINDING *)0x0) &&
     (ptr = BN_BLINDING_new((BIGNUM *)0x0,(BIGNUM *)0x0,m), ptr == (BN_BLINDING *)0x0)) {
    return (BN_BLINDING *)0x0;
  }
  if (*(long *)ptr == 0) {
    pBVar3 = BN_new();
    *(BIGNUM **)ptr = pBVar3;
    if (pBVar3 == (BIGNUM *)0x0) goto joined_r0x00b9427c;
  }
  if (*(long *)(ptr + 8) == 0) {
    pBVar3 = BN_new();
    *(BIGNUM **)(ptr + 8) = pBVar3;
    if (pBVar3 == (BIGNUM *)0x0) goto joined_r0x00b9427c;
  }
  pBVar3 = *(BIGNUM **)(ptr + 0x10);
  if (e != (BIGNUM *)0x0) {
    BN_free(pBVar3);
    pBVar3 = BN_dup(e);
    *(BIGNUM **)(ptr + 0x10) = pBVar3;
  }
  if (pBVar3 != (BIGNUM *)0x0) {
    if (bn_mod_exp != (bn_mod_exp *)0x0) {
      *(bn_mod_exp **)(ptr + 0x40) = bn_mod_exp;
    }
    if (m_ctx != (BN_MONT_CTX *)0x0) {
      *(BN_MONT_CTX **)(ptr + 0x38) = m_ctx;
    }
    iVar1 = BN_rand_range(*(BIGNUM **)ptr,*(BIGNUM **)(ptr + 0x18));
    if (iVar1 != 0) {
      iVar1 = -0x21;
      do {
        lVar4 = int_bn_mod_inverse(*(undefined8 *)(ptr + 8),*(undefined8 *)ptr,
                                   *(undefined8 *)(ptr + 0x18),ctx,&local_54);
        if (lVar4 != 0) {
          if ((*(code **)(ptr + 0x40) == (code *)0x0) || (*(long *)(ptr + 0x38) == 0)) {
            iVar1 = BN_mod_exp(*(BIGNUM **)ptr,*(BIGNUM **)ptr,*(BIGNUM **)(ptr + 0x10),
                               *(BIGNUM **)(ptr + 0x18),ctx);
          }
          else {
            iVar1 = (**(code **)(ptr + 0x40))
                              (*(undefined8 *)ptr,*(undefined8 *)ptr,*(undefined8 *)(ptr + 0x10),
                               *(undefined8 *)(ptr + 0x18),ctx);
          }
          if (iVar1 != 0) {
            return ptr;
          }
          break;
        }
        if (local_54 == 0) break;
        iVar1 = iVar1 + 1;
        if (iVar1 == 0) {
          ERR_put_error(3,0x80,0x71,"crypto/bn/bn_blind.c",0x107);
          break;
        }
        iVar2 = BN_rand_range(*(BIGNUM **)ptr,*(BIGNUM **)(ptr + 0x18));
      } while (iVar2 != 0);
    }
  }
joined_r0x00b9427c:
  if (b == (BN_BLINDING *)0x0) {
    BN_free(*(BIGNUM **)ptr);
    BN_free(*(BIGNUM **)(ptr + 8));
    BN_free(*(BIGNUM **)(ptr + 0x10));
    BN_free(*(BIGNUM **)(ptr + 0x18));
    CRYPTO_THREAD_lock_free(*(undefined8 *)(ptr + 0x48));
    CRYPTO_free(ptr);
    ptr = (BN_BLINDING *)0x0;
  }
  return ptr;
}

