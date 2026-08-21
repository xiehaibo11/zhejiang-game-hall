
int SSL_set_cipher_list(SSL *s,char *str)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00ad7ffc to 00bd8003 has its CatchHandler @ 00ad8040 */
                    /* try { // try from 00ad8004 to 00bd805b has its CatchHandler @ 00ad7f94 */
  lVar2 = ssl_create_cipher_list
                    (*(undefined8 *)s->mode,&s->cert,&s->sid_ctx_length,str,s->verify_callback);
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (iVar1 != 0) {
      return 1;
    }
                    /* catch() { ... } // from try @ 00ad7ffc with catch @ 00ad8040 */
    ERR_put_error(0x14,0x10f,0xb9,"ssl/ssl_lib.c",0x7f3);
  }
                    /* try { // try from 00ad805c to 00bd80c3 has its CatchHandler @ 00ad805c
                       catch() { ... } // from try @ 00ad805c with catch @ 00ad805c
                       catch() { ... } // from try @ 00ad80cc with catch @ 00ad805c */
  return 0;
}

