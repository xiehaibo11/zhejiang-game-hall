
int SSL_CTX_use_psk_identity_hint(SSL_CTX *ctx,char *identity_hint)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if ((identity_hint == (char *)0x0) || (sVar2 = strlen(identity_hint), sVar2 < 0x81)) {
                    /* catch() { ... } // from try @ 00ad9a18 with catch @ 00ad9aa0 */
    CRYPTO_free(*(void **)(ctx->mode + 0x1d0));
    if (identity_hint == (char *)0x0) {
      *(undefined8 *)(ctx->mode + 0x1d0) = 0;
    }
    else {
                    /* try { // try from 00ad9abc to 00bd9b07 has its CatchHandler @ 00ad9abc
                       catch() { ... } // from try @ 00ad9abc with catch @ 00ad9abc
                       catch() { ... } // from try @ 00ad9b68 with catch @ 00ad9abc */
      pcVar3 = CRYPTO_strdup(identity_hint,"ssl/ssl_lib.c",0xe07);
      *(char **)(ctx->mode + 0x1d0) = pcVar3;
      if (pcVar3 == (char *)0x0) {
        return 0;
      }
    }
    iVar1 = 1;
  }
  else {
    ERR_put_error(0x14,0x110,0x92,"ssl/ssl_lib.c",0xe02);
    iVar1 = 0;
                    /* catch() { ... } // from try @ 00ad9a3c with catch @ 00ad9a9c */
  }
  return iVar1;
}

