
char * SSL_get_shared_ciphers(SSL *s,char *buf,int len)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  EVP_MD *pEVar5;
  char *__dest;
  char *pcVar6;
  
  if (s->ctx != (SSL_CTX *)0x0) {
    if (len < 2) {
      return (char *)0x0;
    }
    pEVar5 = s->ctx->md5;
    if (pEVar5 == (EVP_MD *)0x0) {
      return (char *)0x0;
    }
    iVar1 = OPENSSL_sk_num(pEVar5);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_num(pEVar5);
      __dest = buf;
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar3 = OPENSSL_sk_value(pEVar5,iVar1);
          pcVar6 = *(char **)(lVar3 + 8);
          sVar4 = strlen(pcVar6);
          iVar2 = (int)sVar4;
          if (len <= iVar2) {
            if (__dest != buf) {
              __dest = __dest + -1;
            }
            *__dest = '\0';
            return buf;
          }
          memcpy(__dest,pcVar6,(long)(iVar2 + 1));
          pcVar6 = __dest + iVar2;
          len = len - (iVar2 + 1);
          __dest = pcVar6 + 1;
          *pcVar6 = ':';
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(pEVar5);
        } while (iVar1 < iVar2);
      }
      __dest[-1] = '\0';
      return buf;
    }
  }
  return (char *)0x0;
}

