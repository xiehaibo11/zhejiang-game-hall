
int i2d_X509_bio(BIO *bp,X509 *x509)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00b73260 with catch @ 00b738d4 */
                    /* catch() { ... } // from try @ 00b73750 with catch @ 00b738d8 */
                    /* catch() { ... } // from try @ 00b7332c with catch @ 00b738dc */
  iVar1 = ASN1_item_i2d_bio((ASN1_ITEM *)X509_it,bp,x509);
  return iVar1;
}

