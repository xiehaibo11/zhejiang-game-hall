
int CMS_stream(uchar ***boundary,CMS_ContentInfo *cms)

{
  int iVar1;
  ASN1_OCTET_STRING **ppAVar2;
  ASN1_OCTET_STRING *pAVar3;
  
  ppAVar2 = CMS_get0_content(cms);
  iVar1 = 0;
  if (ppAVar2 != (ASN1_OCTET_STRING **)0x0) {
    pAVar3 = *ppAVar2;
    if (pAVar3 == (ASN1_OCTET_STRING *)0x0) {
      pAVar3 = ASN1_OCTET_STRING_new();
      *ppAVar2 = pAVar3;
      if (pAVar3 == (ASN1_OCTET_STRING *)0x0) {
        ERR_put_error(0x2e,0x9b,0x41,"crypto/cms/cms_io.c",0x1f);
        return 0;
      }
    }
    pAVar3->flags = pAVar3->flags & 0xffffffffffffffcfU | 0x10;
    *boundary = &pAVar3->data;
    iVar1 = 1;
  }
  return iVar1;
}

