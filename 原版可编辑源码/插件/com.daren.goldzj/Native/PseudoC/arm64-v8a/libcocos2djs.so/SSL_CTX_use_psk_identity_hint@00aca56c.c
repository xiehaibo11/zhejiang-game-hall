
int SSL_CTX_use_psk_identity_hint(SSL_CTX *ctx,char *identity_hint)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if ((identity_hint == (char *)0x0) || (sVar2 = strlen(identity_hint), sVar2 < 0x81)) {
                    /* try { // try from 00aca5b8 to 00bca5c3 has its CatchHandler @ 00aca6fc */
    CRYPTO_free(*(void **)(ctx->mode + 0x1d0));
    if (identity_hint == (char *)0x0) {
      *(undefined8 *)(ctx->mode + 0x1d0) = 0;
    }
    else {
      pcVar3 = CRYPTO_strdup(identity_hint,"ssl/ssl_lib.c",0xe07);
      *(char **)(ctx->mode + 0x1d0) = pcVar3;
      if (pcVar3 == (char *)0x0) {
        return 0;
      }
    }
                    /* try { // try from 00aca600 to 00bca60b has its CatchHandler @ 00aca6ec */
    iVar1 = 1;
  }
  else {
    ERR_put_error(0x14,0x110,0x92,"ssl/ssl_lib.c",0xe02);
    iVar1 = 0;
  }
  return iVar1;
}

