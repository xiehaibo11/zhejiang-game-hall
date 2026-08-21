
X509_ALGOR * X509_ALGOR_dup(X509_ALGOR *xn)

{
  X509_ALGOR *pXVar1;
  
                    /* try { // try from 00af0e58 to 00bf0e6f has its CatchHandler @ 00af0ed8 */
  pXVar1 = ASN1_item_dup((ASN1_ITEM *)X509_ALGOR_it,xn);
  return pXVar1;
}

