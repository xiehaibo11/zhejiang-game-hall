
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_ATTRIBUTE * X509_ATTRIBUTE_new(void)

{
  X509_ATTRIBUTE *pXVar1;
  
                    /* try { // try from 00b64de4 to 00c64dff has its CatchHandler @ 00b64e4c */
  pXVar1 = (X509_ATTRIBUTE *)ASN1_item_new((ASN1_ITEM *)X509_ATTRIBUTE_it);
  return pXVar1;
}

