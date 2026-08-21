
ASN1_OCTET_STRING * X509_EXTENSION_get_data(X509_EXTENSION *ne)

{
  ASN1_OCTET_STRING *pAVar1;
  
                    /* catch() { ... } // from try @ 00b5e2d0 with catch @ 00b5e3d8
                       catch() { ... } // from try @ 00b5e3b4 with catch @ 00b5e3d8 */
  pAVar1 = (ASN1_OCTET_STRING *)0x0;
  if (ne != (X509_EXTENSION *)0x0) {
    pAVar1 = (ASN1_OCTET_STRING *)&ne->value;
  }
  return pAVar1;
}

