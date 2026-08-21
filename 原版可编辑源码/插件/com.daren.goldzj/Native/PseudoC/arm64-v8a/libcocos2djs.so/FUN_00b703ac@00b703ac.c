
undefined8 FUN_00b703ac(long *param_1,X509V3_CTX *param_2,long param_3)

{
  int iVar1;
  X509_NAME *nm;
  stack_st_CONF_VALUE *dn_sk;
  long lVar2;
  ASN1_VALUE *pAVar3;
  long lVar4;
  stack_st_X509_NAME_ENTRY *psVar5;
  char *__s1;
  
  __s1 = *(char **)(param_3 + 8);
  iVar1 = strncmp(__s1,"fullname",9);
  if (iVar1 == 0) {
    lVar2 = FUN_00b707ac(param_2,*(undefined8 *)(param_3 + 0x10));
    psVar5 = (stack_st_X509_NAME_ENTRY *)0x0;
    if (lVar2 == 0) goto LAB_00b70548;
    lVar4 = *param_1;
  }
  else {
    iVar1 = strcmp(__s1,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    nm = X509_NAME_new();
    if (nm == (X509_NAME *)0x0) {
      return 0xffffffff;
    }
    dn_sk = X509V3_get_section(param_2,*(char **)(param_3 + 0x10));
    if (dn_sk == (stack_st_CONF_VALUE *)0x0) {
      ERR_put_error(0x22,0x9e,0x96,"crypto/x509v3/v3_crld.c",0x56);
      return 0xffffffff;
    }
    iVar1 = X509V3_NAME_from_section(nm,dn_sk,0x1001);
    X509V3_section_free(param_2,dn_sk);
    psVar5 = nm->entries;
    nm->entries = (stack_st_X509_NAME_ENTRY *)0x0;
    X509_NAME_free(nm);
    if ((iVar1 == 0) || (iVar1 = OPENSSL_sk_num(psVar5), iVar1 < 1)) {
      lVar2 = 0;
      goto LAB_00b70548;
    }
    iVar1 = OPENSSL_sk_num(psVar5);
    lVar2 = OPENSSL_sk_value(psVar5,iVar1 + -1);
    if (*(int *)(lVar2 + 0x10) != 0) {
      ERR_put_error(0x22,0x9e,0xa1,"crypto/x509v3/v3_crld.c",0x66);
      lVar2 = 0;
      goto LAB_00b70548;
    }
    lVar2 = 0;
    lVar4 = *param_1;
  }
  if (lVar4 == 0) {
    pAVar3 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_NAME_it);
    *param_1 = (long)pAVar3;
    if (pAVar3 != (ASN1_VALUE *)0x0) {
      if (lVar2 != 0) {
        *(undefined4 *)pAVar3 = 0;
        *(long *)(pAVar3 + 8) = lVar2;
        return 1;
      }
      *(undefined4 *)pAVar3 = 1;
      *(stack_st_X509_NAME_ENTRY **)(pAVar3 + 8) = psVar5;
      return 1;
    }
  }
  else {
    ERR_put_error(0x22,0x9e,0xa0,"crypto/x509v3/v3_crld.c",0x6e);
  }
LAB_00b70548:
  OPENSSL_sk_pop_free(lVar2,GENERAL_NAME_free);
  OPENSSL_sk_pop_free(psVar5,X509_NAME_ENTRY_free);
  return 0xffffffff;
}

