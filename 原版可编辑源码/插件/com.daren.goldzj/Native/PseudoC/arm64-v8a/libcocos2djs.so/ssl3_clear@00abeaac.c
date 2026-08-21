
void ssl3_clear(undefined4 *param_1)

{
  ssl3_cleanup_key_block();
  OPENSSL_sk_pop_free(*(undefined8 *)(*(long *)(param_1 + 0x24) + 0x250),X509_NAME_free);
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x290));
                    /* try { // try from 00abeaf0 to 00bbeb4f has its CatchHandler @ 00abeaf0
                       catch() { ... } // from try @ 00abeaf0 with catch @ 00abeaf0
                       catch() { ... } // from try @ 00abeb84 with catch @ 00abeaf0 */
  CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_1 + 0x24) + 0x2a0),
                    *(undefined8 *)(*(long *)(param_1 + 0x24) + 0x2a8),"ssl/s3_lib.c",0xb1f);
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x2c0));
  EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x24) + 0x230));
  EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x24) + 0x3f8));
  ssl3_free_digest_list(param_1);
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x3d0));
                    /* try { // try from 00abeb50 to 00bbeb5b has its CatchHandler @ 00abebec */
  CRYPTO_free(*(void **)(*(long *)(param_1 + 0x24) + 0x3e0));
  memset(*(void **)(param_1 + 0x24),0,0x400);
                    /* try { // try from 00abeb78 to 00bbeb83 has its CatchHandler @ 00abebdc */
  ssl_free_wbio_buffer(param_1);
                    /* try { // try from 00abeb84 to 00bbebff has its CatchHandler @ 00abeaf0 */
  *param_1 = 0x300;
  CRYPTO_free(*(void **)(param_1 + 0xb6));
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return;
}

