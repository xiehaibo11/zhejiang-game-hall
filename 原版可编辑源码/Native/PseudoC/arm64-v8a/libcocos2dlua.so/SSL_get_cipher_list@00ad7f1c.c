
char * SSL_get_cipher_list(SSL *s,int n)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  cert_st *pcVar4;
  
  pcVar3 = (char *)0x0;
  if (s != (SSL *)0x0) {
    pcVar4 = s->cert;
                    /* try { // try from 00ad7f34 to 00bd7f3b has its CatchHandler @ 00ad7f78 */
                    /* try { // try from 00ad7f3c to 00bd7f93 has its CatchHandler @ 00ad7ecc */
    if (((pcVar4 == (cert_st *)0x0) &&
        ((s->mode == 0 || (pcVar4 = *(cert_st **)(s->mode + 8), pcVar4 == (cert_st *)0x0)))) ||
       (iVar1 = OPENSSL_sk_num(pcVar4), iVar1 <= n)) {
      pcVar3 = (char *)0x0;
    }
    else {
      lVar2 = OPENSSL_sk_value(pcVar4,n);
      pcVar3 = (char *)0x0;
      if (lVar2 != 0) {
        pcVar3 = *(char **)(lVar2 + 8);
      }
    }
  }
                    /* catch() { ... } // from try @ 00ad7f34 with catch @ 00ad7f78 */
  return pcVar3;
}

