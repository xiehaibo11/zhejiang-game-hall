
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int SSL_get_ex_data_X509_STORE_CTX_idx(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01782c20,FUN_00acfff8);
  iVar2 = -1;
  if ((iVar1 != 0) && (DAT_01782c24 != 0)) {
    iVar2 = DAT_0176c400;
  }
  return iVar2;
}

