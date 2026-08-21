
int CMS_RecipientInfo_ktri_get0_algs
              (CMS_RecipientInfo *ri,EVP_PKEY **pk,X509 **recip,X509_ALGOR **palg)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00b9bc04 with catch @ 00b9c7d0 */
  if (*(int *)ri != 0) {
                    /* catch() { ... } // from try @ 00b9bbb0 with catch @ 00b9c7f0 */
    ERR_put_error(0x2e,0x8e,0x7c,"crypto/cms/cms_env.c",0xee);
                    /* catch() { ... } // from try @ 00b9bbbc with catch @ 00b9c800 */
    return 0;
  }
                    /* catch() { ... } // from try @ 00b9bbe4 with catch @ 00b9c808 */
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

