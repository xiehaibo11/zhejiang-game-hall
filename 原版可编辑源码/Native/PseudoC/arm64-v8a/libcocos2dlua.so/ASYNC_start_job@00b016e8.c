
undefined8
ASYNC_start_job(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               void *param_5,size_t param_6)

{
  int iVar1;
  void *ptr;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if ((iVar1 == 0) || (ptr = (void *)CRYPTO_THREAD_get_local(&DAT_01782dd0), ptr == (void *)0x0)) {
    ptr = CRYPTO_malloc(0x18,"crypto/async/async.c",0x27);
    if (ptr == (void *)0x0) {
      ERR_put_error(0x33,100,0x41,"crypto/async/async.c",0x29);
LAB_00b0181c:
      CRYPTO_free(ptr);
      return 0;
    }
    *(undefined8 *)((long)ptr + 8) = 0;
    *(undefined4 *)((long)ptr + 0x10) = 0;
    iVar1 = CRYPTO_THREAD_set_local(&DAT_01782dd0,ptr);
    if (iVar1 == 0) goto LAB_00b0181c;
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = *(long *)((long)ptr + 8);
    if (lVar5 != 0) goto LAB_00b0178c;
    puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01782dd4);
    if (puVar2 == (undefined8 *)0x0) {
      iVar1 = ASYNC_init_thread(0,0);
      if (iVar1 == 0) goto LAB_00b01ab0;
      puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01782dd4);
    }
    lVar5 = OPENSSL_sk_pop(*puVar2);
    if (lVar5 == 0) {
      if ((puVar2[2] == 0) || ((ulong)puVar2[1] < (ulong)puVar2[2])) {
        pvVar4 = (void *)CRYPTO_zalloc(0x28,"crypto/async/async.c",0x54);
        if (pvVar4 == (void *)0x0) {
          ERR_put_error(0x33,0x66,0x41,"crypto/async/async.c",0x56);
        }
        else {
          *(undefined4 *)((long)pvVar4 + 0x1c) = 0;
          CRYPTO_free(*(void **)((long)pvVar4 + 0x10));
                    /* try { // try from 00b0199c to 00c019a3 has its CatchHandler @ 00b019f8 */
          CRYPTO_free(pvVar4);
                    /* try { // try from 00b019a4 to 00c01a2f has its CatchHandler @ 00b01914 */
        }
      }
LAB_00b01ab0:
      *(undefined8 *)((long)ptr + 8) = 0;
      return 1;
    }
    *(long *)((long)ptr + 8) = lVar5;
    if (param_5 == (void *)0x0) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    else {
                    /* try { // try from 00b01914 to 00c0199b has its CatchHandler @ 00b01914
                       catch() { ... } // from try @ 00b01914 with catch @ 00b01914
                       catch() { ... } // from try @ 00b019a4 with catch @ 00b01914 */
      pvVar4 = CRYPTO_malloc((int)param_6,"crypto/async/async.c",0xe3);
      *(void **)(*(long *)((long)ptr + 8) + 0x10) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        ERR_put_error(0x33,0x69,0x41,"crypto/async/async.c",0xe5);
        lVar5 = *(long *)((long)ptr + 8);
        puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01782dd4);
        CRYPTO_free(*(void **)(lVar5 + 0x10));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        OPENSSL_sk_push(*puVar2,lVar5);
        *(undefined8 *)((long)ptr + 8) = 0;
        return 0;
      }
      memcpy(pvVar4,param_5,param_6);
      lVar5 = *(long *)((long)ptr + 8);
    }
    *(undefined8 *)(lVar5 + 8) = param_4;
    *(undefined8 *)(lVar5 + 0x20) = param_2;
    iVar1 = 0xf3;
  }
  else {
    *(long *)((long)ptr + 8) = lVar5;
LAB_00b0178c:
    iVar1 = *(int *)(lVar5 + 0x1c);
    if (iVar1 == 1) {
      *param_1 = lVar5;
      *(undefined4 *)(*(long *)((long)ptr + 8) + 0x1c) = 2;
      *(undefined8 *)((long)ptr + 8) = 0;
      return 2;
    }
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *param_3 = *(undefined4 *)(lVar5 + 0x18);
        *(undefined8 *)(lVar5 + 0x20) = 0;
        puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01782dd4);
        CRYPTO_free(*(void **)(lVar5 + 0x10));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        OPENSSL_sk_push(*puVar2,lVar5);
        *(undefined8 *)((long)ptr + 8) = 0;
        *param_1 = 0;
        return 3;
      }
      ERR_put_error(0x33,0x69,0x44,"crypto/async/async.c",0xd6);
      lVar5 = *(long *)((long)ptr + 8);
      puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01782dd4);
      CRYPTO_free(*(void **)(lVar5 + 0x10));
      *(undefined8 *)(lVar5 + 0x10) = 0;
      uVar3 = *puVar2;
      goto LAB_00b01a0c;
    }
    *(long *)((long)ptr + 8) = *param_1;
    iVar1 = 0xcf;
  }
  ERR_put_error(0x33,0x69,0x66,"crypto/async/async.c",iVar1);
  lVar5 = *(long *)((long)ptr + 8);
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01782dd4);
                    /* catch() { ... } // from try @ 00b0199c with catch @ 00b019f8 */
  CRYPTO_free(*(void **)(lVar5 + 0x10));
  *(undefined8 *)(lVar5 + 0x10) = 0;
  uVar3 = *puVar2;
LAB_00b01a0c:
  OPENSSL_sk_push(uVar3,lVar5);
  *(undefined8 *)((long)ptr + 8) = 0;
  *param_1 = 0;
  return 0;
}

