
int i2d_RSA_PUBKEY(RSA *a,uchar **pp)

{
  int iVar1;
  EVP_PKEY *pkey;
  X509_PUBKEY *local_28;
  
                    /* try { // try from 00b6694c to 00c66953 has its CatchHandler @ 00b66960 */
                    /* try { // try from 00b66954 to 00c66957 has its CatchHandler @ 00b66220 */
                    /* try { // try from 00b66958 to 00c6695f has its CatchHandler @ 00b66968 */
                    /* catch() { ... } // from try @ 00b6694c with catch @ 00b66960
                       try { // try from 00b66960 to 00c66aa7 has its CatchHandler @ 00b66220 */
                    /* catch() { ... } // from try @ 00b664f8 with catch @ 00b66964 */
  if (a == (RSA *)0x0) {
    iVar1 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00b664c4 with catch @ 00b66968
                       catch() { ... } // from try @ 00b66544 with catch @ 00b66968
                       catch() { ... } // from try @ 00b66958 with catch @ 00b66968 */
    pkey = EVP_PKEY_new();
                    /* catch() { ... } // from try @ 00b668d8 with catch @ 00b66970 */
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0xd,0xa5,0x41,"crypto/x509/x_pubkey.c",0xf8);
      iVar1 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 00b66694 with catch @ 00b66974 */
      EVP_PKEY_set1_RSA(pkey,a);
                    /* catch() { ... } // from try @ 00b6671c with catch @ 00b66984 */
      local_28 = (X509_PUBKEY *)0x0;
      iVar1 = X509_PUBKEY_set(&local_28,pkey);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 00b667fc with catch @ 00b669a4 */
                    /* catch() { ... } // from try @ 00b6670c with catch @ 00b669a8 */
        iVar1 = ASN1_item_i2d((ASN1_VALUE *)local_28,pp,(ASN1_ITEM *)X509_PUBKEY_it);
                    /* catch() { ... } // from try @ 00b66764 with catch @ 00b669ac */
        ASN1_item_free((ASN1_VALUE *)local_28,(ASN1_ITEM *)X509_PUBKEY_it);
      }
      EVP_PKEY_free(pkey);
    }
  }
  return iVar1;
}

