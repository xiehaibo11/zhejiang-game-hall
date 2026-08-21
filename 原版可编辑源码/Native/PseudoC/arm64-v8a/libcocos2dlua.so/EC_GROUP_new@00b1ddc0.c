
EC_GROUP * EC_GROUP_new(EC_METHOD *meth)

{
  int iVar1;
  EC_GROUP *ptr;
  BIGNUM *pBVar2;
  int line;
  
  if (meth == (EC_METHOD *)0x0) {
    iVar1 = 0x6c;
    line = 0x1e;
LAB_00b1de94:
    ERR_put_error(0x10,0x6c,iVar1,"crypto/ec/ec_lib.c",line);
    return (EC_GROUP *)0x0;
  }
  if (*(long *)(meth + 8) == 0) {
    iVar1 = 0x42;
    line = 0x22;
    goto LAB_00b1de94;
  }
  ptr = (EC_GROUP *)CRYPTO_zalloc(0xa8,"crypto/ec/ec_lib.c",0x26);
  if (ptr == (EC_GROUP *)0x0) {
    ERR_put_error(0x10,0x6c,0x41,"crypto/ec/ec_lib.c",0x28);
    return (EC_GROUP *)0x0;
  }
  *(EC_METHOD **)ptr = meth;
  if (((byte)*meth >> 1 & 1) == 0) {
    pBVar2 = BN_new();
    *(BIGNUM **)(ptr + 0x10) = pBVar2;
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_00b1de38;
    pBVar2 = BN_new();
    *(BIGNUM **)(ptr + 0x18) = pBVar2;
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_00b1de38;
  }
  *(undefined8 *)(ptr + 0x24) = 0x400000001;
  iVar1 = (**(code **)(meth + 8))(ptr);
  if (iVar1 != 0) {
    return ptr;
  }
LAB_00b1de38:
  BN_free(*(BIGNUM **)(ptr + 0x10));
  BN_free(*(BIGNUM **)(ptr + 0x18));
  CRYPTO_free(ptr);
  return (EC_GROUP *)0x0;
}

