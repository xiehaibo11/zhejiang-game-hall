
ASN1_BIT_STRING *
v2i_ASN1_BIT_STRING(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,stack_st_CONF_VALUE *nval)

{
  int iVar1;
  int iVar2;
  ASN1_BIT_STRING *a;
  undefined8 *puVar3;
  char *__s2;
  char *__s1;
  undefined8 *puVar4;
  
  a = ASN1_BIT_STRING_new();
  if (a == (ASN1_BIT_STRING *)0x0) {
    ERR_put_error(0x22,0x65,0x41,"crypto/x509v3/v3_bitst.c",0x43);
  }
  else {
    iVar1 = OPENSSL_sk_num(nval);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)OPENSSL_sk_value(nval,iVar1);
        __s1 = *(char **)((long)method->usr_data + 8);
        if (__s1 == (char *)0x0) {
LAB_00bd7ff0:
          ERR_put_error(0x22,0x65,0x6f,"crypto/x509v3/v3_bitst.c",0x56);
          ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
LAB_00bd8034:
          ASN1_BIT_STRING_free(a);
          return (ASN1_BIT_STRING *)0x0;
        }
        __s2 = (char *)puVar3[1];
        puVar4 = (undefined8 *)((long)method->usr_data + 0x10);
        while ((iVar2 = strcmp((char *)*puVar4,__s2), iVar2 != 0 &&
               (iVar2 = strcmp(__s1,__s2), iVar2 != 0))) {
          __s1 = (char *)puVar4[2];
          puVar4 = puVar4 + 3;
          if (__s1 == (char *)0x0) goto LAB_00bd7ff0;
        }
        iVar2 = ASN1_BIT_STRING_set_bit(a,*(int *)(puVar4 + -2),1);
        if (iVar2 == 0) {
          ERR_put_error(0x22,0x65,0x41,"crypto/x509v3/v3_bitst.c",0x4d);
          goto LAB_00bd8034;
        }
        if (puVar4[-1] == 0) goto LAB_00bd7ff0;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(nval);
      } while (iVar1 < iVar2);
    }
  }
  return a;
}

