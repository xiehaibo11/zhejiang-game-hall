
CMS_RevocationInfoChoice * CMS_add0_RevocationInfoChoice(CMS_ContentInfo *cms)

{
  long *plVar1;
  int iVar2;
  ASN1_VALUE *val;
  long lVar3;
  
  iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar2 == 0x17) {
    if (*(long *)(*(long *)(cms + 8) + 8) == 0) {
      return (CMS_RevocationInfoChoice *)0x0;
    }
    plVar1 = (long *)(*(long *)(*(long *)(cms + 8) + 8) + 8);
    lVar3 = *plVar1;
  }
  else {
    if (iVar2 != 0x16) {
      ERR_put_error(0x2e,0x84,0x98,"crypto/cms/cms_lib.c",0x1af);
      return (CMS_RevocationInfoChoice *)0x0;
    }
    plVar1 = (long *)(*(long *)(cms + 8) + 0x20);
    lVar3 = *plVar1;
  }
  if (lVar3 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *plVar1 = lVar3;
    if (lVar3 == 0) {
      return (CMS_RevocationInfoChoice *)0x0;
    }
  }
  val = ASN1_item_new((ASN1_ITEM *)CMS_RevocationInfoChoice_it);
  if (val != (ASN1_VALUE *)0x0) {
    iVar2 = OPENSSL_sk_push(*plVar1,val);
    if (iVar2 == 0) {
      ASN1_item_free(val,(ASN1_ITEM *)CMS_RevocationInfoChoice_it);
      return (CMS_RevocationInfoChoice *)0x0;
    }
    return (CMS_RevocationInfoChoice *)val;
  }
  return (CMS_RevocationInfoChoice *)0x0;
}

