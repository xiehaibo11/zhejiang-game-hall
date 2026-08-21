
ASN1_VALUE * cms_Data_create(void)

{
  ASN1_VALUE *cms;
  ASN1_OBJECT *pAVar1;
  
  cms = ASN1_item_new((ASN1_ITEM *)CMS_ContentInfo_it);
  if (cms != (ASN1_VALUE *)0x0) {
    pAVar1 = OBJ_nid2obj(0x15);
    *(ASN1_OBJECT **)cms = pAVar1;
    CMS_set_detached((CMS_ContentInfo *)cms,0);
  }
                    /* try { // try from 00b9e2f4 to 00c9e2fb has its CatchHandler @ 00b9e580 */
  return cms;
}

