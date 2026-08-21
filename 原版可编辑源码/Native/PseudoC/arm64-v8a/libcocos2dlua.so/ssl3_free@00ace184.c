
void ssl3_free(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x90) != 0)) {
    ssl3_cleanup_key_block(param_1);
    EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x90) + 0x3f8));
    lVar1 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(lVar1 + 0x3f8) = 0;
    EVP_PKEY_free(*(EVP_PKEY **)(lVar1 + 0x230));
    lVar1 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(lVar1 + 0x230) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0x250),X509_NAME_free);
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x90) + 0x290));
    CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2a0),
                      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x2a8),"ssl/s3_lib.c",0xb0d);
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x90) + 0x2c0));
    ssl3_free_digest_list(param_1);
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x90) + 0x3d0));
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x90) + 0x3e0));
    SSL_SRP_CTX_free(param_1);
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x90),0x400,"ssl/s3_lib.c",0xb16);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}

