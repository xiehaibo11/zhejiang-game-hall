
undefined8 EVP_MD_CTX_reset(EVP_MD_CTX *param_1)

{
  int iVar1;
  
  if (param_1 != (EVP_MD_CTX *)0x0) {
    if (param_1->digest != (EVP_MD *)0x0) {
      if ((param_1->digest->cleanup != (_func_1082 *)0x0) &&
         (iVar1 = EVP_MD_CTX_test_flags(param_1,2), iVar1 == 0)) {
        (*param_1->digest->cleanup)(param_1);
      }
      if ((((param_1->digest != (EVP_MD *)0x0) && (*(int *)((long)&param_1->digest->sign + 4) != 0))
          && (param_1->md_data != (void *)0x0)) &&
         (iVar1 = EVP_MD_CTX_test_flags(param_1,4), iVar1 == 0)) {
        CRYPTO_clear_free(param_1->md_data,(long)*(int *)((long)&param_1->digest->sign + 4),
                          "crypto/evp/digest.c",0x21);
      }
    }
    EVP_PKEY_CTX_free(param_1->pctx);
    ENGINE_finish(param_1->engine);
    OPENSSL_cleanse(param_1,0x30);
  }
  return 1;
}

