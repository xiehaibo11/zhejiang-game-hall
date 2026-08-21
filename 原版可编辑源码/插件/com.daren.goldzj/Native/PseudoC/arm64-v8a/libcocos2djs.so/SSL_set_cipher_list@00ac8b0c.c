
int SSL_set_cipher_list(SSL *s,char *str)

{
  int iVar1;
  long lVar2;
  
  lVar2 = ssl_create_cipher_list
                    (*(undefined8 *)s->mode,&s->cert,&s->sid_ctx_length,str,s->verify_callback);
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (iVar1 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x10f,0xb9,"ssl/ssl_lib.c",0x7f3);
  }
  return 0;
}

