
void FUN_00b83b28(void *param_1)

{
  if ((param_1 != (void *)0x0) && ((*(uint *)((long)param_1 + 8) & 1) != 0)) {
    if ((*(uint *)((long)param_1 + 8) >> 1 & 1) != 0) {
      CRYPTO_free(*(void **)((long)param_1 + 0x18));
      CRYPTO_free(*(void **)((long)param_1 + 0x20));
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}

