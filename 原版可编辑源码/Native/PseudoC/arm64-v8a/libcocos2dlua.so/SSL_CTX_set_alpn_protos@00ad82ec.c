
bool SSL_CTX_set_alpn_protos(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00ad82a0 with catch @ 00ad8300 */
                    /* catch() { ... } // from try @ 00ad8284 with catch @ 00ad8304 */
  CRYPTO_free(*(void **)(param_1 + 0x2f8));
  lVar1 = CRYPTO_memdup(param_2,param_3,"ssl/ssl_lib.c",0x8b5);
  *(long *)(param_1 + 0x2f8) = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x157,0x41,"ssl/ssl_lib.c",0x8b7);
  }
  else {
    *(undefined4 *)(param_1 + 0x300) = param_3;
  }
  return lVar1 == 0;
}

