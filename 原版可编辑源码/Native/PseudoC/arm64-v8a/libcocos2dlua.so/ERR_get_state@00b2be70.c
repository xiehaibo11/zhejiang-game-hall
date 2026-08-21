
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ERR_STATE * ERR_get_state(void)

{
  int iVar1;
  ERR_STATE *pEVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&DAT_0178300c,&LAB_00b2cdb0);
  pEVar2 = (ERR_STATE *)0x0;
  if ((((iVar1 != 0) && (DAT_01783010 != 0)) &&
      (pEVar2 = (ERR_STATE *)CRYPTO_THREAD_get_local(&DAT_01783008), pEVar2 == (ERR_STATE *)0x0)) &&
     (pEVar2 = (ERR_STATE *)CRYPTO_zalloc(0x248,"crypto/err/err.c",0x28c),
     pEVar2 != (ERR_STATE *)0x0)) {
    iVar1 = CRYPTO_THREAD_set_local(&DAT_01783008,pEVar2);
    if (iVar1 == 0) {
      FUN_00b2cb2c(pEVar2);
      pEVar2 = (ERR_STATE *)0x0;
    }
    else {
      OPENSSL_init_crypto(2,0);
      ossl_init_thread_start(2);
    }
  }
  return pEVar2;
}

