
EVP_PKEY * ENGINE_load_private_key(ENGINE *e,char *key_id,UI_METHOD *ui_method,void *callback_data)

{
  EVP_PKEY *pEVar1;
  int iVar2;
  int line;
  
  if (e == (ENGINE *)0x0) {
    iVar2 = 0x43;
    line = 0x3c;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    iVar2 = *(int *)(e + 0xa0);
    CRYPTO_THREAD_unlock(global_engine_lock);
    if (iVar2 == 0) {
      iVar2 = 0x75;
      line = 0x42;
    }
    else if (*(code **)(e + 0x78) == (code *)0x0) {
      iVar2 = 0x7d;
      line = 0x48;
    }
    else {
      pEVar1 = (EVP_PKEY *)(**(code **)(e + 0x78))(e,key_id,ui_method,callback_data);
      if (pEVar1 != (EVP_PKEY *)0x0) {
        return pEVar1;
      }
      iVar2 = 0x80;
      line = 0x4e;
    }
  }
  ERR_put_error(0x26,0x96,iVar2,"crypto/engine/eng_pkey.c",line);
  return (EVP_PKEY *)0x0;
}

