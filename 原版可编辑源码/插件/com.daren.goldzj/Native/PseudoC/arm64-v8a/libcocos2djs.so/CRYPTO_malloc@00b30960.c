
void * CRYPTO_malloc(int num,char *file,int line)

{
  ulong __size;
  void *pvVar1;
  
  __size = (ulong)(uint)num;
  if ((PTR_CRYPTO_malloc_01d20820 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_malloc_01d20820 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x00b3097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_01d20820)(__size,file,line);
    return pvVar1;
  }
  if (__size != 0) {
    DAT_01d3ac08 = 1;
    pvVar1 = malloc(__size);
    return pvVar1;
  }
  return (void *)0x0;
}

