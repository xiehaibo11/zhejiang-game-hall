
stack_st_CMS_SignerInfo * CMS_get0_SignerInfos(CMS_ContentInfo *cms)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x16) {
    if (*(long *)(cms + 8) != 0) {
      return *(stack_st_CMS_SignerInfo **)(*(long *)(cms + 8) + 0x28);
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
  }
  return (stack_st_CMS_SignerInfo *)0x0;
}

