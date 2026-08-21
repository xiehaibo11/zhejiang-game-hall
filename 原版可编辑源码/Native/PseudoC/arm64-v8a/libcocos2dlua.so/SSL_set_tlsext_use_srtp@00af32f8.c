
int SSL_set_tlsext_use_srtp(SSL *ctx,char *profiles)

{
  int iVar1;
  
  iVar1 = FUN_00af3174(profiles,&ctx[1].server);
  return iVar1;
}

