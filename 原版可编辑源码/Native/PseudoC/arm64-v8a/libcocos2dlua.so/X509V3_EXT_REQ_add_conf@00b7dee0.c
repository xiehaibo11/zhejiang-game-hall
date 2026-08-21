
int X509V3_EXT_REQ_add_conf(lhash_st_CONF_VALUE *conf,X509V3_CTX *ctx,char *section,X509_REQ *req)

{
  stack_st_X509_EXTENSION **sk;
  int iVar1;
  CONF CStack_50;
  stack_st_X509_EXTENSION *local_38;
  
  CONF_set_nconf(&CStack_50,conf);
  sk = (stack_st_X509_EXTENSION **)0x0;
  if (req != (X509_REQ *)0x0) {
    sk = &local_38;
  }
  local_38 = (stack_st_X509_EXTENSION *)0x0;
  iVar1 = X509V3_EXT_add_nconf_sk(&CStack_50,ctx,section,sk);
  if ((sk != (stack_st_X509_EXTENSION **)0x0) && (iVar1 != 0)) {
    iVar1 = X509_REQ_add_extensions(req,local_38);
    OPENSSL_sk_pop_free(local_38,X509_EXTENSION_free);
  }
  return iVar1;
}

