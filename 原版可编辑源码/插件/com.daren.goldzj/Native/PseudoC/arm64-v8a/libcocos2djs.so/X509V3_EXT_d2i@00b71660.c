
void * X509V3_EXT_d2i(X509_EXTENSION *ext)

{
  int iVar1;
  X509V3_EXT_METHOD *pXVar2;
  ASN1_OCTET_STRING *x;
  ASN1_VALUE *pAVar3;
  uchar *local_28;
  
  pXVar2 = X509V3_EXT_get(ext);
  pAVar3 = (ASN1_VALUE *)0x0;
  if (pXVar2 != (X509V3_EXT_METHOD *)0x0) {
    x = X509_EXTENSION_get_data(ext);
    local_28 = (uchar *)ASN1_STRING_get0_data();
    iVar1 = ASN1_STRING_length(x);
    if (pXVar2->it == (ASN1_ITEM *)0x0) {
      pAVar3 = (*pXVar2->d2i)((void *)0x0,&local_28,(long)iVar1);
    }
    else {
      pAVar3 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,(long)iVar1,pXVar2->it);
    }
  }
  return pAVar3;
}

