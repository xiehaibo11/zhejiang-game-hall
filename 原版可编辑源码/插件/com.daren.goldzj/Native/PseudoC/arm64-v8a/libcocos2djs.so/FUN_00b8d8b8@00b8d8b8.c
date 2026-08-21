
undefined8 FUN_00b8d8b8(int param_1,long *param_2)

{
  EVP_CIPHER_CTX *ctx;
  long lVar1;
  
  lVar1 = *param_2;
  if (param_1 == 3) {
    EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar1 + 0x28));
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(lVar1 + 0x30));
  }
  else if (param_1 == 1) {
    ctx = EVP_CIPHER_CTX_new();
    *(EVP_CIPHER_CTX **)(lVar1 + 0x30) = ctx;
    if (ctx != (EVP_CIPHER_CTX *)0x0) {
      EVP_CIPHER_CTX_set_flags(ctx,1);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      return 1;
    }
    return 0;
  }
  return 1;
}

