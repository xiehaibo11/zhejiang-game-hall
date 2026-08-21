
int asn1_enc_restore(int *len,uchar **out,ASN1_VALUE **pval,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  int iVar2;
  void *pvVar3;
  
  if ((((pval == (ASN1_VALUE **)0x0) || (*pval == (ASN1_VALUE *)0x0)) ||
      (pvVar3 = it->funcs, pvVar3 == (void *)0x0)) ||
     ((((*(byte *)((long)pvVar3 + 8) >> 1 & 1) == 0 ||
       (pAVar1 = *pval + *(int *)((long)pvVar3 + 0x20), pAVar1 == (ASN1_VALUE *)0x0)) ||
      (*(int *)(pAVar1 + 0x10) != 0)))) {
    iVar2 = 0;
  }
  else {
    if (out != (uchar **)0x0) {
      memcpy(*out,*(void **)pAVar1,*(size_t *)(pAVar1 + 8));
      *out = *out + *(long *)(pAVar1 + 8);
    }
    if (len != (int *)0x0) {
      *len = (int)*(undefined8 *)(pAVar1 + 8);
    }
    iVar2 = 1;
  }
  return iVar2;
}

