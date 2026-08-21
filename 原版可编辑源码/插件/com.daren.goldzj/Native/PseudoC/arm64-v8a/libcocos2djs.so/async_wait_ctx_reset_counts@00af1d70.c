
void async_wait_ctx_reset_counts(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *ptr;
  
  param_1[1] = 0;
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    pvVar2 = (void *)0x0;
    ptr = (void *)*param_1;
    do {
      puVar1 = param_1;
      if (pvVar2 != (void *)0x0) {
        puVar1 = (undefined8 *)((long)pvVar2 + 0x28);
      }
      while (*(int *)((long)ptr + 0x24) != 0) {
                    /* catch() { ... } // from try @ 00af1df0 with catch @ 00af1db8 */
        *puVar1 = *(undefined8 *)((long)ptr + 0x28);
        CRYPTO_free(ptr);
        ptr = (void *)*puVar1;
        if (ptr == (void *)0x0) {
          return;
        }
      }
      if (*(int *)((long)ptr + 0x20) != 0) {
        *(undefined4 *)((long)ptr + 0x20) = 0;
      }
      puVar1 = (undefined8 *)((long)ptr + 0x28);
      pvVar2 = ptr;
      ptr = (void *)*puVar1;
    } while ((void *)*puVar1 != (void *)0x0);
  }
                    /* try { // try from 00af1dec to 00bf1def has its CatchHandler @ 00af1e18 */
                    /* try { // try from 00af1df0 to 00bf1e37 has its CatchHandler @ 00af1db8 */
  return;
}

