
undefined8 async_init(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CRYPTO_THREAD_init_local(&DAT_01d39050,0);
  if ((int)uVar2 != 0) {
    iVar1 = CRYPTO_THREAD_init_local(&DAT_01d39054,0);
    if (iVar1 == 0) {
      CRYPTO_THREAD_cleanup_local(&DAT_01d39050);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

