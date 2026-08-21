
void OPENSSL_LH_free(long *param_1)

{
  void *pvVar1;
  void *ptr;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (long *)0x0) {
    uVar2 = *(uint *)(param_1 + 3);
    pvVar1 = (void *)*param_1;
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        ptr = *(void **)((long)pvVar1 + (ulong)uVar3 * 8);
        if (ptr != (void *)0x0) {
          do {
            pvVar1 = *(void **)((long)ptr + 8);
            CRYPTO_free(ptr);
            ptr = pvVar1;
          } while (pvVar1 != (void *)0x0);
          uVar2 = *(uint *)(param_1 + 3);
          pvVar1 = (void *)*param_1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    CRYPTO_free(pvVar1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

