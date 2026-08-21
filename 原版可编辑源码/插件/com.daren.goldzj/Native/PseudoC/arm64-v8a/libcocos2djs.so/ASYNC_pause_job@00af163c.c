
undefined8 ASYNC_pause_job(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 == 0) {
    return 1;
  }
  lVar2 = CRYPTO_THREAD_get_local(&DAT_01d39050);
  if (lVar2 == 0) {
    return 1;
  }
  if (*(long *)(lVar2 + 8) == 0) {
    return 1;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
    return 1;
  }
  *(undefined4 *)(*(long *)(lVar2 + 8) + 0x1c) = 1;
  ERR_put_error(0x33,0x67,0x66,"crypto/async/async.c",0x113);
  return 0;
}

