
void ssl3_clear(undefined4 *param_1)

{
  ssl3_cleanup_key_block();
  OPENSSL_sk_pop_free(*(undefined8 *)(*(long *)(param_1 + 0x24) + 0x250),X509_NAME_free);
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x290));
  CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_1 + 0x24) + 0x2a0),
                    *(undefined8 *)(*(long *)(param_1 + 0x24) + 0x2a8),"ssl/s3_lib.c",0xb1f);
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x2c0));
  EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x24) + 0x230));
  EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x24) + 0x3f8));
  ssl3_free_digest_list(param_1);
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x3d0));
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x3e0));
  memset(*(void **)(param_1 + 0x24),0,0x400);
  ssl_free_wbio_buffer(param_1);
  *param_1 = 0x300;
  CRYPTO_free(*(void **)(param_1 + 0xb6));
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return;
}

