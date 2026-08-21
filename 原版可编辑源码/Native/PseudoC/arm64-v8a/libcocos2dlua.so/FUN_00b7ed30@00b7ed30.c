
long FUN_00b7ed30(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  CONF_VALUE *cnf;
  GENERAL_NAME *a;
  GENERAL_NAMES *a_00;
  ASN1_VALUE *pAVar5;
  ASN1_VALUE *pAVar6;
  stack_st_CONF_VALUE *section;
  long lVar7;
  char *__s1;
  
  lVar4 = OPENSSL_sk_new_null();
  if (lVar4 == 0) {
LAB_00b7ef90:
    a_00 = (GENERAL_NAMES *)0x0;
LAB_00b7ef94:
    a = (GENERAL_NAME *)0x0;
LAB_00b7ef98:
    ERR_put_error(0x22,0x86,0x41,"crypto/x509v3/v3_crld.c",0x120);
LAB_00b7efb4:
    GENERAL_NAME_free(a);
    GENERAL_NAMES_free(a_00);
    OPENSSL_sk_pop_free(lVar4,DIST_POINT_free);
    lVar4 = 0;
  }
  else {
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        cnf = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar1);
        if (cnf->value == (char *)0x0) {
          section = X509V3_get_section(param_2,cnf->name);
          if (section != (stack_st_CONF_VALUE *)0x0) {
            pAVar5 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_it);
            if (pAVar5 != (ASN1_VALUE *)0x0) {
              iVar2 = OPENSSL_sk_num(section);
              if (0 < iVar2) {
                iVar2 = 0;
                do {
                  lVar7 = OPENSSL_sk_value(section,iVar2);
                  iVar3 = FUN_00b7f82c(pAVar5,param_2,lVar7);
                  if (iVar3 < 1) {
                    if (iVar3 < 0) goto LAB_00b7ef3c;
                    __s1 = *(char **)(lVar7 + 8);
                    iVar3 = strcmp(__s1,"reasons");
                    if (iVar3 == 0) {
                      iVar3 = FUN_00b7fa10(pAVar5 + 8,*(undefined8 *)(lVar7 + 0x10));
                      if (iVar3 == 0) goto LAB_00b7ef3c;
                    }
                    else {
                      iVar3 = strcmp(__s1,"CRLissuer");
                      if (iVar3 == 0) {
                        lVar7 = FUN_00b7fc2c(param_2,*(undefined8 *)(lVar7 + 0x10));
                        *(long *)(pAVar5 + 0x10) = lVar7;
                        if (lVar7 == 0) goto LAB_00b7ef3c;
                      }
                    }
                  }
                  iVar2 = iVar2 + 1;
                  iVar3 = OPENSSL_sk_num(section);
                } while (iVar2 < iVar3);
              }
              X509V3_section_free(param_2,section);
              iVar2 = OPENSSL_sk_push(lVar4,pAVar5);
              if (iVar2 != 0) goto LAB_00b7ef24;
              ASN1_item_free(pAVar5,(ASN1_ITEM *)DIST_POINT_it);
              goto LAB_00b7ef90;
            }
LAB_00b7ef3c:
            ASN1_item_free(pAVar5,(ASN1_ITEM *)DIST_POINT_it);
            X509V3_section_free(param_2,section);
          }
          a_00 = (GENERAL_NAMES *)0x0;
          a = (GENERAL_NAME *)0x0;
          goto LAB_00b7efb4;
        }
        a = v2i_GENERAL_NAME(param_1,param_2,cnf);
        if (a == (GENERAL_NAME *)0x0) {
          a_00 = (GENERAL_NAMES *)0x0;
          goto LAB_00b7efb4;
        }
        a_00 = GENERAL_NAMES_new();
        if ((a_00 == (GENERAL_NAMES *)0x0) || (iVar2 = OPENSSL_sk_push(a_00,a), iVar2 == 0))
        goto LAB_00b7ef98;
        pAVar5 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_it);
        a = (GENERAL_NAME *)0x0;
        if (pAVar5 == (ASN1_VALUE *)0x0) goto LAB_00b7ef98;
        iVar2 = OPENSSL_sk_push(lVar4,pAVar5);
        if (iVar2 == 0) {
          ASN1_item_free(pAVar5,(ASN1_ITEM *)DIST_POINT_it);
          goto LAB_00b7ef94;
        }
        pAVar6 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_NAME_it);
        *(ASN1_VALUE **)pAVar5 = pAVar6;
        if (pAVar6 == (ASN1_VALUE *)0x0) goto LAB_00b7ef94;
        *(GENERAL_NAMES **)(pAVar6 + 8) = a_00;
        **(undefined4 **)pAVar5 = 0;
LAB_00b7ef24:
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar4;
}

