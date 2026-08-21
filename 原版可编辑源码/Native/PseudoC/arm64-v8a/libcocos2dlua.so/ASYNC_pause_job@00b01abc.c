
undefined8 ASYNC_pause_job(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 == 0) {
    return 1;
  }
  lVar2 = CRYPTO_THREAD_get_local(&DAT_01782dd0);
  if (lVar2 == 0) {
    return 1;
  }
  if (*(long *)(lVar2 + 8) == 0) {
    return 1;
  }
  if (*(int *)(lVar2 + 0x10) != 0) {
                    /* try { // try from 00b01af8 to 00c01b77 has its CatchHandler @ 00b01af8
                       catch() { ... } // from try @ 00b01af8 with catch @ 00b01af8
                       catch() { ... } // from try @ 00b01be4 with catch @ 00b01af8
                       catch() { ... } // from try @ 00b01c64 with catch @ 00b01af8
                       catch() { ... } // from try @ 00b01ca0 with catch @ 00b01af8
                       catch() { ... } // from try @ 00b01d0c with catch @ 00b01af8 */
    return 1;
  }
  *(undefined4 *)(*(long *)(lVar2 + 8) + 0x1c) = 1;
  ERR_put_error(0x33,0x67,0x66,"crypto/async/async.c",0x113);
  return 0;
}

