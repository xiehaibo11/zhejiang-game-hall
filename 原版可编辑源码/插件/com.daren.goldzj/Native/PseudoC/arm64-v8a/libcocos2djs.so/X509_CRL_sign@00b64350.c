
int X509_CRL_sign(X509_CRL *x,EVP_PKEY *pkey,EVP_MD *md)

{
  int iVar1;
  
                    /* try { // try from 00b64350 to 00c64617 has its CatchHandler @ 00b64244 */
  x->sha1_hash[8] = '\x01';
  x->sha1_hash[9] = '\0';
  x->sha1_hash[10] = '\0';
  x->sha1_hash[0xb] = '\0';
  iVar1 = ASN1_item_sign((ASN1_ITEM *)X509_CRL_INFO_it,(X509_ALGOR *)&x->sig_alg,
                         (X509_ALGOR *)(x->sha1_hash + 0x10),(ASN1_BIT_STRING *)&x->meth,x,pkey,md);
  return iVar1;
}

