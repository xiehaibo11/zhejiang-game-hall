
undefined8 FUN_00b65b40(undefined8 *param_1)

{
  long *ptr;
  long lVar1;
  BUF_MEM *pBVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x28,"crypto/x509/x_name.c",0x5c);
  if (ptr == (long *)0x0) {
    ERR_put_error(0xd,0xab,0x41,"crypto/x509/x_name.c",0x69);
  }
  else {
    lVar1 = OPENSSL_sk_new_null();
    *ptr = lVar1;
    if (lVar1 != 0) {
      pBVar2 = BUF_MEM_new();
      ptr[2] = (long)pBVar2;
      if (pBVar2 != (BUF_MEM *)0x0) {
        *(undefined4 *)(ptr + 1) = 1;
        *param_1 = ptr;
        return 1;
      }
    }
    ERR_put_error(0xd,0xab,0x41,"crypto/x509/x_name.c",0x69);
    OPENSSL_sk_free(*ptr);
    CRYPTO_free(ptr);
  }
  return 0;
}

