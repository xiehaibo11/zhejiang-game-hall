
void err_free_strings_int(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01d39280,FUN_00b1d6e8);
  if ((iVar1 != 0) && (DAT_01d39284 != 0)) {
    CRYPTO_THREAD_write_lock(DAT_01d39298);
    OPENSSL_LH_free(DAT_01d392a0);
    DAT_01d392a0 = 0;
    CRYPTO_THREAD_unlock(DAT_01d39298);
    return;
  }
  return;
}

