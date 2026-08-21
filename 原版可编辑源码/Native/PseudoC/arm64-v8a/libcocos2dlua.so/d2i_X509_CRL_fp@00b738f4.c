
X509_CRL * d2i_X509_CRL_fp(FILE *fp,X509_CRL **crl)

{
  X509_CRL *pXVar1;
  
                    /* try { // try from 00b738f8 to 00c73a9f has its CatchHandler @ 00b738f8
                       catch() { ... } // from try @ 00b738f8 with catch @ 00b738f8
                       catch() { ... } // from try @ 00b73af8 with catch @ 00b738f8 */
  pXVar1 = ASN1_item_d2i_fp((ASN1_ITEM *)X509_CRL_it,fp,crl);
  return pXVar1;
}

