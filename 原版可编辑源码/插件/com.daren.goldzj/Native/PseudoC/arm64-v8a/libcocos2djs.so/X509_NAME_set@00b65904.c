
int X509_NAME_set(X509_NAME **xn,X509_NAME *name)

{
  uint uVar1;
  
                    /* catch() { ... } // from try @ 00b656b0 with catch @ 00b65908
                       catch() { ... } // from try @ 00b657d4 with catch @ 00b65908 */
  uVar1 = 0;
  if ((xn != (X509_NAME **)0x0) && (name != (X509_NAME *)0x0)) {
    if (*xn != name) {
      name = ASN1_item_dup((ASN1_ITEM *)X509_NAME_it,name);
                    /* catch() { ... } // from try @ 00b65648 with catch @ 00b65944 */
      if (name == (X509_NAME *)0x0) {
        name = *xn;
      }
      else {
                    /* catch() { ... } // from try @ 00b6563c with catch @ 00b65948 */
        ASN1_item_free((ASN1_VALUE *)*xn,(ASN1_ITEM *)X509_NAME_it);
        *xn = name;
      }
    }
    uVar1 = (uint)(name != (X509_NAME *)0x0);
  }
  return uVar1;
}

