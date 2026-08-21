
ASN1_OCTET_STRING * a2i_IPADDRESS_NC(char *ipasc)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *ipasc_00;
  ASN1_OCTET_STRING *str;
  uchar auStack_50 [32];
  
  pcVar3 = strchr(ipasc,0x2f);
  if ((pcVar3 != (char *)0x0) &&
     (ipasc_00 = CRYPTO_strdup(ipasc,"crypto/x509v3/v3_utl.c",0x3b6), ipasc_00 != (char *)0x0)) {
    ipasc_00[(long)pcVar3 - (long)ipasc] = '\0';
    iVar1 = a2i_ipadd(auStack_50,ipasc_00);
    if (iVar1 == 0) {
      str = (ASN1_STRING *)0x0;
    }
    else {
      iVar2 = a2i_ipadd(auStack_50 + iVar1,ipasc_00 + ((long)pcVar3 - (long)ipasc) + 1);
      CRYPTO_free(ipasc_00);
      ipasc_00 = (char *)0x0;
      if (iVar2 == 0) {
        str = (ASN1_STRING *)0x0;
      }
      else {
        str = (ASN1_STRING *)0x0;
        if (iVar1 == iVar2) {
          str = ASN1_OCTET_STRING_new();
          if ((str != (ASN1_OCTET_STRING *)0x0) &&
             (iVar1 = ASN1_OCTET_STRING_set(str,auStack_50,iVar1 << 1), iVar1 != 0)) {
            return str;
          }
          ipasc_00 = (char *)0x0;
        }
      }
    }
    CRYPTO_free(ipasc_00);
    ASN1_OCTET_STRING_free(str);
  }
  return (ASN1_OCTET_STRING *)0x0;
}

