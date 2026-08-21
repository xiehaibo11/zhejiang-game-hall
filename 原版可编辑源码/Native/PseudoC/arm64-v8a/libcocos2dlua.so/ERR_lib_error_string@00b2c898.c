
char * ERR_lib_error_string(ulong e)

{
  int iVar1;
  long lVar2;
  ulong local_30 [2];
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  if ((iVar1 != 0) && (DAT_01783004 != 0)) {
    local_30[0] = e & 0xff000000;
    CRYPTO_THREAD_read_lock(DAT_01783018);
    if (DAT_01783020 == 0) {
      CRYPTO_THREAD_unlock(DAT_01783018);
    }
    else {
      lVar2 = OPENSSL_LH_retrieve(DAT_01783020,local_30);
      CRYPTO_THREAD_unlock(DAT_01783018);
      if (lVar2 != 0) {
        return *(char **)(lVar2 + 8);
      }
    }
  }
  return (char *)0x0;
}

