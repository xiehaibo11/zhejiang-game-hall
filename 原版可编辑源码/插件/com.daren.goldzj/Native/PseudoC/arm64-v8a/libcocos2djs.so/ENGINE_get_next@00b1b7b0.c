
ENGINE * ENGINE_get_next(ENGINE *e)

{
  ENGINE *pEVar1;
  
  if (e == (ENGINE *)0x0) {
    ERR_put_error(0x26,0x73,0x43,"crypto/engine/eng_list.c",0xb2);
    pEVar1 = (ENGINE *)0x0;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    pEVar1 = *(ENGINE **)(e + 0xb8);
    if (pEVar1 != (ENGINE *)0x0) {
      *(int *)(pEVar1 + 0x9c) = *(int *)(pEVar1 + 0x9c) + 1;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
    ENGINE_free(e);
  }
  return pEVar1;
}

