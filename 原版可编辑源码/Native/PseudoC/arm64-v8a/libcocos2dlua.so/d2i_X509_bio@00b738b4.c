
X509 * d2i_X509_bio(BIO *bp,X509 **x509)

{
  X509 *pXVar1;
  
                    /* catch() { ... } // from try @ 00b736bc with catch @ 00b738d0 */
  pXVar1 = ASN1_item_d2i_bio((ASN1_ITEM *)X509_it,bp,x509);
  return pXVar1;
}

