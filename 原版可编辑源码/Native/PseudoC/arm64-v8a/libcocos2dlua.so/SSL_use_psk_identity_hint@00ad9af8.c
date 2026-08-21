
int SSL_use_psk_identity_hint(SSL *s,char *identity_hint)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
                    /* try { // try from 00ad9b08 to 00bd9b3b has its CatchHandler @ 00ad9bc8 */
  iVar1 = 0;
  if (s != (SSL *)0x0) {
    if ((identity_hint == (char *)0x0) || (sVar2 = strlen(identity_hint), sVar2 < 0x81)) {
                    /* try { // try from 00ad9b50 to 00bd9b67 has its CatchHandler @ 00ad9bc4 */
      CRYPTO_free(*(void **)(s->verify_callback + 0x1d0));
      if (identity_hint == (char *)0x0) {
        *(undefined8 *)(s->verify_callback + 0x1d0) = 0;
      }
      else {
                    /* try { // try from 00ad9b68 to 00bd9c03 has its CatchHandler @ 00ad9abc */
        pcVar3 = CRYPTO_strdup(identity_hint,"ssl/ssl_lib.c",0xe1a);
        *(char **)(s->verify_callback + 0x1d0) = pcVar3;
        if (pcVar3 == (char *)0x0) {
          return 0;
        }
      }
      iVar1 = 1;
    }
    else {
      ERR_put_error(0x14,0x111,0x92,"ssl/ssl_lib.c",0xe15);
      iVar1 = 0;
    }
  }
  return iVar1;
}

