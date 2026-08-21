
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_get_next_error_library(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  iVar2 = 0;
  if ((iVar1 != 0) && (DAT_01783004 != 0)) {
    CRYPTO_THREAD_write_lock(DAT_01783018);
    iVar2 = DAT_0176e480;
    DAT_0176e480 = DAT_0176e480 + 1;
    CRYPTO_THREAD_unlock(DAT_01783018);
  }
  return iVar2;
}

