
ASN1_GENERALIZEDTIME * ASN1_TIME_to_generalizedtime(ASN1_TIME *t,ASN1_GENERALIZEDTIME **out)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  ASN1_GENERALIZEDTIME *str;
  uchar *puVar4;
  
  if (t->type == 0x17) {
    iVar3 = ASN1_UTCTIME_check(t);
  }
  else {
    if (t->type != 0x18) {
      return (ASN1_GENERALIZEDTIME *)0x0;
    }
    iVar3 = ASN1_GENERALIZEDTIME_check(t);
  }
  if (iVar3 != 0) {
    if ((out == (ASN1_GENERALIZEDTIME **)0x0) || (str = *out, str == (ASN1_GENERALIZEDTIME *)0x0)) {
      str = ASN1_GENERALIZEDTIME_new();
      if (str == (ASN1_GENERALIZEDTIME *)0x0) {
        return (ASN1_GENERALIZEDTIME *)0x0;
      }
      if (out != (ASN1_GENERALIZEDTIME **)0x0) {
        *out = str;
      }
    }
    if (t->type == 0x18) {
      iVar3 = ASN1_STRING_set(str,t->data,t->length);
      if (iVar3 != 0) {
        return str;
      }
      return (ASN1_GENERALIZEDTIME *)0x0;
    }
    iVar3 = ASN1_STRING_set(str,(void *)0x0,t->length + 2);
    if (iVar3 != 0) {
      puVar4 = str->data;
      lVar1 = (long)t->length + 3;
      if (*t->data < 0x35) {
        pcVar2 = "GuoPengFei: delete 20";
      }
      else {
        pcVar2 = "GuoPengFei: delete 19";
      }
      OPENSSL_strlcpy(puVar4,pcVar2 + 0x13,lVar1);
      OPENSSL_strlcat(puVar4,t->data,lVar1);
      return str;
    }
  }
  return (ASN1_GENERALIZEDTIME *)0x0;
}

