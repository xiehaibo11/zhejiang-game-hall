
int CMS_RecipientInfo_ktri_get0_algs
              (CMS_RecipientInfo *ri,EVP_PKEY **pk,X509 **recip,X509_ALGOR **palg)

{
  long lVar1;
  
  if (*(int *)ri != 0) {
    ERR_put_error(0x2e,0x8e,0x7c,"crypto/cms/cms_env.c",0xee);
    return 0;
  }
  lVar1 = *(long *)(ri + 8);
  if (pk != (EVP_PKEY **)0x0) {
    *pk = *(EVP_PKEY **)(lVar1 + 0x28);
  }
  if (recip != (X509 **)0x0) {
    *recip = *(X509 **)(lVar1 + 0x20);
  }
  if (palg != (X509_ALGOR **)0x0) {
    *palg = *(X509_ALGOR **)(lVar1 + 0x10);
  }
  return 1;
}

