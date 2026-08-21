
int X509_REQ_digest(X509_REQ *data,EVP_MD *type,uchar *md,uint *len)

{
  int iVar1;
  
                    /* try { // try from 00b64a98 to 00c64a9f has its CatchHandler @ 00b64b98 */
  iVar1 = ASN1_item_digest((ASN1_ITEM *)X509_REQ_it,type,data,md,len);
  return iVar1;
}

