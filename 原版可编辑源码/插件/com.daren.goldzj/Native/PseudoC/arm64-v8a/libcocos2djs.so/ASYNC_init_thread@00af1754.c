
undefined8 ASYNC_init_thread(ulong param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *ptr;
  long lVar3;
  void *ptr_00;
  int line;
  
  if (param_1 < param_2) {
    iVar1 = 0x67;
    line = 0x142;
  }
  else {
    uVar2 = OPENSSL_init_crypto(0x100,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = ossl_init_thread_start(1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    ptr = (long *)CRYPTO_zalloc(0x18,"crypto/async/async.c",0x14d);
    if (ptr != (long *)0x0) {
      lVar3 = OPENSSL_sk_new_null();
      *ptr = lVar3;
      if (lVar3 == 0) {
        ERR_put_error(0x33,0x65,0x41,"crypto/async/async.c",0x155);
        CRYPTO_free(ptr);
        return 0;
      }
      ptr[2] = param_1;
      if (param_2 != 0) {
        ptr_00 = (void *)CRYPTO_zalloc(0x28,"crypto/async/async.c",0x54);
                    /* try { // try from 00af17f8 to 00bf1907 has its CatchHandler @ 00af17f8
                       catch() { ... } // from try @ 00af17f8 with catch @ 00af17f8
                       catch() { ... } // from try @ 00af1910 with catch @ 00af17f8
                       catch() { ... } // from try @ 00af1974 with catch @ 00af17f8 */
        if (ptr_00 == (void *)0x0) {
          ERR_put_error(0x33,0x66,0x41,"crypto/async/async.c",0x56);
        }
        else {
          *(undefined4 *)((long)ptr_00 + 0x1c) = 0;
          CRYPTO_free(*(void **)((long)ptr_00 + 0x10));
          CRYPTO_free(ptr_00);
        }
      }
      ptr[1] = 0;
      iVar1 = CRYPTO_THREAD_set_local(&DAT_01d39054,ptr);
      if (iVar1 == 0) {
        ERR_put_error(0x33,0x65,0x65,"crypto/async/async.c",0x16e);
        FUN_00af18f4(ptr);
        return 0;
      }
      return 1;
    }
    iVar1 = 0x41;
    line = 0x14f;
  }
  ERR_put_error(0x33,0x65,iVar1,"crypto/async/async.c",line);
  return 0;
}

