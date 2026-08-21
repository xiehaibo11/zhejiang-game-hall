
int SSL_set_tlsext_use_srtp(SSL *ctx,char *profiles)

{
  int iVar1;
  
  iVar1 = FUN_00ae42c0(profiles,&ctx[1].server);
  return iVar1;
}

