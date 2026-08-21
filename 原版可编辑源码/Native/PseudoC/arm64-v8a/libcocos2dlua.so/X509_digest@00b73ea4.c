
int X509_digest(X509 *data,EVP_MD *type,uchar *md,uint *len)

{
  int iVar1;
  
                    /* try { // try from 00b73eac to 00c73eaf has its CatchHandler @ 00b73f64 */
                    /* try { // try from 00b73eb0 to 00c73f57 has its CatchHandler @ 00b73d3c */
  iVar1 = ASN1_item_digest((ASN1_ITEM *)X509_it,type,data,md,len);
  return iVar1;
}

