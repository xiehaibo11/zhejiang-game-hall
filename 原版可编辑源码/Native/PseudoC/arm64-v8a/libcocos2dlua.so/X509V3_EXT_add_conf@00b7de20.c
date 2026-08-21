
int X509V3_EXT_add_conf(lhash_st_CONF_VALUE *conf,X509V3_CTX *ctx,char *section,X509 *cert)

{
  ASN1_OCTET_STRING **sk;
  int iVar1;
  CONF CStack_48;
  
  CONF_set_nconf(&CStack_48,conf);
  sk = (ASN1_OCTET_STRING **)0x0;
  if (cert != (X509 *)0x0) {
    sk = &cert->skid;
  }
  iVar1 = X509V3_EXT_add_nconf_sk(&CStack_48,ctx,section,(stack_st_X509_EXTENSION **)sk);
  return iVar1;
}

