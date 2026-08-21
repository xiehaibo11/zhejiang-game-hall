
X509_EXTENSION * OCSP_archive_cutoff_new(char *tim)

{
  int iVar1;
  ASN1_GENERALIZEDTIME *s;
  X509_EXTENSION *pXVar2;
  
  s = ASN1_GENERALIZEDTIME_new();
  if ((s == (ASN1_GENERALIZEDTIME *)0x0) ||
     (iVar1 = ASN1_GENERALIZEDTIME_set_string(s,tim), iVar1 == 0)) {
    pXVar2 = (X509_EXTENSION *)0x0;
  }
  else {
    pXVar2 = X509V3_EXT_i2d(0x172,0,s);
  }
  ASN1_GENERALIZEDTIME_free(s);
  return pXVar2;
}

