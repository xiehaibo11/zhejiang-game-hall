
int FUN_00b39b2c(EVP_PKEY *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  ASN1_STRING *a;
  ASN1_STRING *b;
  
  a = EVP_PKEY_get0(param_1);
  b = EVP_PKEY_get0(param_2);
  iVar1 = ASN1_OCTET_STRING_cmp(a,b);
  return iVar1;
}

