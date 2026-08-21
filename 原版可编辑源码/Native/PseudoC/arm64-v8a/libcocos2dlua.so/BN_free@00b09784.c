
void BN_free(BIGNUM *a)

{
  uint uVar1;
  
  if (a == (BIGNUM *)0x0) {
    return;
  }
  if (((uint)a->flags >> 1 & 1) == 0) {
    if (((uint)a->flags >> 3 & 1) != 0) {
      CRYPTO_secure_free(a->d,"crypto/bn/bn_lib.c",0xae);
      uVar1 = a->flags;
      goto joined_r0x00b097e4;
    }
    CRYPTO_free(a->d);
  }
  uVar1 = a->flags;
joined_r0x00b097e4:
  if ((uVar1 & 1) == 0) {
    a->flags = uVar1 | 0x8000;
    a->d = (ulong *)0x0;
    return;
  }
  CRYPTO_free(a);
  return;
}

