
int CMS_add_smimecap(CMS_SignerInfo *si,stack_st_X509_ALGOR *algs)

{
  int iVar1;
  uchar *local_18;
  
  local_18 = (uchar *)0x0;
  iVar1 = i2d_X509_ALGORS(algs,&local_18);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = CMS_signed_add1_attr_by_NID(si,0xa7,0x10,local_18,iVar1);
    CRYPTO_free(local_18);
  }
  return iVar1;
}

