
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
  
  if (value == (char *)0x0) {
                    /* catch() { ... } // from try @ 00b6bf64 with catch @ 00b6bf9c
                       try { // try from 00b6bf9c to 00c6bfe7 has its CatchHandler @ 00b6bf28 */
    ERR_put_error(0x22,0xa4,0x7c,"crypto/x509v3/v3_alt.c",0x188);
    return (GENERAL_NAME *)0x0;
  }
  a = out;
  if ((out == (GENERAL_NAME *)0x0) && (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0)) {
                    /* catch() { ... } // from try @ 00b6bf50 with catch @ 00b6bfc4 */
    ERR_put_error(0x22,0xa4,0x41,"crypto/x509v3/v3_alt.c",0x191);
    return (GENERAL_NAME *)0x0;
                    /* catch() { ... } // from try @ 00b6bf4c with catch @ 00b6bfd4 */
  }
                    /* try { // try from 00b6bf28 to 00c6bf4b has its CatchHandler @ 00b6bf28
                       catch() { ... } // from try @ 00b6bf28 with catch @ 00b6bf28
                       catch() { ... } // from try @ 00b6bf9c with catch @ 00b6bf28 */
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
          if (((a->d).otherName)->type_id != (ASN1_OBJECT *)0x0) goto LAB_00b6c114;
        }
      }
    }
    ERR_put_error(0x22,0xa4,0x93,"crypto/x509v3/v3_alt.c",0x1be);
    break;
  case 1:
  case 2:
  case 6:
    str = ASN1_IA5STRING_new();
                    /* try { // try from 00b6bf4c to 00c6bf4f has its CatchHandler @ 00b6bfd4 */
                    /* try { // try from 00b6bf50 to 00c6bf57 has its CatchHandler @ 00b6bfc4 */
    (a->d).rfc822Name = str;
    if (str != (ASN1_IA5STRING *)0x0) {
      sVar2 = strlen(value);
                    /* try { // try from 00b6bf64 to 00c6bf9b has its CatchHandler @ 00b6bf9c */
      iVar1 = ASN1_STRING_set(str,value,(int)sVar2);
      if (iVar1 != 0) goto LAB_00b6c114;
    }
    ERR_put_error(0x22,0xa4,0x41,"crypto/x509v3/v3_alt.c",0x1cb);
    if (out != (GENERAL_NAME *)0x0) {
      return (GENERAL_NAME *)0x0;
    }
    goto LAB_00b6c208;
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
                    /* catch() { ... } // from try @ 00b6c118 with catch @ 00b6c0e8 */
        if (iVar1 != 0) {
          (a->d).directoryName = nm;
          X509V3_section_free(ctx,dn_sk);
                    /* try { // try from 00b6c0fc to 00c6c0ff has its CatchHandler @ 00b6c150 */
          goto LAB_00b6c114;
        }
      }
    }
    X509_NAME_free(nm);
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
                    /* try { // try from 00b6c10c to 00c6c117 has its CatchHandler @ 00b6c15c */
      (a->d).iPAddress = pAVar6;
    }
    if (pAVar6 != (ASN1_OCTET_STRING *)0x0) {
LAB_00b6c114:
      a->type = gen_type;
      return a;
                    /* try { // try from 00b6c118 to 00c6c18b has its CatchHandler @ 00b6c0e8 */
    }
                    /* catch() { ... } // from try @ 00b6c0fc with catch @ 00b6c150 */
                    /* catch() { ... } // from try @ 00b6c10c with catch @ 00b6c15c */
    iVar1 = 0x76;
    line = 0x1af;
    goto LAB_00b6c184;
  case 8:
    pAVar7 = OBJ_txt2obj(value,0);
    if (pAVar7 != (ASN1_OBJECT *)0x0) {
      (a->d).registeredID = pAVar7;
      a->type = gen_type;
      return a;
    }
    iVar1 = 0x77;
    line = 0x1a1;
LAB_00b6c184:
    ERR_put_error(0x22,0xa4,iVar1,"crypto/x509v3/v3_alt.c",line);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c214 with catch @ 00b6c18c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6c2dc with catch @ 00b6c18c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6c364 with catch @ 00b6c18c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6c5a0 with catch @ 00b6c18c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6c6c8 with catch @ 00b6c18c
                        */
    ERR_add_error_data(2,"value=",value);
  }
  if (out == (GENERAL_NAME *)0x0) {
LAB_00b6c208:
                    /* try { // try from 00b6c20c to 00c6c213 has its CatchHandler @ 00b6c7b8 */
    GENERAL_NAME_free(a);
  }
                    /* try { // try from 00b6c214 to 00c6c2d3 has its CatchHandler @ 00b6c18c */
  return (GENERAL_NAME *)0x0;
}

