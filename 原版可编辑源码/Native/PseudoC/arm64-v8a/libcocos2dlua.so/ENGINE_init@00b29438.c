
int ENGINE_init(ENGINE *e)

{
  int iVar1;
  int iVar2;
  
  if (e == (ENGINE *)0x0) {
    iVar1 = 0x43;
    iVar2 = 0x50;
LAB_00b294e4:
    ERR_put_error(0x26,0x77,iVar1,"crypto/engine/eng_init.c",iVar2);
    return 0;
  }
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
    iVar1 = 0x41;
    iVar2 = 0x54;
    goto LAB_00b294e4;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  iVar1 = *(int *)(e + 0xa0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*(code **)(e + 0x60) == (code *)0x0) goto LAB_00b29490;
    iVar2 = (**(code **)(e + 0x60))(e);
    if (iVar2 == 0) goto LAB_00b294a4;
    iVar1 = *(int *)(e + 0xa0);
  }
  else {
LAB_00b29490:
    iVar2 = 1;
  }
  *(int *)(e + 0x9c) = *(int *)(e + 0x9c) + 1;
  *(int *)(e + 0xa0) = iVar1 + 1;
LAB_00b294a4:
  CRYPTO_THREAD_unlock(global_engine_lock);
  return iVar2;
}

