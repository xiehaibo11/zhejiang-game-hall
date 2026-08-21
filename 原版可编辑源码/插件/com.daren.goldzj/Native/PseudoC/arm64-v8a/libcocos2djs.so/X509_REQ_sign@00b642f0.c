
int X509_REQ_sign(X509_REQ *x,EVP_PKEY *pkey,EVP_MD *md)

{
  int iVar1;
  
                    /* try { // try from 00b64310 to 00c6434f has its CatchHandler @ 00b6458c */
  iVar1 = ASN1_item_sign((ASN1_ITEM *)X509_REQ_INFO_it,(X509_ALGOR *)&x[1].references,
                         (X509_ALGOR *)0x0,(ASN1_BIT_STRING *)x[2].sig_alg,x,pkey,md);
  return iVar1;
}

