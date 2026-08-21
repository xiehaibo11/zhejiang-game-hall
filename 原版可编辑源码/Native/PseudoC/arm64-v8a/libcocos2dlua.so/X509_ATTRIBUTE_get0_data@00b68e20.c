
void * X509_ATTRIBUTE_get0_data(X509_ATTRIBUTE *attr,int idx,int atrtype,void *data)

{
  int iVar1;
  ASN1_TYPE *a;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if ((attr != (X509_ATTRIBUTE *)0x0) &&
     (a = (ASN1_TYPE *)OPENSSL_sk_value(*(undefined8 *)&attr->single,idx), pcVar2 = (char *)0x0,
     a != (ASN1_TYPE *)0x0)) {
    iVar1 = ASN1_TYPE_get(a);
    if (iVar1 == atrtype) {
      pcVar2 = (a->value).ptr;
    }
    else {
      ERR_put_error(0xb,0x8b,0x7a,"crypto/x509/x509_att.c",0x13e);
      pcVar2 = (char *)0x0;
    }
  }
  return pcVar2;
}

