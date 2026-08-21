
int X509_REVOKED_set_serialNumber(X509_REVOKED *x,ASN1_INTEGER *serial)

{
  int iVar1;
  
  iVar1 = 0;
  if (x != (X509_REVOKED *)0x0) {
    if (x != (X509_REVOKED *)serial) {
      iVar1 = ASN1_STRING_copy((ASN1_STRING *)x,serial);
      return iVar1;
    }
    iVar1 = 1;
  }
  return iVar1;
}

