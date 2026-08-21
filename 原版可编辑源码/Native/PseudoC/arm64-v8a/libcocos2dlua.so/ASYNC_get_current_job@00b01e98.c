
undefined8 ASYNC_get_current_job(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00b01e20 with catch @ 00b01e98 */
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    lVar2 = CRYPTO_THREAD_get_local(&DAT_01782dd0);
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 8);
    }
    return uVar3;
  }
                    /* try { // try from 00b01ed0 to 00c01f7f has its CatchHandler @ 00b01ed0
                       catch() { ... } // from try @ 00b01ed0 with catch @ 00b01ed0
                       catch() { ... } // from try @ 00b01f8c with catch @ 00b01ed0 */
  return 0;
}

