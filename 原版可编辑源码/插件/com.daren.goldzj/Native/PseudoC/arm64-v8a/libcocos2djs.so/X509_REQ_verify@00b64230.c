
int X509_REQ_verify(X509_REQ *a,EVP_PKEY *r)

{
  int iVar1;
  
                    /* try { // try from 00b64244 to 00c6430f has its CatchHandler @ 00b64244
                       catch(type#1 @ 00000000) { ... } // from try @ 00b64244 with catch @ 00b64244
                       catch(type#1 @ 00000000) { ... } // from try @ 00b64350 with catch @ 00b64244
                        */
  iVar1 = ASN1_item_verify((ASN1_ITEM *)X509_REQ_INFO_it,(X509_ALGOR *)&a[1].references,
                           (ASN1_BIT_STRING *)a[2].sig_alg,a,r);
  return iVar1;
}

