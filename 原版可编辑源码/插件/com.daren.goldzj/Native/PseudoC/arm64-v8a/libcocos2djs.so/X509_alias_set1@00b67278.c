
int X509_alias_set1(X509 *x,uchar *name,int len)

{
  int iVar1;
  ASN1_STRING *pAVar2;
  AUTHORITY_KEYID *pAVar3;
  
                    /* try { // try from 00b6727c to 00c67347 has its CatchHandler @ 00b6727c
                       catch() { ... } // from try @ 00b6727c with catch @ 00b6727c
                       catch() { ... } // from try @ 00b673b8 with catch @ 00b6727c
                       catch() { ... } // from try @ 00b67484 with catch @ 00b6727c */
  if (name == (uchar *)0x0) {
    if (((x != (X509 *)0x0) && (x[1].akid != (AUTHORITY_KEYID *)0x0)) &&
       (pAVar2 = (x[1].akid)->serial, pAVar2 != (ASN1_STRING *)0x0)) {
      ASN1_UTF8STRING_free(pAVar2);
      (x[1].akid)->serial = (ASN1_INTEGER *)0x0;
    }
    iVar1 = 1;
  }
  else {
    if (x != (X509 *)0x0) {
      pAVar3 = x[1].akid;
      if (pAVar3 == (AUTHORITY_KEYID *)0x0) {
        pAVar3 = (AUTHORITY_KEYID *)ASN1_item_new((ASN1_ITEM *)X509_CERT_AUX_it);
        x[1].akid = pAVar3;
        if (pAVar3 == (AUTHORITY_KEYID *)0x0) {
          return 0;
        }
      }
      pAVar2 = pAVar3->serial;
      if (pAVar2 == (ASN1_INTEGER *)0x0) {
        pAVar2 = ASN1_UTF8STRING_new();
        pAVar3->serial = pAVar2;
        if (pAVar2 == (ASN1_UTF8STRING *)0x0) {
          return 0;
        }
      }
      iVar1 = ASN1_STRING_set(pAVar2,name,len);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

