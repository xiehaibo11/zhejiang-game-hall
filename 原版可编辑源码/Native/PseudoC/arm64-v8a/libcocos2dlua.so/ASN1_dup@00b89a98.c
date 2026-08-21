
void * ASN1_dup(undefined1 *i2d,undefined1 *d2i,void *x)

{
  int iVar1;
  void *ptr;
  void *pvVar2;
  void *local_40;
  void *local_38;
  
                    /* catch() { ... } // from try @ 00b899e8 with catch @ 00b89a98 */
                    /* catch() { ... } // from try @ 00b89a00 with catch @ 00b89aa4 */
  if (x != (void *)0x0) {
    iVar1 = (*(code *)i2d)(x,0);
    ptr = CRYPTO_malloc(iVar1 + 10,"crypto/asn1/a_dup.c",0x1b);
    if (ptr != (void *)0x0) {
      local_38 = ptr;
      iVar1 = (*(code *)i2d)(x,&local_38);
      local_40 = ptr;
      pvVar2 = (void *)(*(code *)d2i)(0,&local_40,(long)iVar1);
      CRYPTO_free(ptr);
      return pvVar2;
    }
    ERR_put_error(0xd,0x6f,0x41,"crypto/asn1/a_dup.c",0x1d);
  }
  return (void *)0x0;
}

