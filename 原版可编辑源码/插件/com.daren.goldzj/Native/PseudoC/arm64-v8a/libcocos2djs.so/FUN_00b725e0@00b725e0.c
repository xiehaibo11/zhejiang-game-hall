
PROXY_CERT_INFO_EXTENSION * FUN_00b725e0(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  ASN1_OBJECT *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  stack_st_CONF_VALUE *psVar6;
  undefined8 *puVar7;
  stack_st_CONF_VALUE *section;
  undefined8 uVar8;
  char *pcVar9;
  PROXY_POLICY *pPVar10;
  PROXY_CERT_INFO_EXTENSION *pPVar11;
  ASN1_OCTET_STRING *local_50;
  ASN1_STRING *local_48;
  ASN1_OBJECT *local_38;
  
  local_38 = (ASN1_OBJECT *)0x0;
  local_50 = (ASN1_OCTET_STRING *)0x0;
  local_48 = (ASN1_INTEGER *)0x0;
  psVar6 = X509V3_parse_list(param_3);
  iVar2 = OPENSSL_sk_num();
  if (iVar2 < 1) {
LAB_00b72724:
    iVar2 = 0x9a;
    iVar4 = 0x11f;
  }
  else {
    iVar2 = 0;
    do {
      puVar7 = (undefined8 *)OPENSSL_sk_value(psVar6,iVar2);
      pcVar9 = (char *)puVar7[1];
      if (pcVar9 == (char *)0x0) {
LAB_00b72744:
        iVar2 = 0x99;
        iVar4 = 0xfe;
LAB_00b72778:
        ERR_put_error(0x22,0x9b,iVar2,"crypto/x509v3/v3_pci.c",iVar4);
LAB_00b7277c:
        ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        goto LAB_00b727a4;
      }
      if (*pcVar9 != '@') {
        if (puVar7[2] == 0) goto LAB_00b72744;
        iVar4 = FUN_00b7284c(puVar7,&local_38,&local_48,&local_50);
        if (iVar4 != 0) goto LAB_00b726c0;
        goto LAB_00b7277c;
      }
      section = X509V3_get_section(param_2,pcVar9 + 1);
      if (section == (stack_st_CONF_VALUE *)0x0) {
        iVar2 = 0x87;
        iVar4 = 0x108;
        goto LAB_00b72778;
      }
      iVar4 = 0;
      while (iVar3 = OPENSSL_sk_num(section), iVar4 < iVar3) {
        uVar8 = OPENSSL_sk_value(section,iVar4);
        iVar3 = FUN_00b7284c(uVar8,&local_38,&local_48,&local_50);
        iVar4 = iVar4 + 1;
        if (iVar3 == 0) {
          X509V3_section_free(param_2,section);
          goto LAB_00b727a4;
        }
      }
      X509V3_section_free(param_2,section);
LAB_00b726c0:
      iVar2 = iVar2 + 1;
      iVar4 = OPENSSL_sk_num(psVar6);
      pAVar1 = local_38;
    } while (iVar2 < iVar4);
    if (local_38 == (ASN1_OBJECT *)0x0) goto LAB_00b72724;
    uVar5 = OBJ_obj2nid(local_38);
    if (((uVar5 | 2) == 0x29b) && (local_50 != (ASN1_OCTET_STRING *)0x0)) {
      iVar2 = 0x9f;
      iVar4 = 0x125;
    }
    else {
      pPVar11 = PROXY_CERT_INFO_EXTENSION_new();
      if (pPVar11 != (PROXY_CERT_INFO_EXTENSION *)0x0) {
        pPVar10 = pPVar11->proxyPolicy;
        pPVar10->policyLanguage = pAVar1;
        local_38 = (ASN1_OBJECT *)0x0;
        pPVar10->policy = local_50;
        local_50 = (ASN1_OCTET_STRING *)0x0;
        pPVar11->pcPathLengthConstraint = local_48;
        local_48 = (ASN1_STRING *)0x0;
        goto LAB_00b727d0;
      }
      iVar2 = 0x41;
      iVar4 = 299;
    }
  }
  ERR_put_error(0x22,0x9b,iVar2,"crypto/x509v3/v3_pci.c",iVar4);
LAB_00b727a4:
  ASN1_OBJECT_free(local_38);
  ASN1_INTEGER_free(local_48);
  local_48 = (ASN1_STRING *)0x0;
  ASN1_OCTET_STRING_free(local_50);
  local_50 = (ASN1_OCTET_STRING *)0x0;
  PROXY_CERT_INFO_EXTENSION_free((PROXY_CERT_INFO_EXTENSION *)0x0);
  pPVar11 = (PROXY_CERT_INFO_EXTENSION *)0x0;
LAB_00b727d0:
  OPENSSL_sk_pop_free(psVar6,X509V3_conf_free);
  return pPVar11;
}

