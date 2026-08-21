
undefined8 cms_set1_keyid(undefined8 *param_1,undefined8 param_2)

{
  ASN1_STRING *pAVar1;
  int reason;
  int line;
  
  pAVar1 = (ASN1_STRING *)X509_get0_subject_key_id(param_2);
  if (pAVar1 == (ASN1_STRING *)0x0) {
    reason = 0xa0;
    line = 0x240;
  }
  else {
    pAVar1 = ASN1_STRING_dup(pAVar1);
    if (pAVar1 != (ASN1_STRING *)0x0) {
      ASN1_OCTET_STRING_free((ASN1_STRING *)*param_1);
      *param_1 = pAVar1;
      return 1;
    }
    reason = 0x41;
    line = 0x245;
  }
  ERR_put_error(0x2e,0xb1,reason,"crypto/cms/cms_lib.c",line);
  return 0;
}

