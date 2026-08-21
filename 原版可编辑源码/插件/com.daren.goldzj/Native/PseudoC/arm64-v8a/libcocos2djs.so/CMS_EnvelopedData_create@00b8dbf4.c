
CMS_ContentInfo * CMS_EnvelopedData_create(EVP_CIPHER *cipher)

{
  int iVar1;
  CMS_ContentInfo *a;
  ASN1_VALUE *pAVar2;
  ASN1_OBJECT *pAVar3;
  int reason;
  int line;
  
  a = CMS_ContentInfo_new();
  if (a == (CMS_ContentInfo *)0x0) goto LAB_00b8dcc4;
  if (*(long *)(a + 8) == 0) {
    pAVar2 = ASN1_item_new((ASN1_ITEM *)CMS_EnvelopedData_it);
    *(ASN1_VALUE **)(a + 8) = pAVar2;
    if (pAVar2 != (ASN1_VALUE *)0x0) {
      *(undefined8 *)pAVar2 = 0;
      pAVar3 = OBJ_nid2obj(0x15);
      **(undefined8 **)(*(long *)(a + 8) + 0x18) = pAVar3;
      ASN1_OBJECT_free(*(ASN1_OBJECT **)a);
      pAVar3 = OBJ_nid2obj(0x17);
      *(ASN1_OBJECT **)a = pAVar3;
      goto LAB_00b8dc84;
    }
    iVar1 = 0x7e;
    reason = 0x41;
    line = 0x26;
  }
  else {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)a);
    if (iVar1 == 0x17) {
LAB_00b8dc84:
      if ((*(long *)(a + 8) != 0) &&
         (iVar1 = cms_EncryptedContent_init(*(undefined8 *)(*(long *)(a + 8) + 0x18),cipher,0,0),
         iVar1 != 0)) {
        return a;
      }
      goto LAB_00b8dcc4;
    }
    iVar1 = 0x83;
    reason = 0x6b;
    line = 0x1b;
  }
  ERR_put_error(0x2e,iVar1,reason,"crypto/cms/cms_env.c",line);
LAB_00b8dcc4:
  CMS_ContentInfo_free(a);
  ERR_put_error(0x2e,0x7c,0x41,"crypto/cms/cms_env.c",0x78);
  return (CMS_ContentInfo *)0x0;
}

