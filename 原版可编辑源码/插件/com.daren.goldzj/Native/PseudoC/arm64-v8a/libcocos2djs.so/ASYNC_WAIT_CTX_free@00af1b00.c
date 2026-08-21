
void ASYNC_WAIT_CTX_free(undefined8 *param_1)

{
  undefined8 *ptr;
  undefined8 *puVar1;
  
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
    CRYPTO_free(param_1);
    return;
  }
  return;
}

