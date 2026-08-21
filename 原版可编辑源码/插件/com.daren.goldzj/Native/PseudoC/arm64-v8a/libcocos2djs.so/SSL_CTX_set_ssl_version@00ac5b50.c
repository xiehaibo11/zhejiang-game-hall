
int SSL_CTX_set_ssl_version(SSL_CTX *ctx,SSL_METHOD *meth)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00ac5b54 to 00bc5b5b has its CatchHandler @ 00ac5c6c */
  ctx->method = meth;
  lVar2 = ssl_create_cipher_list
                    (meth,&ctx->cipher_list,&ctx->cipher_list_by_id,
                     "ALL:!COMPLEMENTOFDEFAULT:!eNULL",ctx->mode);
  if ((lVar2 != 0) && (iVar1 = OPENSSL_sk_num(), 0 < iVar1)) {
    return 1;
  }
  ERR_put_error(0x14,0xaa,0xe6,"ssl/ssl_lib.c",0x202);
  return 0;
}

