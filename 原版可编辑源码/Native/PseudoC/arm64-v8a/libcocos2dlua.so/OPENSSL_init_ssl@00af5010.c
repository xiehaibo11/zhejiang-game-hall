
undefined8 OPENSSL_init_ssl(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_01782d94 == '\x01') {
    if ((DAT_01782d90 & 1) == 0) {
      DAT_01782d90 = 1;
      ERR_put_error(0x14,0x156,0x46,"ssl/ssl_init.c",0xbd);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = OPENSSL_init_crypto(param_1 | 0xc);
    if ((int)uVar2 != 0) {
      iVar1 = CRYPTO_THREAD_run_once(&DAT_01782db0,FUN_00af510c);
      uVar2 = 0;
      if ((iVar1 != 0) && (DAT_01782d98 != '\0')) {
        if (((uint)param_1 >> 0x14 & 1) != 0) {
          iVar1 = CRYPTO_THREAD_run_once(&DAT_01782db4,&LAB_00af5278);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_01782d9c == '\0') {
            return 0;
          }
        }
        if (((uint)param_1 >> 0x15 & 1) != 0) {
          iVar1 = CRYPTO_THREAD_run_once(&DAT_01782db4,FUN_00af5288);
          if (iVar1 == 0) {
            return 0;
          }
          if (DAT_01782da0 == '\0') {
            return 0;
          }
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

