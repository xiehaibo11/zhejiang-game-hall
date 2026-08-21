
int CMS_SignerInfo_get0_signer_id
              (CMS_SignerInfo *si,ASN1_OCTET_STRING **keyid,X509_NAME **issuer,ASN1_INTEGER **sno)

{
  int *piVar1;
  
  piVar1 = *(int **)(si + 8);
  if (*piVar1 == 1) {
    if (keyid != (ASN1_OCTET_STRING **)0x0) {
      *keyid = *(ASN1_OCTET_STRING **)(piVar1 + 2);
    }
  }
  else {
    if (*piVar1 != 0) {
      return 0;
    }
    if (issuer != (X509_NAME **)0x0) {
      *issuer = (X509_NAME *)**(undefined8 **)(piVar1 + 2);
    }
    if (sno != (ASN1_INTEGER **)0x0) {
      *sno = *(ASN1_INTEGER **)(*(long *)(piVar1 + 2) + 8);
      return 1;
    }
  }
  return 1;
}

