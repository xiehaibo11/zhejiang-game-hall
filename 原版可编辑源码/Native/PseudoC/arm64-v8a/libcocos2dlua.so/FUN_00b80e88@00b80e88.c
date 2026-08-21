
ASN1_VALUE * FUN_00b80e88(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ASN1_VALUE *val;
  long lVar3;
  ASN1_VALUE *val_00;
  GENERAL_NAME *pGVar4;
  long lVar5;
  ASN1_VALUE *pAVar6;
  char *__s1;
  CONF_VALUE CStack_78;
  
  val = ASN1_item_new((ASN1_ITEM *)NAME_CONSTRAINTS_it);
  if (val == (ASN1_VALUE *)0x0) {
    val_00 = (ASN1_VALUE *)0x0;
LAB_00b80fc8:
                    /* try { // try from 00b80fd0 to 00c80fd7 has its CatchHandler @ 00b81048 */
                    /* try { // try from 00b80fd8 to 00c81067 has its CatchHandler @ 00b80f48 */
    ERR_put_error(0x22,0x93,0x41,"crypto/x509v3/v3_ncons.c",0x69);
LAB_00b80fe4:
    ASN1_item_free(val,(ASN1_ITEM *)NAME_CONSTRAINTS_it);
    ASN1_item_free(val_00,(ASN1_ITEM *)GENERAL_SUBTREE_it);
    val = (ASN1_VALUE *)0x0;
  }
  else {
                    /* try { // try from 00b80ec8 to 00c80ecb has its CatchHandler @ 00b80edc */
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b80ec8 with catch @ 00b80edc
                        */
      iVar1 = 0;
      do {
        lVar3 = OPENSSL_sk_value(param_3,iVar1);
        __s1 = *(char **)(lVar3 + 8);
        iVar2 = strncmp(__s1,"permitted",9);
        if ((iVar2 == 0) && (__s1[9] != '\0')) {
                    /* catch() { ... } // from try @ 00b80f78 with catch @ 00b80f48
                       catch() { ... } // from try @ 00b80fd8 with catch @ 00b80f48 */
          lVar5 = 10;
          pAVar6 = val;
        }
        else {
                    /* try { // try from 00b80f18 to 00c80f1b has its CatchHandler @ 00b80f34 */
          iVar2 = strncmp(__s1,"excluded",8);
          if ((iVar2 != 0) || (__s1[8] == '\0')) {
            ERR_put_error(0x22,0x93,0x8f,"crypto/x509v3/v3_ncons.c",0x56);
                    /* catch() { ... } // from try @ 00b80fd0 with catch @ 00b81048 */
            val_00 = (ASN1_VALUE *)0x0;
                    /* catch() { ... } // from try @ 00b80f70 with catch @ 00b8104c */
            goto LAB_00b80fe4;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b80f18 with catch @ 00b80f34
                        */
          lVar5 = 9;
          pAVar6 = val + 8;
        }
        CStack_78.name = __s1 + lVar5;
        CStack_78.value = *(char **)(lVar3 + 0x10);
        val_00 = ASN1_item_new((ASN1_ITEM *)GENERAL_SUBTREE_it);
        if (val_00 == (ASN1_VALUE *)0x0) goto LAB_00b80fc8;
                    /* try { // try from 00b80f70 to 00c80f77 has its CatchHandler @ 00b8104c */
                    /* try { // try from 00b80f78 to 00c80fcf has its CatchHandler @ 00b80f48 */
        pGVar4 = v2i_GENERAL_NAME_ex(*(GENERAL_NAME **)val_00,param_1,param_2,&CStack_78,1);
        if (pGVar4 == (GENERAL_NAME *)0x0) goto LAB_00b80fe4;
        lVar3 = *(long *)pAVar6;
        if (lVar3 == 0) {
          lVar3 = OPENSSL_sk_new_null();
          *(long *)pAVar6 = lVar3;
          if (lVar3 == 0) goto LAB_00b80fc8;
        }
        iVar2 = OPENSSL_sk_push(lVar3,val_00);
        if (iVar2 == 0) goto LAB_00b80fc8;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return val;
}

