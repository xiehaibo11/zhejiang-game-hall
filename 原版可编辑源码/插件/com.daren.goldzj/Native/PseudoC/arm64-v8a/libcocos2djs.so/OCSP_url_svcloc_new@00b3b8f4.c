
X509_EXTENSION * OCSP_url_svcloc_new(X509_NAME *issuer,char **urls)

{
  int iVar1;
  OCSP_SERVICELOC *a;
  X509_NAME *pXVar2;
  stack_st_ACCESS_DESCRIPTION *psVar3;
  ACCESS_DESCRIPTION *a_00;
  ASN1_OBJECT *pAVar4;
  GENERAL_NAME *pGVar5;
  ASN1_IA5STRING *str;
  X509_EXTENSION *pXVar6;
  char *pcVar7;
  
  a = OCSP_SERVICELOC_new();
  if (a != (OCSP_SERVICELOC *)0x0) {
    pXVar2 = X509_NAME_dup(issuer);
    a->issuer = pXVar2;
    if (pXVar2 != (X509_NAME *)0x0) {
      if (urls != (char **)0x0) {
        if (*urls != (char *)0x0) {
          psVar3 = (stack_st_ACCESS_DESCRIPTION *)OPENSSL_sk_new_null();
          a->locator = psVar3;
          if (psVar3 == (stack_st_ACCESS_DESCRIPTION *)0x0) goto LAB_00b3b9d8;
        }
        pcVar7 = *urls;
        while (pcVar7 != (char *)0x0) {
          a_00 = ACCESS_DESCRIPTION_new();
          if (a_00 == (ACCESS_DESCRIPTION *)0x0) {
LAB_00b3ba14:
            pXVar6 = (X509_EXTENSION *)0x0;
            str = (ASN1_STRING *)0x0;
            goto LAB_00b3b9e4;
          }
          pAVar4 = OBJ_nid2obj(0xb2);
          a_00->method = pAVar4;
          if (pAVar4 == (ASN1_OBJECT *)0x0) goto LAB_00b3ba14;
          pGVar5 = GENERAL_NAME_new();
          a_00->location = pGVar5;
          if (pGVar5 == (GENERAL_NAME *)0x0) goto LAB_00b3ba14;
          str = ASN1_IA5STRING_new();
          if ((str == (ASN1_IA5STRING *)0x0) || (iVar1 = ASN1_STRING_set(str,*urls,-1), iVar1 == 0))
          {
            pXVar6 = (X509_EXTENSION *)0x0;
            goto LAB_00b3b9e4;
          }
          pGVar5 = a_00->location;
          pGVar5->type = 6;
          (pGVar5->d).rfc822Name = str;
          iVar1 = OPENSSL_sk_push(a->locator,a_00);
          if (iVar1 == 0) goto LAB_00b3ba14;
          pcVar7 = urls[1];
          urls = urls + 1;
        }
      }
      pXVar6 = X509V3_EXT_i2d(0x173,0,a);
      goto LAB_00b3b9dc;
    }
  }
LAB_00b3b9d8:
  pXVar6 = (X509_EXTENSION *)0x0;
LAB_00b3b9dc:
  str = (ASN1_STRING *)0x0;
  a_00 = (ACCESS_DESCRIPTION *)0x0;
LAB_00b3b9e4:
  ASN1_IA5STRING_free(str);
  ACCESS_DESCRIPTION_free(a_00);
  OCSP_SERVICELOC_free(a);
  return pXVar6;
}

