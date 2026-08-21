
ASN1_OCTET_STRING * a2i_IPADDRESS(char *ipasc)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  uchar auStack_30 [16];
  
  iVar1 = a2i_ipadd(auStack_30,ipasc);
  if (iVar1 != 0) {
    str = ASN1_OCTET_STRING_new();
    if (str == (ASN1_OCTET_STRING *)0x0) {
      return (ASN1_OCTET_STRING *)0x0;
    }
    iVar1 = ASN1_OCTET_STRING_set(str,auStack_30,iVar1);
    if (iVar1 != 0) {
      return str;
    }
    ASN1_OCTET_STRING_free(str);
  }
  return (ASN1_OCTET_STRING *)0x0;
}

