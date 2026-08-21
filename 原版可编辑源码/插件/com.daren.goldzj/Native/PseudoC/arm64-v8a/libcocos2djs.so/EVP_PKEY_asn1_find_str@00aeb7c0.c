
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
  
                    /* try { // try from 00aeb7e4 to 00beb7eb has its CatchHandler @ 00aeb830 */
                    /* catch() { ... } // from try @ 00aeb644 with catch @ 00aeb7ec
                       try { // try from 00aeb7ec to 00beb8a3 has its CatchHandler @ 00aeb308 */
  if (len == -1) {
    sVar4 = strlen(str);
    len = (int)sVar4;
  }
  if (pe != (ENGINE **)0x0) {
                    /* catch() { ... } // from try @ 00aeb6cc with catch @ 00aeb80c */
    pEVar5 = ENGINE_pkey_asn1_find_str(&local_58,str,len);
    if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) {
      iVar3 = ENGINE_init(local_58);
                    /* catch() { ... } // from try @ 00aeb5f4 with catch @ 00aeb82c */
                    /* catch() { ... } // from try @ 00aeb4ac with catch @ 00aeb830
                       catch() { ... } // from try @ 00aeb7e4 with catch @ 00aeb830 */
      pEVar1 = (EVP_PKEY_ASN1_METHOD *)0x0;
      if (iVar3 != 0) {
        pEVar1 = pEVar5;
      }
      ENGINE_free(local_58);
                    /* catch() { ... } // from try @ 00aeb56c with catch @ 00aeb840 */
      *pe = local_58;
      return pEVar1;
    }
    *pe = (ENGINE *)0x0;
  }
                    /* catch() { ... } // from try @ 00aeb584 with catch @ 00aeb850 */
  lVar6 = 0;
  if (DAT_01d39048 != 0) goto LAB_00aeb878;
  do {
    if (0xc < lVar6) {
      return (EVP_PKEY_ASN1_METHOD *)0x0;
    }
    while( true ) {
      if (lVar6 < 0xd) {
        pEVar5 = (EVP_PKEY_ASN1_METHOD *)(&PTR_rsa_asn1_meths_01d200a0)[lVar6];
        EVar2 = pEVar5[8];
      }
      else {
                    /* try { // try from 00aeb8a4 to 00beb96b has its CatchHandler @ 00aeb8a4
                       catch() { ... } // from try @ 00aeb8a4 with catch @ 00aeb8a4
                       catch() { ... } // from try @ 00aeb974 with catch @ 00aeb8a4
                       catch() { ... } // from try @ 00aeb9d8 with catch @ 00aeb8a4 */
        pEVar5 = (EVP_PKEY_ASN1_METHOD *)OPENSSL_sk_value(DAT_01d39048,(int)lVar6 + -0xd);
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
      if (DAT_01d39048 == 0) break;
LAB_00aeb878:
      iVar3 = OPENSSL_sk_num();
      if (iVar3 + 0xd <= lVar6) {
        return (EVP_PKEY_ASN1_METHOD *)0x0;
      }
    }
  } while( true );
}

