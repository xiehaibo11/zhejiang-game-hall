
void * FUN_00ba1e74(long param_1)

{
  int iVar1;
  void *ptr;
  
                    /* catch() { ... } // from try @ 00ba1bdc with catch @ 00ba1e7c */
  ptr = CRYPTO_malloc(0x18,"crypto/conf/conf_def.c",0x52);
  if ((ptr != (void *)0x0) && (iVar1 = (**(code **)(param_1 + 0x10))(ptr), iVar1 == 0)) {
                    /* catch() { ... } // from try @ 00ba1ba8 with catch @ 00ba1eb0 */
                    /* catch() { ... } // from try @ 00ba1ab0 with catch @ 00ba1eb4 */
                    /* catch() { ... } // from try @ 00ba1adc with catch @ 00ba1ec0 */
    CRYPTO_free(ptr);
    ptr = (void *)0x0;
  }
                    /* catch() { ... } // from try @ 00ba1a8c with catch @ 00ba1ed0 */
  return ptr;
}

