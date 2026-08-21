
int i2d_DSA_PUBKEY(DSA *a,uchar **pp)

{
  int iVar1;
  EVP_PKEY *pkey;
  X509_PUBKEY *local_28;
  
                    /* catch() { ... } // from try @ 00b66614 with catch @ 00b66a98 */
                    /* try { // try from 00b66aa8 to 00c66b4f has its CatchHandler @ 00b66aa8
                       catch() { ... } // from try @ 00b66aa8 with catch @ 00b66aa8
                       catch() { ... } // from try @ 00b66b54 with catch @ 00b66aa8 */
  if (a == (DSA *)0x0) {
    iVar1 = 0;
  }
  else {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0xd,0xa1,0x41,"crypto/x509/x_pubkey.c",0x120);
      iVar1 = 0;
    }
    else {
      EVP_PKEY_set1_DSA(pkey,a);
      local_28 = (X509_PUBKEY *)0x0;
      iVar1 = X509_PUBKEY_set(&local_28,pkey);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = ASN1_item_i2d((ASN1_VALUE *)local_28,pp,(ASN1_ITEM *)X509_PUBKEY_it);
        ASN1_item_free((ASN1_VALUE *)local_28,(ASN1_ITEM *)X509_PUBKEY_it);
      }
      EVP_PKEY_free(pkey);
    }
  }
                    /* try { // try from 00b66b50 to 00c66b53 has its CatchHandler @ 00b66b70 */
                    /* try { // try from 00b66b54 to 00c66b8b has its CatchHandler @ 00b66aa8 */
  return iVar1;
}

