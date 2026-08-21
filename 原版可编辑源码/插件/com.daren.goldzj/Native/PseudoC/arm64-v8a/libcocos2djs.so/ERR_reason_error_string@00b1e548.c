
char * ERR_reason_error_string(ulong e)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  ulong local_40 [2];
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01d39280,FUN_00b1d6e8);
  if (iVar1 == 0) {
    return (char *)0x0;
  }
  if (DAT_01d39284 == 0) {
    return (char *)0x0;
  }
  local_40[0] = e & 0xff000fff;
  CRYPTO_THREAD_read_lock(DAT_01d39298);
  if (DAT_01d392a0 == 0) {
    CRYPTO_THREAD_unlock(DAT_01d39298);
LAB_00b1e5d0:
    local_40[0] = e & 0xfff;
    CRYPTO_THREAD_read_lock(DAT_01d39298);
    if (DAT_01d392a0 == 0) {
      CRYPTO_THREAD_unlock(DAT_01d39298);
    }
    else {
      lVar2 = OPENSSL_LH_retrieve(DAT_01d392a0,local_40);
      CRYPTO_THREAD_unlock(DAT_01d39298);
      if (lVar2 != 0) goto LAB_00b1e604;
    }
    pcVar3 = (char *)0x0;
  }
  else {
    lVar2 = OPENSSL_LH_retrieve(DAT_01d392a0,local_40);
    CRYPTO_THREAD_unlock(DAT_01d39298);
    if (lVar2 == 0) goto LAB_00b1e5d0;
LAB_00b1e604:
    pcVar3 = *(char **)(lVar2 + 8);
  }
  return pcVar3;
}

