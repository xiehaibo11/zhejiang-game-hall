
int X509_keyid_set1(X509 *x,uchar *id,int len)

{
  int iVar1;
  ASN1_STRING *pAVar2;
  AUTHORITY_KEYID *pAVar3;
  
  if (id == (uchar *)0x0) {
    if (((x != (X509 *)0x0) && (x[1].akid != (AUTHORITY_KEYID *)0x0)) &&
       (pAVar2 = x[1].akid[1].keyid, pAVar2 != (ASN1_STRING *)0x0)) {
      ASN1_OCTET_STRING_free(pAVar2);
      x[1].akid[1].keyid = (ASN1_OCTET_STRING *)0x0;
    }
    iVar1 = 1;
                    /* try { // try from 00b673b8 to 00c6747b has its CatchHandler @ 00b6727c */
  }
  else {
    if (x != (X509 *)0x0) {
                    /* try { // try from 00b67348 to 00c673b7 has its CatchHandler @ 00b6748c */
      pAVar3 = x[1].akid;
      if (pAVar3 == (AUTHORITY_KEYID *)0x0) {
        pAVar3 = (AUTHORITY_KEYID *)ASN1_item_new((ASN1_ITEM *)X509_CERT_AUX_it);
        x[1].akid = pAVar3;
        if (pAVar3 == (AUTHORITY_KEYID *)0x0) {
          return 0;
        }
      }
      pAVar2 = pAVar3[1].keyid;
      if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
        pAVar2 = ASN1_OCTET_STRING_new();
        pAVar3[1].keyid = pAVar2;
        if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
          return 0;
        }
      }
      iVar1 = ASN1_STRING_set(pAVar2,id,len);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

