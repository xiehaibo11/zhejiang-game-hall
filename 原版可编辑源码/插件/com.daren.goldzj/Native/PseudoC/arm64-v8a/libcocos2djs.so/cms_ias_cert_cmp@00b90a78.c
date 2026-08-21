
int cms_ias_cert_cmp(undefined8 *param_1,X509 *param_2)

{
  int iVar1;
  X509_NAME *b;
  ASN1_INTEGER *y;
  ASN1_INTEGER *x;
  X509_NAME *a;
  
  a = (X509_NAME *)*param_1;
  b = X509_get_issuer_name(param_2);
  iVar1 = X509_NAME_cmp(a,b);
  if (iVar1 != 0) {
    return iVar1;
  }
  x = (ASN1_INTEGER *)param_1[1];
  y = X509_get_serialNumber(param_2);
  iVar1 = ASN1_INTEGER_cmp(x,y);
  return iVar1;
}

