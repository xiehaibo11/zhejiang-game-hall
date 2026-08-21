
undefined8 async_get_ctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    uVar2 = CRYPTO_THREAD_get_local(&DAT_01782dd0);
    return uVar2;
  }
  return 0;
}

