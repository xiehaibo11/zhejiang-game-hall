
ASN1_OCTET_STRING ** CMS_get0_content(CMS_ContentInfo *cms)

{
  int iVar1;
  CMS_ContentInfo *pCVar2;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  switch(iVar1) {
  case 0x15:
    pCVar2 = cms + 8;
    break;
  case 0x16:
  case 0x19:
    pCVar2 = (CMS_ContentInfo *)(*(long *)(*(long *)(cms + 8) + 0x10) + 8);
    break;
  case 0x17:
    pCVar2 = (CMS_ContentInfo *)(*(long *)(*(long *)(cms + 8) + 0x18) + 0x10);
    break;
  case 0x1a:
    pCVar2 = (CMS_ContentInfo *)(*(long *)(*(long *)(cms + 8) + 8) + 0x10);
    break;
  default:
    if (iVar1 == 0xcd) {
      return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 0x28) + 8);
    }
    if (iVar1 == 0x312) {
      return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 0x18) + 8);
    }
  case 0x18:
    if (**(int **)(cms + 8) == 4) {
      pCVar2 = (CMS_ContentInfo *)(*(int **)(cms + 8) + 2);
    }
    else {
      ERR_put_error(0x2e,0x81,0x98,"crypto/cms/cms_lib.c",0xb8);
      pCVar2 = (CMS_ContentInfo *)0x0;
    }
  }
  return (ASN1_OCTET_STRING **)pCVar2;
}

