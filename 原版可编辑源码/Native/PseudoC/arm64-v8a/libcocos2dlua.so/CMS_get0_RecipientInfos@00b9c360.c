
stack_st_CMS_RecipientInfo * CMS_get0_RecipientInfos(CMS_ContentInfo *cms)

{
  int iVar1;
  
                    /* try { // try from 00b9c364 to 00c9c373 has its CatchHandler @ 00b9c6ec */
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    if (*(long *)(cms + 8) != 0) {
      return *(stack_st_CMS_RecipientInfo **)(*(long *)(cms + 8) + 0x10);
    }
  }
  else {
                    /* try { // try from 00b9c3a8 to 00c9c3af has its CatchHandler @ 00b9c78c */
    ERR_put_error(0x2e,0x83,0x6b,"crypto/cms/cms_env.c",0x1b);
  }
  return (stack_st_CMS_RecipientInfo *)0x0;
}

