
void * CRYPTO_malloc(int num,char *file,int line)

{
  ulong __size;
  void *pvVar1;
  
  __size = (ulong)(uint)num;
  if ((PTR_CRYPTO_malloc_0176ea70 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_malloc_0176ea70 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x00b3edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_0176ea70)(__size,file,line);
    return pvVar1;
  }
  if (__size != 0) {
    DAT_01784988 = 1;
    pvVar1 = malloc(__size);
    return pvVar1;
  }
  return (void *)0x0;
}

