
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_PKEY * EVP_PKEY_new(void)

{
  EVP_PKEY *ptr;
  long lVar1;
  
  ptr = (EVP_PKEY *)CRYPTO_zalloc(0x40,"crypto/evp/p_lib.c",0x8c);
  if (ptr == (EVP_PKEY *)0x0) {
    ERR_put_error(6,0x6a,0x41,"crypto/evp/p_lib.c",0x8f);
  }
  else {
    ptr->type = 0;
    ptr->save_type = 0;
    ptr->references = 1;
    ptr->save_parameters = 1;
    lVar1 = CRYPTO_THREAD_lock_new();
    ptr[1].type = (int)lVar1;
    ptr[1].save_type = (int)((ulong)lVar1 >> 0x20);
    if (lVar1 == 0) {
      ERR_put_error(6,0x6a,0x41,"crypto/evp/p_lib.c",0x98);
      CRYPTO_free(ptr);
      ptr = (EVP_PKEY *)0x0;
    }
  }
  return ptr;
}

