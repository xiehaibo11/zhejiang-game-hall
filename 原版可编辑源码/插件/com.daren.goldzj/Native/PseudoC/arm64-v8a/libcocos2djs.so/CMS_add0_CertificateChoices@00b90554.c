
CMS_CertificateChoices * CMS_add0_CertificateChoices(CMS_ContentInfo *cms)

{
  int iVar1;
  ASN1_VALUE *val;
  long lVar2;
  long *plVar3;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    plVar3 = *(long **)(*(long *)(cms + 8) + 8);
    if (plVar3 == (long *)0x0) {
      return (CMS_CertificateChoices *)0x0;
    }
    lVar2 = *plVar3;
  }
  else {
    if (iVar1 != 0x16) {
      ERR_put_error(0x2e,0x80,0x98,"crypto/cms/cms_lib.c",0x162);
      return (CMS_CertificateChoices *)0x0;
    }
    plVar3 = (long *)(*(long *)(cms + 8) + 0x18);
    lVar2 = *plVar3;
  }
  if (lVar2 == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *plVar3 = lVar2;
    if (lVar2 == 0) {
      return (CMS_CertificateChoices *)0x0;
    }
  }
  val = ASN1_item_new((ASN1_ITEM *)CMS_CertificateChoices_it);
  if (val != (ASN1_VALUE *)0x0) {
    iVar1 = OPENSSL_sk_push(*plVar3,val);
    if (iVar1 == 0) {
      ASN1_item_free(val,(ASN1_ITEM *)CMS_CertificateChoices_it);
      return (CMS_CertificateChoices *)0x0;
    }
    return (CMS_CertificateChoices *)val;
  }
  return (CMS_CertificateChoices *)0x0;
}

