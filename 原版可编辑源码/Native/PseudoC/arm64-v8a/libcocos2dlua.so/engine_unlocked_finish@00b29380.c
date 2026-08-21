
int engine_unlocked_finish(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa0) + -1;
  *(int *)(param_1 + 0xa0) = iVar2;
  if ((iVar2 == 0) && (*(code **)(param_1 + 0x68) != (code *)0x0)) {
    if (param_2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x68))(param_1);
    }
    else {
      CRYPTO_THREAD_unlock(global_engine_lock);
      iVar2 = (**(code **)(param_1 + 0x68))(param_1);
      CRYPTO_THREAD_write_lock(global_engine_lock);
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    iVar2 = 1;
  }
  iVar1 = engine_free_util(param_1,0);
  if (iVar1 == 0) {
    ERR_put_error(0x26,0xbf,0x6a,"crypto/engine/eng_init.c",0x45);
    iVar2 = 0;
  }
  return iVar2;
}

