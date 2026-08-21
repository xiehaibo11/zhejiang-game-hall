
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ERR_get_next_error_library(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01d39280,FUN_00b1d6e8);
  iVar2 = 0;
  if ((iVar1 != 0) && (DAT_01d39284 != 0)) {
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    iVar2 = DAT_01d20230;
    DAT_01d20230 = DAT_01d20230 + 1;
    CRYPTO_THREAD_unlock(DAT_01d39298);
  }
  return iVar2;
}

