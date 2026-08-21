
int X509V3_EXT_add_nconf(CONF *conf,X509V3_CTX *ctx,char *section,X509 *cert)

{
  ASN1_OCTET_STRING **sk;
  int iVar1;
  
  sk = (ASN1_OCTET_STRING **)0x0;
  if (cert != (X509 *)0x0) {
    sk = &cert->skid;
  }
  iVar1 = X509V3_EXT_add_nconf_sk(conf,ctx,section,(stack_st_X509_EXTENSION **)sk);
  return iVar1;
}

