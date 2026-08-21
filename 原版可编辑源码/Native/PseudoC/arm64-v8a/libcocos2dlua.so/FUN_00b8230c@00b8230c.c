
ASN1_VALUE * FUN_00b8230c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ASN1_VALUE *val;
  CONF_VALUE *value;
  ASN1_INTEGER *pAVar3;
  char *__s1;
  
                    /* try { // try from 00b82310 to 00c82313 has its CatchHandler @ 00b82554 */
  val = ASN1_item_new((ASN1_ITEM *)POLICY_CONSTRAINTS_it);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0x22,0x92,0x41,"crypto/x509v3/v3_pcons.c",0x40);
  }
  else {
    iVar1 = OPENSSL_sk_num(param_3);
    if (iVar1 < 1) {
      pAVar3 = *(ASN1_INTEGER **)(val + 8);
    }
    else {
      iVar1 = 0;
      do {
        value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar1);
        __s1 = value->name;
        iVar2 = strcmp(__s1,"requireExplicitPolicy");
        if (iVar2 == 0) {
          iVar2 = X509V3_get_value_int(value,(ASN1_INTEGER **)val);
        }
        else {
          iVar2 = strcmp(__s1,"inhibitPolicyMapping");
          if (iVar2 != 0) {
            ERR_put_error(0x22,0x92,0x6a,"crypto/x509v3/v3_pcons.c",0x4c);
            ERR_add_error_data(6,"section:",value->section,",name:",value->name,",value:",
                               value->value);
            goto LAB_00b82474;
          }
          iVar2 = X509V3_get_value_int(value,(ASN1_INTEGER **)(val + 8));
        }
        if (iVar2 == 0) goto LAB_00b82474;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while (iVar1 < iVar2);
      pAVar3 = *(ASN1_INTEGER **)(val + 8);
    }
    if ((pAVar3 == (ASN1_INTEGER *)0x0) && (*(long *)val == 0)) {
      ERR_put_error(0x22,0x92,0x97,"crypto/x509v3/v3_pcons.c",0x53);
LAB_00b82474:
      ASN1_item_free(val,(ASN1_ITEM *)POLICY_CONSTRAINTS_it);
      val = (ASN1_VALUE *)0x0;
    }
  }
                    /* try { // try from 00b82498 to 00c824df has its CatchHandler @ 00b824f4 */
  return val;
}

