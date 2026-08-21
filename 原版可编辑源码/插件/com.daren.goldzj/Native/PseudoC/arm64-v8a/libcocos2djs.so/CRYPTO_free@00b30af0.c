
void CRYPTO_free(void *ptr)

{
  if ((PTR_CRYPTO_free_01d20830 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_free_01d20830 != CRYPTO_free)) {
                    /* WARNING: Could not recover jumptable at 0x00b30b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_CRYPTO_free_01d20830)();
    return;
  }
  free(ptr);
  return;
}

