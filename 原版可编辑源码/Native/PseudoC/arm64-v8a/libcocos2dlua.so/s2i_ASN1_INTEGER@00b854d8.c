
ASN1_INTEGER * s2i_ASN1_INTEGER(X509V3_EXT_METHOD *meth,char *value)

{
  char *str;
  char cVar1;
  bool bVar2;
  int iVar3;
  ASN1_INTEGER *pAVar4;
  int line;
  BIGNUM *local_28;
  
  local_28 = (BIGNUM *)0x0;
  if (value == (char *)0x0) {
    ERR_put_error(0x22,0x6c,0x6d,"crypto/x509v3/v3_utl.c",0x84);
  }
  else {
    local_28 = BN_new();
    if (local_28 == (BIGNUM *)0x0) {
      iVar3 = 0x41;
      line = 0x89;
    }
    else {
      cVar1 = *value;
      str = value + 1;
      if (cVar1 != '-') {
        str = value;
      }
      if ((*str == '0') && ((byte)(str[1] | 0x20U) == 0x78)) {
        str = str + 2;
        iVar3 = BN_hex2bn(&local_28,str);
      }
      else {
        iVar3 = BN_dec2bn(&local_28,str);
      }
      if ((iVar3 != 0) && (str[iVar3] == '\0')) {
        if (cVar1 == '-') {
          iVar3 = BN_is_zero(local_28);
          bVar2 = iVar3 == 0;
        }
        else {
          bVar2 = false;
        }
        pAVar4 = BN_to_ASN1_INTEGER(local_28,(ASN1_INTEGER *)0x0);
        BN_free(local_28);
        if (pAVar4 != (ASN1_INTEGER *)0x0) {
          if (!bVar2) {
            return pAVar4;
          }
          pAVar4->type = pAVar4->type | 0x100;
          return pAVar4;
        }
        ERR_put_error(0x22,0x6c,0x65,"crypto/x509v3/v3_utl.c",0xaa);
        return (ASN1_INTEGER *)0x0;
      }
      BN_free(local_28);
      iVar3 = 100;
      line = 0x9f;
    }
    ERR_put_error(0x22,0x6c,iVar3,"crypto/x509v3/v3_utl.c",line);
  }
  return (ASN1_INTEGER *)0x0;
}

