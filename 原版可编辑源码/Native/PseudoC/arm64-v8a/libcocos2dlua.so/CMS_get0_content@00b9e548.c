
ASN1_OCTET_STRING ** CMS_get0_content(CMS_ContentInfo *cms)

{
  int iVar1;
  CMS_ContentInfo *pCVar2;
  
                    /* catch() { ... } // from try @ 00b9e398 with catch @ 00b9e54c */
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
                    /* catch() { ... } // from try @ 00b9e314 with catch @ 00b9e560 */
  switch(iVar1) {
  case 0x15:
    pCVar2 = cms + 8;
    break;
  case 0x16:
  case 0x19:
                    /* catch() { ... } // from try @ 00b9e2f4 with catch @ 00b9e580 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9e60c with catch @ 00b9e59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e63c with catch @ 00b9e59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e66c with catch @ 00b9e59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e694 with catch @ 00b9e59c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e6c0 with catch @ 00b9e59c
                        */
    if (iVar1 == 0x312) {
      return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 0x18) + 8);
    }
  case 0x18:
    if (**(int **)(cms + 8) == 4) {
      pCVar2 = (CMS_ContentInfo *)(*(int **)(cms + 8) + 2);
    }
    else {
                    /* try { // try from 00b9e604 to 00c9e60b has its CatchHandler @ 00b9e700 */
                    /* try { // try from 00b9e60c to 00c9e62f has its CatchHandler @ 00b9e59c */
      ERR_put_error(0x2e,0x81,0x98,"crypto/cms/cms_lib.c",0xb8);
      pCVar2 = (CMS_ContentInfo *)0x0;
    }
  }
  return (ASN1_OCTET_STRING **)pCVar2;
}

