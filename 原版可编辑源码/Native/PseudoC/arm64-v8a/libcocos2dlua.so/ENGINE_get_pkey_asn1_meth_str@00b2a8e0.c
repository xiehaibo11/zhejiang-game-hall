
EVP_PKEY_ASN1_METHOD * ENGINE_get_pkey_asn1_meth_str(ENGINE *e,char *str,int len)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  code *pcVar5;
  char *__s;
  long lVar6;
  EVP_PKEY_ASN1_METHOD *local_58;
  long local_48;
  
  pcVar5 = *(code **)(e + 0x50);
  if (pcVar5 != (code *)0x0) {
    if (len == -1) {
      sVar4 = strlen(str);
      len = (int)sVar4;
    }
    iVar2 = (*pcVar5)(e,0,&local_48,0);
    if (0 < iVar2) {
      lVar6 = 0;
      do {
        (**(code **)(e + 0x50))(e,&local_58,0,*(undefined4 *)(local_48 + lVar6 * 4));
        pEVar1 = local_58;
        __s = *(char **)(local_58 + 0x10);
        sVar4 = strlen(__s);
        if ((len == (int)sVar4) && (iVar3 = strncasecmp(__s,str,(long)len), iVar3 == 0)) {
          return pEVar1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
  }
  return (EVP_PKEY_ASN1_METHOD *)0x0;
}

