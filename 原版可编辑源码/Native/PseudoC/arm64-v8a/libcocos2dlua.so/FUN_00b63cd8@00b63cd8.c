
void FUN_00b63cd8(int *param_1)

{
  if (((*(byte *)(param_1 + 0xe) & 1) != 0) && (CRYPTO_free(*(void **)(param_1 + 2)), *param_1 == 3)
     ) {
    CRYPTO_free(*(void **)(param_1 + 8));
    CRYPTO_free(*(void **)(param_1 + 10));
    CRYPTO_free(*(void **)(param_1 + 0xc));
  }
  CRYPTO_free(param_1);
  return;
}

