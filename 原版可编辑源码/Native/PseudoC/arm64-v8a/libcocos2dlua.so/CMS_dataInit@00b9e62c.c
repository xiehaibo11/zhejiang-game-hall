
BIO * CMS_dataInit(CMS_ContentInfo *cms,BIO *icont)

{
  int iVar1;
  BIO *pBVar2;
  BIO *b;
  
                    /* try { // try from 00b9e630 to 00c9e63b has its CatchHandler @ 00b9e700 */
                    /* try { // try from 00b9e63c to 00c9e663 has its CatchHandler @ 00b9e59c */
  pBVar2 = icont;
  if ((icont == (BIO *)0x0) && (pBVar2 = (BIO *)cms_content_bio(cms), pBVar2 == (BIO *)0x0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9e75c with catch @ 00b9e704
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e91c with catch @ 00b9e704
                        */
    ERR_put_error(0x2e,0x6f,0x7f,"crypto/cms/cms_lib.c",0x40);
    return (BIO *)0x0;
  }
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
                    /* try { // try from 00b9e664 to 00c9e66b has its CatchHandler @ 00b9e6fc */
                    /* try { // try from 00b9e66c to 00c9e68b has its CatchHandler @ 00b9e59c */
  switch(iVar1) {
  case 0x15:
    goto switchD_00b9e680_caseD_15;
  case 0x16:
    b = (BIO *)cms_SignedData_init_bio(cms);
                    /* try { // try from 00b9e68c to 00c9e693 has its CatchHandler @ 00b9e6fc */
    break;
  case 0x17:
                    /* try { // try from 00b9e694 to 00c9e6b3 has its CatchHandler @ 00b9e59c */
    b = (BIO *)cms_EnvelopedData_init_bio(cms);
    break;
  default:
                    /* try { // try from 00b9e6b4 to 00c9e6bf has its CatchHandler @ 00b9e6fc */
                    /* try { // try from 00b9e6c0 to 00c9e703 has its CatchHandler @ 00b9e59c */
    ERR_put_error(0x2e,0x6f,0x9c,"crypto/cms/cms_lib.c",0x5e);
    goto LAB_00b9e6cc;
  case 0x19:
    b = (BIO *)cms_DigestedData_init_bio(cms);
    break;
  case 0x1a:
    b = (BIO *)cms_EncryptedData_init_bio(cms);
  }
  if (b != (BIO *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9e664 with catch @ 00b9e6fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e68c with catch @ 00b9e6fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e6b4 with catch @ 00b9e6fc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9e604 with catch @ 00b9e700
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9e630 with catch @ 00b9e700
                        */
    pBVar2 = BIO_push(b,pBVar2);
    return pBVar2;
  }
  if (icont == (BIO *)0x0) {
    BIO_free(pBVar2);
  }
LAB_00b9e6cc:
  pBVar2 = (BIO *)0x0;
switchD_00b9e680_caseD_15:
  return pBVar2;
}

