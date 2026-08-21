
int X509_REQ_verify(X509_REQ *a,EVP_PKEY *r)

{
  int iVar1;
  
                    /* try { // try from 00b736bc to 00c736c7 has its CatchHandler @ 00b738d0 */
                    /* try { // try from 00b736c8 to 00c7374f has its CatchHandler @ 00b73094 */
  iVar1 = ASN1_item_verify((ASN1_ITEM *)X509_REQ_INFO_it,(X509_ALGOR *)&a[1].references,
                           (ASN1_BIT_STRING *)a[2].sig_alg,a,r);
  return iVar1;
}

