
int SSL_CTX_set_cipher_list(SSL_CTX *param_1,char *str)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00ad7f94 to 00bd7ffb has its CatchHandler @ 00ad7f94
                       catch() { ... } // from try @ 00ad7f94 with catch @ 00ad7f94
                       catch() { ... } // from try @ 00ad8004 with catch @ 00ad7f94 */
  lVar2 = ssl_create_cipher_list
                    (param_1->method,&param_1->cipher_list,&param_1->cipher_list_by_id,str,
                     param_1->mode);
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num();
    if (iVar1 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x10d,0xb9,"ssl/ssl_lib.c",0x7e2);
  }
  return 0;
}

