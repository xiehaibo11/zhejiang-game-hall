
void CRYPTO_free(void *ptr)

{
  if ((PTR_CRYPTO_free_0176ea80 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_free_0176ea80 != CRYPTO_free)) {
                    /* WARNING: Could not recover jumptable at 0x00b3ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_CRYPTO_free_0176ea80)();
    return;
  }
  free(ptr);
  return;
}

