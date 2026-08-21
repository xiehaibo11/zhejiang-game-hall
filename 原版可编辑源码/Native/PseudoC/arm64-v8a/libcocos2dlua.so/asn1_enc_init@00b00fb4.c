
void asn1_enc_init(ASN1_VALUE **pval,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  void *pvVar2;
  
  if ((((pval != (ASN1_VALUE **)0x0) && (*pval != (ASN1_VALUE *)0x0)) &&
      (pvVar2 = it->funcs, pvVar2 != (void *)0x0)) &&
     (((*(byte *)((long)pvVar2 + 8) >> 1 & 1) != 0 &&
      (pAVar1 = *pval + *(int *)((long)pvVar2 + 0x20), pAVar1 != (ASN1_VALUE *)0x0)))) {
    *(undefined8 *)pAVar1 = 0;
    *(undefined8 *)(pAVar1 + 8) = 0;
    *(undefined4 *)(pAVar1 + 0x10) = 1;
  }
  return;
}

