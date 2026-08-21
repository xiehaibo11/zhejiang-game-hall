
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_CINF * X509_CINF_new(void)

{
  X509_CINF *pXVar1;
  
                    /* try { // try from 00b66ea4 to 00c66eb3 has its CatchHandler @ 00b671f8 */
  pXVar1 = (X509_CINF *)ASN1_item_new((ASN1_ITEM *)X509_CINF_it);
  return pXVar1;
}

