
int SSL_CTX_set_client_cert_engine(SSL_CTX *ctx,ENGINE *e)

{
  int iVar1;
  ENGINE_SSL_CLIENT_CERT_PTR pEVar2;
  
  iVar1 = ENGINE_init(e);
  if (iVar1 == 0) {
    ERR_put_error(0x14,0x122,0x26,"ssl/ssl_sess.c",0x46a);
  }
  else {
    pEVar2 = ENGINE_get_ssl_client_cert_function(e);
    if (pEVar2 != (ENGINE_SSL_CLIENT_CERT_PTR)0x0) {
      *(ENGINE **)(ctx->tlsext_tick_key_name + 8) = e;
      return 1;
    }
    ERR_put_error(0x14,0x122,0x14b,"ssl/ssl_sess.c",0x46f);
    ENGINE_finish(e);
  }
  return 0;
}

