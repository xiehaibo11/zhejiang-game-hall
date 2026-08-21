
undefined8 FUN_00be5b3c(undefined8 param_1)

{
  void *ptr;
  long lVar1;
  undefined8 uVar2;
  
  ptr = (void *)CRYPTO_zalloc(0xa08,"crypto/evp/bio_b64.c",0x47);
  uVar2 = 0;
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x14) = 0x100000001;
    lVar1 = EVP_ENCODE_CTX_new();
    *(long *)((long)ptr + 0x20) = lVar1;
    if (lVar1 == 0) {
      CRYPTO_free(ptr);
      uVar2 = 0;
    }
    else {
      BIO_set_data(param_1,ptr);
      uVar2 = 1;
      BIO_set_init(param_1,1);
    }
  }
  return uVar2;
}

