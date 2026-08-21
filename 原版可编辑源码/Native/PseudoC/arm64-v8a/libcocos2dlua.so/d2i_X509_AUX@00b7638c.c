
X509 * d2i_X509_AUX(X509 **a,uchar **pp,long length)

{
  bool bVar1;
  X509 *val;
  X509_CERT_AUX *pXVar2;
  uchar *local_38;
  
  local_38 = *pp;
  if ((a == (X509 **)0x0) || (*a == (X509 *)0x0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  val = (X509 *)ASN1_item_d2i((ASN1_VALUE **)a,&local_38,length,(ASN1_ITEM *)X509_it);
  if (val != (X509 *)0x0) {
    if (((long)(*pp + (length - (long)local_38)) < 1) ||
       (pXVar2 = d2i_X509_CERT_AUX((X509_CERT_AUX **)&val[1].akid,&local_38,
                                   (long)(*pp + (length - (long)local_38))),
       pXVar2 != (X509_CERT_AUX *)0x0)) {
      *pp = local_38;
    }
    else if (bVar1) {
      ASN1_item_free((ASN1_VALUE *)val,(ASN1_ITEM *)X509_it);
      val = (X509 *)0x0;
                    /* try { // try from 00b7644c to 00c76453 has its CatchHandler @ 00b764a8 */
      if (a != (X509 **)0x0) {
        *a = (X509 *)0x0;
                    /* try { // try from 00b76454 to 00c764c3 has its CatchHandler @ 00b76424 */
      }
    }
    else {
      val = (X509 *)0x0;
    }
  }
                    /* catch() { ... } // from try @ 00b76454 with catch @ 00b76424 */
  return val;
}

