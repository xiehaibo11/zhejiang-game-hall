
void err_free_strings_int(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01783000,FUN_00b2bb68);
  if ((iVar1 != 0) && (DAT_01783004 != 0)) {
    CRYPTO_THREAD_write_lock(DAT_01783018);
    OPENSSL_LH_free(DAT_01783020);
    DAT_01783020 = 0;
    CRYPTO_THREAD_unlock(DAT_01783018);
    return;
  }
  return;
}

