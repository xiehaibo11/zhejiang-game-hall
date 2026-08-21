
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
                    /* try { // try from 00b02240 to 00c0224b has its CatchHandler @ 00b022b8 */
        *puVar1 = *(undefined8 *)((long)ptr + 0x28);
        CRYPTO_free(ptr);
        ptr = (void *)*puVar1;
                    /* try { // try from 00b0224c to 00c022ef has its CatchHandler @ 00b02190 */
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
  return;
}

