
ASN1_VALUE * FUN_00bd7d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ASN1_VALUE *val;
  CONF_VALUE *value;
  char *__s1;
  
  val = ASN1_item_new((ASN1_ITEM *)BASIC_CONSTRAINTS_it);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0x22,0x66,0x41,"crypto/x509v3/v3_bcons.c",0x3f);
  }
  else {
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar1);
        __s1 = value->name;
        iVar2 = strcmp(__s1,"CA");
        if (iVar2 == 0) {
          iVar2 = X509V3_get_value_bool(value,(int *)val);
        }
        else {
          iVar2 = strcmp(__s1,"pathlen");
          if (iVar2 != 0) {
            ERR_put_error(0x22,0x66,0x6a,"crypto/x509v3/v3_bcons.c",0x4b);
            ERR_add_error_data(6,"section:",value->section,",name:",value->name,",value:",
                               value->value);
            goto LAB_00bd7e40;
          }
          iVar2 = X509V3_get_value_int(value,(ASN1_INTEGER **)(val + 8));
        }
        if (iVar2 == 0) {
LAB_00bd7e40:
          ASN1_item_free(val,(ASN1_ITEM *)BASIC_CONSTRAINTS_it);
          return (ASN1_VALUE *)0x0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return val;
}

