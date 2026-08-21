
bool SSL_set_alpn_protos(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  CRYPTO_free(*(void **)(param_1 + 0x308));
  lVar1 = CRYPTO_memdup(param_2,param_3,"ssl/ssl_lib.c",0x8c8);
  *(long *)(param_1 + 0x308) = lVar1;
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x158,0x41,"ssl/ssl_lib.c",0x8ca);
  }
  else {
    *(undefined4 *)(param_1 + 0x310) = param_3;
  }
  return lVar1 == 0;
}

