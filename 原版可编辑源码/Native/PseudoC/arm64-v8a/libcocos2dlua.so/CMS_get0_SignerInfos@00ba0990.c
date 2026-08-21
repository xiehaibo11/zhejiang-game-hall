
stack_st_CMS_SignerInfo * CMS_get0_SignerInfos(CMS_ContentInfo *cms)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00ba08fc with catch @ 00ba0990 */
                    /* catch() { ... } // from try @ 00ba02b8 with catch @ 00ba099c */
                    /* catch() { ... } // from try @ 00ba00d4 with catch @ 00ba09a0
                       catch() { ... } // from try @ 00ba06d4 with catch @ 00ba09a0
                       catch() { ... } // from try @ 00ba0874 with catch @ 00ba09a0 */
                    /* catch() { ... } // from try @ 00ba0290 with catch @ 00ba09a4 */
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
                    /* catch() { ... } // from try @ 00ba0310 with catch @ 00ba09a8 */
                    /* catch() { ... } // from try @ 00ba0520 with catch @ 00ba09ac */
  if (iVar1 == 0x16) {
    if (*(long *)(cms + 8) != 0) {
      return *(stack_st_CMS_SignerInfo **)(*(long *)(cms + 8) + 0x28);
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
  }
                    /* catch() { ... } // from try @ 00ba04e8 with catch @ 00ba09e8 */
  return (stack_st_CMS_SignerInfo *)0x0;
}

