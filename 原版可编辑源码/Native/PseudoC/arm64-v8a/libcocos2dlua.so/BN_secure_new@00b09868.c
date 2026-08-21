
long BN_secure_new(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x18,"crypto/bn/bn_lib.c",0xe3);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x14) = 9;
    return lVar1;
  }
  ERR_put_error(3,0x71,0x41,"crypto/bn/bn_lib.c",0xe4);
  return 0;
}

