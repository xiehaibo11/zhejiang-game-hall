
void * CRYPTO_realloc(void *addr,int num,char *file,int line)

{
  void *pvVar1;
  ulong __size;
  
  __size = (ulong)(uint)num;
  if ((PTR_CRYPTO_realloc_0176ea78 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_realloc_0176ea78 != CRYPTO_realloc)) {
                    /* WARNING: Could not recover jumptable at 0x00b3eecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_realloc_0176ea78)();
    return pvVar1;
  }
  if (addr == (void *)0x0) {
    if ((PTR_CRYPTO_malloc_0176ea70 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_malloc_0176ea70 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x00b3ef18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_0176ea70)(__size,file,line);
      return pvVar1;
    }
    if (__size != 0) {
      DAT_01784988 = 1;
      pvVar1 = malloc(__size);
      return pvVar1;
    }
  }
  else {
    if (__size != 0) {
      DAT_01784988 = 1;
      pvVar1 = realloc(addr,__size);
      return pvVar1;
    }
    if ((PTR_CRYPTO_free_0176ea80 == (undefined *)0x0) ||
       ((code *)PTR_CRYPTO_free_0176ea80 == CRYPTO_free)) {
      free(addr);
    }
    else {
      (*(code *)PTR_CRYPTO_free_0176ea80)(addr,file,line);
    }
  }
  return (void *)0x0;
}

