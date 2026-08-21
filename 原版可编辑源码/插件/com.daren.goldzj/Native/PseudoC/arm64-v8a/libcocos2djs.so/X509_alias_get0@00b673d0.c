
uchar * X509_alias_get0(X509 *x,int *len)

{
  ASN1_INTEGER *pAVar1;
  
  if (x[1].akid == (AUTHORITY_KEYID *)0x0) {
    return (uchar *)0x0;
  }
  pAVar1 = (x[1].akid)->serial;
  if (pAVar1 != (ASN1_INTEGER *)0x0) {
    if (len != (int *)0x0) {
      *len = pAVar1->length;
    }
    return pAVar1->data;
  }
  return (uchar *)0x0;
}

