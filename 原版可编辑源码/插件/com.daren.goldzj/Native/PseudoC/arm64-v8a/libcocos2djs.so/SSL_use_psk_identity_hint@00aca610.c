
int SSL_use_psk_identity_hint(SSL *s,char *identity_hint)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  iVar1 = 0;
  if (s != (SSL *)0x0) {
    if ((identity_hint == (char *)0x0) || (sVar2 = strlen(identity_hint), sVar2 < 0x81)) {
      CRYPTO_free(*(void **)(s->verify_callback + 0x1d0));
      if (identity_hint == (char *)0x0) {
        *(undefined8 *)(s->verify_callback + 0x1d0) = 0;
      }
      else {
        pcVar3 = CRYPTO_strdup(identity_hint,"ssl/ssl_lib.c",0xe1a);
                    /* try { // try from 00aca690 to 00bca69b has its CatchHandler @ 00aca6cc */
        *(char **)(s->verify_callback + 0x1d0) = pcVar3;
        if (pcVar3 == (char *)0x0) {
          return 0;
        }
      }
      iVar1 = 1;
    }
    else {
                    /* try { // try from 00aca648 to 00bca653 has its CatchHandler @ 00aca6dc */
      ERR_put_error(0x14,0x111,0x92,"ssl/ssl_lib.c",0xe15);
      iVar1 = 0;
    }
  }
  return iVar1;
}

