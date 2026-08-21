
char * ERR_func_error_string(ulong e)

{
  int iVar1;
  long lVar2;
  ulong local_30 [2];
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01d39280,FUN_00b1d6e8);
  if ((iVar1 != 0) && (DAT_01d39284 != 0)) {
    local_30[0] = e & 0xfffff000;
    CRYPTO_THREAD_read_lock(DAT_01d39298);
    if (DAT_01d392a0 == 0) {
      CRYPTO_THREAD_unlock(DAT_01d39298);
    }
    else {
      lVar2 = OPENSSL_LH_retrieve(DAT_01d392a0,local_30);
      CRYPTO_THREAD_unlock(DAT_01d39298);
      if (lVar2 != 0) {
        return *(char **)(lVar2 + 8);
      }
    }
  }
  return (char *)0x0;
}

