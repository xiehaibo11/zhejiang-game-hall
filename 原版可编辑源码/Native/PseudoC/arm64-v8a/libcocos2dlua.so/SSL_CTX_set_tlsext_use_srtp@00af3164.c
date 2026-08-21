
int SSL_CTX_set_tlsext_use_srtp(SSL_CTX *ctx,char *profiles)

{
  int iVar1;
  
  iVar1 = FUN_00af3174(profiles,&ctx[1].app_verify_cookie_cb);
  return iVar1;
}

