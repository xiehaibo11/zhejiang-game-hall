
undefined4 * OCSP_REQ_CTX_new(undefined8 param_1,int param_2)

{
  undefined4 *ptr;
  BIO_METHOD *type;
  BIO *pBVar1;
  void *pvVar2;
  
  ptr = (undefined4 *)CRYPTO_zalloc(0x38,"crypto/ocsp/ocsp_ht.c",0x42);
  if (ptr != (undefined4 *)0x0) {
    *ptr = 0x1000;
    *(undefined8 *)(ptr + 0xc) = 0x19000;
    type = BIO_s_mem();
    pBVar1 = BIO_new(type);
    if (param_2 < 1) {
      param_2 = 0x1000;
    }
    *(undefined8 *)(ptr + 6) = param_1;
    *(BIO **)(ptr + 8) = pBVar1;
    ptr[4] = param_2;
    pvVar2 = CRYPTO_malloc(param_2,"crypto/ocsp/ocsp_ht.c",0x4e);
    *(void **)(ptr + 2) = pvVar2;
    if ((pvVar2 == (void *)0x0) || (*(BIO **)(ptr + 8) == (BIO *)0x0)) {
      BIO_free(*(BIO **)(ptr + 8));
      CRYPTO_free(*(void **)(ptr + 2));
      CRYPTO_free(ptr);
      ptr = (undefined4 *)0x0;
    }
  }
  return ptr;
}

