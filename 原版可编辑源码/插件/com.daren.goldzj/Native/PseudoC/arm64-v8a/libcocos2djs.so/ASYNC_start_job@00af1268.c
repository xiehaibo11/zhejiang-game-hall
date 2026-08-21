
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
  if ((iVar1 == 0) || (ptr = (void *)CRYPTO_THREAD_get_local(&DAT_01d39050), ptr == (void *)0x0)) {
    ptr = CRYPTO_malloc(0x18,"crypto/async/async.c",0x27);
    if (ptr == (void *)0x0) {
      ERR_put_error(0x33,100,0x41,"crypto/async/async.c",0x29);
LAB_00af139c:
      CRYPTO_free(ptr);
      return 0;
    }
                    /* try { // try from 00af12dc to 00bf13bb has its CatchHandler @ 00af0fb8 */
    *(undefined8 *)((long)ptr + 8) = 0;
    *(undefined4 *)((long)ptr + 0x10) = 0;
    iVar1 = CRYPTO_THREAD_set_local(&DAT_01d39050,ptr);
    if (iVar1 == 0) goto LAB_00af139c;
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = *(long *)((long)ptr + 8);
    if (lVar5 != 0) goto LAB_00af130c;
    puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01d39054);
    if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 00af146c to 00bf1477 has its CatchHandler @ 00af1548 */
      iVar1 = ASYNC_init_thread(0,0);
      if (iVar1 == 0) goto LAB_00af1630;
                    /* try { // try from 00af1478 to 00bf1497 has its CatchHandler @ 00af1530 */
      puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01d39054);
    }
    lVar5 = OPENSSL_sk_pop(*puVar2);
    if (lVar5 == 0) {
      if ((puVar2[2] == 0) || ((ulong)puVar2[1] < (ulong)puVar2[2])) {
                    /* try { // try from 00af14e4 to 00bf14e7 has its CatchHandler @ 00af1524 */
                    /* try { // try from 00af14e8 to 00bf1567 has its CatchHandler @ 00af13bc */
        pvVar4 = (void *)CRYPTO_zalloc(0x28,"crypto/async/async.c",0x54);
        if (pvVar4 == (void *)0x0) {
          ERR_put_error(0x33,0x66,0x41,"crypto/async/async.c",0x56);
        }
        else {
          *(undefined4 *)((long)pvVar4 + 0x1c) = 0;
          CRYPTO_free(*(void **)((long)pvVar4 + 0x10));
          CRYPTO_free(pvVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af14e4 with catch @ 00af1524
                        */
        }
      }
LAB_00af1630:
      *(undefined8 *)((long)ptr + 8) = 0;
      return 1;
    }
    *(long *)((long)ptr + 8) = lVar5;
    if (param_5 == (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1410 with catch @ 00af1528
                        */
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    else {
      pvVar4 = CRYPTO_malloc((int)param_6,"crypto/async/async.c",0xe3);
      *(void **)(*(long *)((long)ptr + 8) + 0x10) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        ERR_put_error(0x33,0x69,0x41,"crypto/async/async.c",0xe5);
        lVar5 = *(long *)((long)ptr + 8);
        puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01d39054);
        CRYPTO_free(*(void **)(lVar5 + 0x10));
        *(undefined8 *)(lVar5 + 0x10) = 0;
        OPENSSL_sk_push(*puVar2,lVar5);
        *(undefined8 *)((long)ptr + 8) = 0;
        return 0;
      }
                    /* try { // try from 00af14b8 to 00bf14c7 has its CatchHandler @ 00af1548 */
      memcpy(pvVar4,param_5,param_6);
      lVar5 = *(long *)((long)ptr + 8);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1478 with catch @ 00af1530
                        */
    *(undefined8 *)(lVar5 + 8) = param_4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1434 with catch @ 00af1534
                        */
    *(undefined8 *)(lVar5 + 0x20) = param_2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af142c with catch @ 00af1544
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af146c with catch @ 00af1548
                       catch(type#1 @ 00000000) { ... } // from try @ 00af14b8 with catch @ 00af1548
                        */
    iVar1 = 0xf3;
  }
  else {
    *(long *)((long)ptr + 8) = lVar5;
LAB_00af130c:
    iVar1 = *(int *)(lVar5 + 0x1c);
    if (iVar1 == 1) {
      *param_1 = lVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af14e8 with catch @ 00af13bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00af156c with catch @ 00af13bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00af157c with catch @ 00af13bc
                        */
      *(undefined4 *)(*(long *)((long)ptr + 8) + 0x1c) = 2;
      *(undefined8 *)((long)ptr + 8) = 0;
      return 2;
    }
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *param_3 = *(undefined4 *)(lVar5 + 0x18);
        *(undefined8 *)(lVar5 + 0x20) = 0;
        puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01d39054);
                    /* catch() { ... } // from try @ 00af1028 with catch @ 00af135c */
        CRYPTO_free(*(void **)(lVar5 + 0x10));
        *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00af10cc with catch @ 00af1364 */
        OPENSSL_sk_push(*puVar2,lVar5);
        *(undefined8 *)((long)ptr + 8) = 0;
        *param_1 = 0;
        return 3;
      }
                    /* try { // try from 00af1410 to 00bf1413 has its CatchHandler @ 00af1528 */
      ERR_put_error(0x33,0x69,0x44,"crypto/async/async.c",0xd6);
      lVar5 = *(long *)((long)ptr + 8);
      puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01d39054);
                    /* try { // try from 00af142c to 00bf1433 has its CatchHandler @ 00af1544 */
                    /* try { // try from 00af1434 to 00bf1443 has its CatchHandler @ 00af1534 */
      CRYPTO_free(*(void **)(lVar5 + 0x10));
      *(undefined8 *)(lVar5 + 0x10) = 0;
      uVar3 = *puVar2;
      goto LAB_00af158c;
    }
    *(long *)((long)ptr + 8) = *param_1;
    iVar1 = 0xcf;
  }
  ERR_put_error(0x33,0x69,0x66,"crypto/async/async.c",iVar1);
  lVar5 = *(long *)((long)ptr + 8);
  puVar2 = (undefined8 *)CRYPTO_THREAD_get_local(&DAT_01d39054);
                    /* try { // try from 00af1568 to 00bf156b has its CatchHandler @ 00af1574 */
                    /* try { // try from 00af156c to 00bf1577 has its CatchHandler @ 00af13bc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1568 with catch @ 00af1574
                        */
                    /* try { // try from 00af1578 to 00bf157b has its CatchHandler @ 00af1584 */
                    /* try { // try from 00af157c to 00bf1587 has its CatchHandler @ 00af13bc */
  CRYPTO_free(*(void **)(lVar5 + 0x10));
  *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af1578 with catch @ 00af1584
                        */
  uVar3 = *puVar2;
LAB_00af158c:
  OPENSSL_sk_push(uVar3,lVar5);
  *(undefined8 *)((long)ptr + 8) = 0;
  *param_1 = 0;
  return 0;
}

