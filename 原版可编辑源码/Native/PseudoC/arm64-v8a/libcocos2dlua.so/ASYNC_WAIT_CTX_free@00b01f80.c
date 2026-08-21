
void ASYNC_WAIT_CTX_free(undefined8 *param_1)

{
  undefined8 *ptr;
  undefined8 *puVar1;
  
                    /* try { // try from 00b01f80 to 00c01f8b has its CatchHandler @ 00b01ff8 */
                    /* try { // try from 00b01f8c to 00c0202f has its CatchHandler @ 00b01ed0 */
  if (param_1 != (undefined8 *)0x0) {
    ptr = (undefined8 *)*param_1;
    while (ptr != (undefined8 *)0x0) {
      if ((*(int *)((long)ptr + 0x24) == 0) && ((code *)ptr[3] != (code *)0x0)) {
        (*(code *)ptr[3])(param_1,*ptr,*(undefined4 *)(ptr + 1),ptr[2]);
      }
      puVar1 = (undefined8 *)ptr[5];
      CRYPTO_free(ptr);
      ptr = puVar1;
    }
                    /* catch() { ... } // from try @ 00b01f80 with catch @ 00b01ff8 */
    CRYPTO_free(param_1);
    return;
  }
  return;
}

