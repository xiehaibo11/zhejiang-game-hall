
EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_find_str(ENGINE **pe,char *str,int len)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  EVP_PKEY_ASN1_METHOD EVar2;
  int iVar3;
  size_t sVar4;
  EVP_PKEY_ASN1_METHOD *pEVar5;
  char *__s;
  long lVar6;
  ENGINE *local_58;
  
  if (len == -1) {
    sVar4 = strlen(str);
    len = (int)sVar4;
  }
  if (pe != (ENGINE **)0x0) {
    pEVar5 = ENGINE_pkey_asn1_find_str(&local_58,str,len);
    if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
      iVar3 = ENGINE_init(local_58);
      pEVar1 = (EVP_PKEY_ASN1_METHOD *)0x0;
      if (iVar3 != 0) {
        pEVar1 = pEVar5;
      }
      ENGINE_free(local_58);
      *pe = local_58;
      return pEVar1;
    }
    *pe = (ENGINE *)0x0;
  }
  lVar6 = 0;
  if (DAT_01782dc8 != 0) goto LAB_00afbcf8;
  do {
    if (0xc < lVar6) {
      return (EVP_PKEY_ASN1_METHOD *)0x0;
    }
    while( true ) {
      if (lVar6 < 0xd) {
        pEVar5 = (EVP_PKEY_ASN1_METHOD *)(&PTR_rsa_asn1_meths_0176e2f0)[lVar6];
        EVar2 = pEVar5[8];
      }
      else {
        pEVar5 = (EVP_PKEY_ASN1_METHOD *)OPENSSL_sk_value(DAT_01782dc8,(int)lVar6 + -0xd);
        EVar2 = pEVar5[8];
      }
      if (((byte)EVar2 & 1) == 0) {
        __s = *(char **)(pEVar5 + 0x10);
        sVar4 = strlen(__s);
        if ((len == (int)sVar4) && (iVar3 = strncasecmp(__s,str,(long)len), iVar3 == 0)) {
          return pEVar5;
        }
      }
      lVar6 = lVar6 + 1;
      if (DAT_01782dc8 == 0) break;
LAB_00afbcf8:
      iVar3 = OPENSSL_sk_num();
      if (iVar3 + 0xd <= lVar6) {
        return (EVP_PKEY_ASN1_METHOD *)0x0;
      }
    }
  } while( true );
}

