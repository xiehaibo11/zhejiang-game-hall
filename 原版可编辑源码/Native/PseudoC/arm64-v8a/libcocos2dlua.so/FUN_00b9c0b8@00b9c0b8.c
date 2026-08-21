
undefined8 FUN_00b9c0b8(int param_1,long *param_2)

{
  EVP_CIPHER_CTX *ctx;
  long lVar1;
  
  lVar1 = *param_2;
  if (param_1 == 3) {
    EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar1 + 0x28));
                    /* try { // try from 00b9c100 to 00c9c16b has its CatchHandler @ 00b9b8d4 */
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(lVar1 + 0x30));
  }
  else {
                    /* try { // try from 00b9c0d4 to 00c9c0db has its CatchHandler @ 00b9c620 */
    if (param_1 == 1) {
      ctx = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(lVar1 + 0x30) = ctx;
      if (ctx != (EVP_CIPHER_CTX *)0x0) {
        EVP_CIPHER_CTX_set_flags(ctx,1);
        *(undefined8 *)(lVar1 + 0x28) = 0;
        return 1;
                    /* try { // try from 00b9c0f4 to 00c9c0ff has its CatchHandler @ 00b9c6d0 */
      }
      return 0;
    }
  }
  return 1;
}

