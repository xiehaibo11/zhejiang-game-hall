
int ENGINE_init(ENGINE *e)

{
  int iVar1;
  int line;
  
  if (e == (ENGINE *)0x0) {
    iVar1 = 0x43;
    line = 0x50;
  }
  else {
    iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
    if ((iVar1 != 0) && (do_engine_lock_init_ossl_ret_ != 0)) {
      iVar1 = FUN_00b1a190();
      return iVar1;
    }
    iVar1 = 0x41;
    line = 0x54;
  }
  ERR_put_error(0x26,0x77,iVar1,"crypto/engine/eng_init.c",line);
  return 0;
}

