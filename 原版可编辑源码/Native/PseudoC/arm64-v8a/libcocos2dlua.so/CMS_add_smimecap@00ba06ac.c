
int CMS_add_smimecap(CMS_SignerInfo *si,stack_st_X509_ALGOR *algs)

{
  int iVar1;
  uchar *local_18;
  
  local_18 = (uchar *)0x0;
  iVar1 = i2d_X509_ALGORS(algs,&local_18);
                    /* try { // try from 00ba06d4 to 00ca06eb has its CatchHandler @ 00ba09a0 */
  if (iVar1 < 1) {
                    /* try { // try from 00ba0714 to 00ca0747 has its CatchHandler @ 00ba0ae4 */
    iVar1 = 0;
  }
  else {
    iVar1 = CMS_signed_add1_attr_by_NID(si,0xa7,0x10,local_18,iVar1);
                    /* try { // try from 00ba0704 to 00ca070b has its CatchHandler @ 00ba0a0c */
    CRYPTO_free(local_18);
  }
  return iVar1;
}

