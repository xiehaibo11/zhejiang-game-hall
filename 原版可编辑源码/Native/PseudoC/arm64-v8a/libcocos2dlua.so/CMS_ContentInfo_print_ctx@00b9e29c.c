
int CMS_ContentInfo_print_ctx(BIO *out,CMS_ContentInfo *x,int indent,ASN1_PCTX *pctx)

{
  int iVar1;
  
                    /* try { // try from 00b9e29c to 00c9e2f3 has its CatchHandler @ 00b9e29c
                       catch() { ... } // from try @ 00b9e29c with catch @ 00b9e29c
                       catch() { ... } // from try @ 00b9e324 with catch @ 00b9e29c
                       catch() { ... } // from try @ 00b9e410 with catch @ 00b9e29c */
  iVar1 = ASN1_item_print(out,(ASN1_VALUE *)x,indent,(ASN1_ITEM *)CMS_ContentInfo_it,pctx);
  return iVar1;
}

