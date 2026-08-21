
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_last(void)

{
  int iVar1;
  ENGINE *pEVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_put_error(0x26,0xc4,0x41,"crypto/engine/eng_list.c",0x9f);
    pEVar2 = (ENGINE *)0x0;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    pEVar2 = DAT_01d39120;
    if (DAT_01d39120 != (ENGINE *)0x0) {
      *(int *)(DAT_01d39120 + 0x9c) = *(int *)(DAT_01d39120 + 0x9c) + 1;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
  }
  return pEVar2;
}

