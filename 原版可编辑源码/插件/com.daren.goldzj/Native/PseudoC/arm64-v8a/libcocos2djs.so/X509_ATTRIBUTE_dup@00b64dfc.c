
X509_ATTRIBUTE * X509_ATTRIBUTE_dup(X509_ATTRIBUTE *xa)

{
  X509_ATTRIBUTE *pXVar1;
  
                    /* try { // try from 00b64e00 to 00c64e8b has its CatchHandler @ 00b64cfc */
  pXVar1 = ASN1_item_dup((ASN1_ITEM *)X509_ATTRIBUTE_it,xa);
  return pXVar1;
}

