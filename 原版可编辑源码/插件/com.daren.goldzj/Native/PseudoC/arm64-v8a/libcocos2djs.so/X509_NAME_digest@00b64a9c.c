
int X509_NAME_digest(X509_NAME *data,EVP_MD *type,uchar *md,uint *len)

{
  int iVar1;
  
                    /* try { // try from 00b64aa0 to 00c64bc3 has its CatchHandler @ 00b648bc */
  iVar1 = ASN1_item_digest((ASN1_ITEM *)X509_NAME_it,type,data,md,len);
  return iVar1;
}

