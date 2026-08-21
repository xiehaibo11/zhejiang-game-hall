
int ENGINE_finish(ENGINE *e)

{
  int iVar1;
  int iVar2;
  
  if (e == (ENGINE *)0x0) {
    return 1;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  iVar2 = *(int *)(e + 0xa0);
  *(int *)(e + 0xa0) = iVar2 + -1;
  if ((iVar2 + -1 == 0) && (*(long *)(e + 0x68) != 0)) {
    CRYPTO_THREAD_unlock(global_engine_lock);
    iVar2 = (**(code **)(e + 0x68))(e);
    CRYPTO_THREAD_write_lock(global_engine_lock);
    if (iVar2 == 0) goto LAB_00b1a150;
  }
  else {
    iVar2 = 1;
  }
  iVar1 = engine_free_util(e,0);
  if (iVar1 != 0) {
    CRYPTO_THREAD_unlock(global_engine_lock);
    return iVar2;
  }
  ERR_put_error(0x26,0xbf,0x6a,"crypto/engine/eng_init.c",0x45);
LAB_00b1a150:
  CRYPTO_THREAD_unlock(global_engine_lock);
  ERR_put_error(0x26,0x6b,0x6a,"crypto/engine/eng_init.c",0x68);
  return 0;
}

