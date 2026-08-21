
X509_NAME * X509_NAME_dup(X509_NAME *xn)

{
  X509_NAME *pXVar1;
  
                    /* catch() { ... } // from try @ 00b65748 with catch @ 00b658fc */
                    /* catch() { ... } // from try @ 00b65658 with catch @ 00b65900 */
  pXVar1 = ASN1_item_dup((ASN1_ITEM *)X509_NAME_it,xn);
  return pXVar1;
}

