
X509 * X509_dup(X509 *x509)

{
  X509 *pXVar1;
  
                    /* try { // try from 00b66eec to 00c66ef3 has its CatchHandler @ 00b671f4 */
  pXVar1 = ASN1_item_dup((ASN1_ITEM *)X509_it,x509);
  return pXVar1;
}

