
char * ERR_reason_error_string(ulong e)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  ulong local_40 [2];
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  if (iVar1 == 0) {
    return (char *)0x0;
  }
  if (DAT_01783004 == 0) {
    return (char *)0x0;
  }
  local_40[0] = e & 0xff000fff;
  CRYPTO_THREAD_read_lock(DAT_01783018);
  if (DAT_01783020 == 0) {
    CRYPTO_THREAD_unlock(DAT_01783018);
LAB_00b2ca50:
    local_40[0] = e & 0xfff;
    CRYPTO_THREAD_read_lock(DAT_01783018);
    if (DAT_01783020 == 0) {
      CRYPTO_THREAD_unlock(DAT_01783018);
    }
    else {
      lVar2 = OPENSSL_LH_retrieve(DAT_01783020,local_40);
      CRYPTO_THREAD_unlock(DAT_01783018);
      if (lVar2 != 0) goto LAB_00b2ca84;
    }
    pcVar3 = (char *)0x0;
  }
  else {
    lVar2 = OPENSSL_LH_retrieve(DAT_01783020,local_40);
    CRYPTO_THREAD_unlock(DAT_01783018);
    if (lVar2 == 0) goto LAB_00b2ca50;
LAB_00b2ca84:
    pcVar3 = *(char **)(lVar2 + 8);
  }
  return pcVar3;
}

