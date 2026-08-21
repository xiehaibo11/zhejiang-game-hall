
undefined8 async_init(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = CRYPTO_THREAD_init_local(&DAT_01782dd0,0);
  if ((int)uVar2 != 0) {
                    /* try { // try from 00b01b78 to 00c01be3 has its CatchHandler @ 00b01d44 */
    iVar1 = CRYPTO_THREAD_init_local(&DAT_01782dd4,0);
    if (iVar1 == 0) {
      CRYPTO_THREAD_cleanup_local(&DAT_01782dd0);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

