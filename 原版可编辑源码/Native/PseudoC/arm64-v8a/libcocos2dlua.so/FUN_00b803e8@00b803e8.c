
long FUN_00b803e8(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ASN1_VALUE *pAVar5;
  char *pcVar6;
  GENERAL_NAME *pGVar7;
  ASN1_OBJECT *pAVar8;
  char *__s;
  CONF_VALUE CStack_78;
  
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
                    /* try { // try from 00b80528 to 00c8067f has its CatchHandler @ 00b80528
                       catch() { ... } // from try @ 00b80528 with catch @ 00b80528
                       catch() { ... } // from try @ 00b80724 with catch @ 00b80528
                       catch() { ... } // from try @ 00b8087c with catch @ 00b80528
                       catch() { ... } // from try @ 00b808cc with catch @ 00b80528 */
    ERR_put_error(0x22,0x8b,0x41,"crypto/x509v3/v3_info.c",0x6d);
  }
  else {
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = OPENSSL_sk_value(param_3,iVar1);
        pAVar5 = ASN1_item_new((ASN1_ITEM *)ACCESS_DESCRIPTION_it);
        if ((pAVar5 == (ASN1_VALUE *)0x0) || (iVar2 = OPENSSL_sk_push(lVar3,pAVar5), iVar2 == 0)) {
          ERR_put_error(0x22,0x8b,0x41,"crypto/x509v3/v3_info.c",0x75);
LAB_00b805d4:
          OPENSSL_sk_pop_free(lVar3,ACCESS_DESCRIPTION_free);
          return 0;
        }
        __s = *(char **)(lVar4 + 8);
        pcVar6 = strchr(__s,0x3b);
        if (pcVar6 == (char *)0x0) {
          ERR_put_error(0x22,0x8b,0x8f,"crypto/x509v3/v3_info.c",0x7b);
          goto LAB_00b805d4;
        }
        CStack_78.name = pcVar6 + 1;
        CStack_78.value = *(char **)(lVar4 + 0x10);
        pGVar7 = v2i_GENERAL_NAME_ex(*(GENERAL_NAME **)(pAVar5 + 8),param_1,param_2,&CStack_78,0);
        if (pGVar7 == (GENERAL_NAME *)0x0) goto LAB_00b805d4;
        pcVar6 = (char *)CRYPTO_strndup(*(undefined8 *)(lVar4 + 8),(long)((int)pcVar6 - (int)__s),
                                        "crypto/x509v3/v3_info.c",0x83);
        if (pcVar6 == (char *)0x0) {
          ERR_put_error(0x22,0x8b,0x41,"crypto/x509v3/v3_info.c",0x85);
          goto LAB_00b805d4;
        }
        pAVar8 = OBJ_txt2obj(pcVar6,0);
        *(ASN1_OBJECT **)pAVar5 = pAVar8;
        if (pAVar8 == (ASN1_OBJECT *)0x0) {
          ERR_put_error(0x22,0x8b,0x77,"crypto/x509v3/v3_info.c",0x8b);
          ERR_add_error_data(2,"value=",pcVar6);
          CRYPTO_free(pcVar6);
          goto LAB_00b805d4;
        }
        CRYPTO_free(pcVar6);
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

