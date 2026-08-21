
GENERAL_NAME *
a2i_GENERAL_NAME(GENERAL_NAME *out,X509V3_EXT_METHOD *method,X509V3_CTX *ctx,int gen_type,
                char *value,int is_nc)

{
  int iVar1;
  GENERAL_NAME *a;
  ASN1_IA5STRING *str;
  size_t sVar2;
  char *pcVar3;
  OTHERNAME *pOVar4;
  ASN1_TYPE *pAVar5;
  X509_NAME *nm;
  stack_st_CONF_VALUE *dn_sk;
  ASN1_OCTET_STRING *pAVar6;
  ASN1_OBJECT *pAVar7;
  int line;
  
                    /* try { // try from 00b7b388 to 00c7b567 has its CatchHandler @ 00b7b388
                       catch() { ... } // from try @ 00b7b388 with catch @ 00b7b388
                       catch() { ... } // from try @ 00b7be5c with catch @ 00b7b388 */
  if (value == (char *)0x0) {
    ERR_put_error(0x22,0xa4,0x7c,"crypto/x509v3/v3_alt.c",0x188);
    return (GENERAL_NAME *)0x0;
  }
  a = out;
  if ((out == (GENERAL_NAME *)0x0) && (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0)) {
    ERR_put_error(0x22,0xa4,0x41,"crypto/x509v3/v3_alt.c",0x191);
    return (GENERAL_NAME *)0x0;
  }
  switch(gen_type) {
  case 0:
    pcVar3 = strchr(value,0x3b);
    if (pcVar3 != (char *)0x0) {
      pOVar4 = OTHERNAME_new();
      (a->d).otherName = pOVar4;
      if (pOVar4 != (OTHERNAME *)0x0) {
        ASN1_TYPE_free(pOVar4->value);
        pAVar5 = ASN1_generate_v3(pcVar3 + 1,ctx);
        ((a->d).otherName)->value = pAVar5;
        if ((pAVar5 != (ASN1_TYPE *)0x0) &&
           (pcVar3 = (char *)CRYPTO_strndup(value,(long)((int)pcVar3 - (int)value),
                                            "crypto/x509v3/v3_alt.c",0x213), pcVar3 != (char *)0x0))
        {
          pAVar7 = OBJ_txt2obj(pcVar3,0);
          ((a->d).otherName)->type_id = pAVar7;
          CRYPTO_free(pcVar3);
          if (((a->d).otherName)->type_id != (ASN1_OBJECT *)0x0) goto LAB_00b7b594;
        }
      }
    }
    ERR_put_error(0x22,0xa4,0x93,"crypto/x509v3/v3_alt.c",0x1be);
    break;
  case 1:
  case 2:
  case 6:
    str = ASN1_IA5STRING_new();
    (a->d).rfc822Name = str;
    if (str != (ASN1_IA5STRING *)0x0) {
      sVar2 = strlen(value);
      iVar1 = ASN1_STRING_set(str,value,(int)sVar2);
      if (iVar1 != 0) goto LAB_00b7b594;
    }
    ERR_put_error(0x22,0xa4,0x41,"crypto/x509v3/v3_alt.c",0x1cb);
    if (out != (GENERAL_NAME *)0x0) {
      return (GENERAL_NAME *)0x0;
    }
    goto LAB_00b7b688;
  default:
    ERR_put_error(0x22,0xa4,0xa7,"crypto/x509v3/v3_alt.c",0x1c3);
    break;
  case 4:
    nm = X509_NAME_new();
    if (nm == (X509_NAME *)0x0) {
      dn_sk = (stack_st_CONF_VALUE *)0x0;
    }
    else {
      dn_sk = X509V3_get_section(ctx,value);
      if (dn_sk == (stack_st_CONF_VALUE *)0x0) {
        ERR_put_error(0x22,0x90,0x96,"crypto/x509v3/v3_alt.c",0x227);
        ERR_add_error_data(2,"section=",value);
      }
      else {
        iVar1 = X509V3_NAME_from_section(nm,dn_sk,0x1001);
                    /* try { // try from 00b7b568 to 00c7b573 has its CatchHandler @ 00b7be70 */
        if (iVar1 != 0) {
          (a->d).directoryName = nm;
          X509V3_section_free(ctx,dn_sk);
          goto LAB_00b7b594;
        }
      }
    }
    X509_NAME_free(nm);
                    /* try { // try from 00b7b65c to 00c7b667 has its CatchHandler @ 00b7be68 */
    X509V3_section_free(ctx,dn_sk);
    ERR_put_error(0x22,0xa4,0x95,"crypto/x509v3/v3_alt.c",0x1b7);
    break;
  case 7:
    if (is_nc == 0) {
      pAVar6 = a2i_IPADDRESS(value);
      (a->d).iPAddress = pAVar6;
    }
    else {
      pAVar6 = a2i_IPADDRESS_NC(value);
      (a->d).iPAddress = pAVar6;
    }
    if (pAVar6 != (ASN1_OCTET_STRING *)0x0) {
LAB_00b7b594:
      a->type = gen_type;
      return a;
    }
    iVar1 = 0x76;
    line = 0x1af;
    goto LAB_00b7b604;
  case 8:
    pAVar7 = OBJ_txt2obj(value,0);
    if (pAVar7 != (ASN1_OBJECT *)0x0) {
      (a->d).registeredID = pAVar7;
      a->type = gen_type;
      return a;
    }
                    /* try { // try from 00b7b5fc to 00c7b603 has its CatchHandler @ 00b7be84 */
    iVar1 = 0x77;
    line = 0x1a1;
LAB_00b7b604:
                    /* try { // try from 00b7b604 to 00c7b60f has its CatchHandler @ 00b7be6c */
    ERR_put_error(0x22,0xa4,iVar1,"crypto/x509v3/v3_alt.c",line);
    ERR_add_error_data(2,"value=",value);
  }
  if (out == (GENERAL_NAME *)0x0) {
LAB_00b7b688:
    GENERAL_NAME_free(a);
  }
  return (GENERAL_NAME *)0x0;
}

