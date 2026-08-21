
int asn1_enc_save(ASN1_VALUE **pval,uchar *in,int inlen,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  void *pvVar2;
  
                    /* try { // try from 00af0bd8 to 00bf0bdf has its CatchHandler @ 00af0f48 */
  if ((((pval != (ASN1_VALUE **)0x0) && (*pval != (ASN1_VALUE *)0x0)) &&
      (pvVar2 = it->funcs, pvVar2 != (void *)0x0)) &&
     (((*(byte *)((long)pvVar2 + 8) >> 1 & 1) != 0 &&
      (pAVar1 = *pval + *(int *)((long)pvVar2 + 0x20), pAVar1 != (ASN1_VALUE *)0x0)))) {
    CRYPTO_free(*(void **)pAVar1);
    pvVar2 = CRYPTO_malloc(inlen,"crypto/asn1/tasn_utl.c",0x87);
    *(void **)pAVar1 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    memcpy(pvVar2,in,(long)inlen);
    *(long *)(pAVar1 + 8) = (long)inlen;
    *(undefined4 *)(pAVar1 + 0x10) = 0;
  }
  return 1;
}

