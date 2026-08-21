
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int SSL_get_ex_data_X509_STORE_CTX_idx(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01d38ea0,FUN_00ac0824);
  iVar2 = -1;
  if ((iVar1 != 0) && (DAT_01d38ea4 != 0)) {
    iVar2 = DAT_01d1e1b0;
  }
  return iVar2;
}

