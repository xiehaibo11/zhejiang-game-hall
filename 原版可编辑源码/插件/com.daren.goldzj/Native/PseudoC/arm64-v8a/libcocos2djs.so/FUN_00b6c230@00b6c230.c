
undefined8 FUN_00b6c230(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  X509_NAME *name;
  X509_NAME_ENTRY *pXVar3;
  ASN1_STRING *pAVar4;
  GENERAL_NAME *a;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(X509 **)(param_1 + 4) == (X509 *)0x0) {
      if (*(long *)(param_1 + 6) == 0) goto LAB_00b6c388;
      name = (X509_NAME *)X509_REQ_get_subject_name();
    }
    else {
      name = X509_get_subject_name(*(X509 **)(param_1 + 4));
    }
    iVar1 = -1;
    if (param_3 == 0) {
      do {
        iVar1 = X509_NAME_get_index_by_NID(name,0x30,iVar1);
        if (iVar1 < 0) {
          return 1;
        }
        pXVar3 = X509_NAME_get_entry(name,iVar1);
        pAVar4 = X509_NAME_ENTRY_get_data(pXVar3);
        pAVar4 = ASN1_STRING_dup(pAVar4);
        if ((pAVar4 == (ASN1_STRING *)0x0) || (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0))
        goto LAB_00b6c3ac;
        (a->d).otherName = (OTHERNAME *)pAVar4;
        a->type = 1;
                    /* try { // try from 00b6c35c to 00c6c363 has its CatchHandler @ 00b6c6d8 */
        iVar2 = OPENSSL_sk_push(param_2,a);
      } while (iVar2 != 0);
    }
    else {
      do {
        iVar1 = X509_NAME_get_index_by_NID(name,0x30,iVar1);
        if (iVar1 < 0) {
          return 1;
        }
        pXVar3 = X509_NAME_get_entry(name,iVar1);
        pAVar4 = X509_NAME_ENTRY_get_data(pXVar3);
        pAVar4 = ASN1_STRING_dup(pAVar4);
        X509_NAME_delete_entry(name,iVar1);
                    /* try { // try from 00b6c2d4 to 00c6c2db has its CatchHandler @ 00b6c6d4 */
        X509_NAME_ENTRY_free(pXVar3);
                    /* try { // try from 00b6c2dc to 00c6c35b has its CatchHandler @ 00b6c18c */
        if ((pAVar4 == (ASN1_STRING *)0x0) || (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0))
        goto LAB_00b6c3ac;
        iVar1 = iVar1 + -1;
        (a->d).otherName = (OTHERNAME *)pAVar4;
        a->type = 1;
        iVar2 = OPENSSL_sk_push(param_2,a);
      } while (iVar2 != 0);
    }
                    /* try { // try from 00b6c364 to 00c6c4af has its CatchHandler @ 00b6c18c */
    ERR_put_error(0x22,0x7a,0x41,"crypto/x509v3/v3_alt.c",0x152);
    pAVar4 = (ASN1_STRING *)0x0;
    goto LAB_00b6c3cc;
  }
LAB_00b6c388:
  ERR_put_error(0x22,0x7a,0x7d,"crypto/x509v3/v3_alt.c",0x136);
  pAVar4 = (ASN1_STRING *)0x0;
  goto LAB_00b6c3c8;
LAB_00b6c3ac:
  ERR_put_error(0x22,0x7a,0x41,"crypto/x509v3/v3_alt.c",0x14b);
LAB_00b6c3c8:
  a = (GENERAL_NAME *)0x0;
LAB_00b6c3cc:
  GENERAL_NAME_free(a);
  ASN1_IA5STRING_free(pAVar4);
  return 0;
}

