
int X509_CRL_match(X509_CRL *a,X509_CRL *b)

{
  int iVar1;
  
  iVar1 = memcmp(&a[1].base_crl_number,&b[1].base_crl_number,0x14);
  return iVar1;
}

