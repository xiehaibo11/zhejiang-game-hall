
void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *a)

{
  int iVar1;
  _func_1091 *p_Var2;
  
  if (a != (EVP_CIPHER_CTX *)0x0) {
    if (a->cipher != (EVP_CIPHER *)0x0) {
      p_Var2 = a->cipher->cleanup;
      if ((p_Var2 != (_func_1091 *)0x0) && (iVar1 = (*p_Var2)(a), iVar1 == 0)) goto LAB_00b25698;
      if ((a->cipher_data != (void *)0x0) && (iVar1 = a->cipher->ctx_size, iVar1 != 0)) {
        OPENSSL_cleanse(a->cipher_data,(long)iVar1);
      }
    }
    CRYPTO_free(a->cipher_data);
    ENGINE_finish(a->engine);
    memset(a,0,0xa8);
  }
LAB_00b25698:
  CRYPTO_free(a);
  return;
}

