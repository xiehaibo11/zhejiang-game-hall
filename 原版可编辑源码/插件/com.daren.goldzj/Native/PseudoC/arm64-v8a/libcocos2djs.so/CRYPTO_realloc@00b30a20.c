
void * CRYPTO_realloc(void *addr,int num,char *file,int line)

{
  void *pvVar1;
  ulong __size;
  
  __size = (ulong)(uint)num;
  if ((PTR_CRYPTO_realloc_01d20828 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_realloc_01d20828 != CRYPTO_realloc)) {
                    /* WARNING: Could not recover jumptable at 0x00b30a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_realloc_01d20828)();
    return pvVar1;
  }
  if (addr == (void *)0x0) {
    if ((PTR_CRYPTO_malloc_01d20820 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_malloc_01d20820 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x00b30a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_01d20820)(__size,file,line);
      return pvVar1;
    }
    if (__size != 0) {
      DAT_01d3ac08 = 1;
      pvVar1 = malloc(__size);
      return pvVar1;
    }
  }
  else {
    if (__size != 0) {
      DAT_01d3ac08 = 1;
      pvVar1 = realloc(addr,__size);
      return pvVar1;
    }
    if ((PTR_CRYPTO_free_01d20830 == (undefined *)0x0) ||
       ((code *)PTR_CRYPTO_free_01d20830 == CRYPTO_free)) {
      free(addr);
    }
    else {
      (*(code *)PTR_CRYPTO_free_01d20830)(addr,file,line);
    }
  }
  return (void *)0x0;
}

