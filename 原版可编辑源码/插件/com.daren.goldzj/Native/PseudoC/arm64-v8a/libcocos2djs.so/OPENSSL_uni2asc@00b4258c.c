
char * OPENSSL_uni2asc(uchar *uni,int unilen)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if ((unilen & 1U) == 0) {
    iVar5 = unilen;
    if (unilen < 0) {
      iVar5 = unilen + 1;
    }
    iVar5 = iVar5 >> 1;
    if ((unilen == 0) || (uni[(long)unilen + -1] != '\0')) {
      iVar5 = iVar5 + 1;
    }
    pcVar2 = CRYPTO_malloc(iVar5,"crypto/pkcs12/p12_utl.c",0x35);
    if (pcVar2 != (char *)0x0) {
      if (0 < unilen) {
        lVar4 = 0;
        do {
          lVar1 = lVar4 + 1;
          iVar3 = (int)lVar4;
          lVar4 = lVar4 + 2;
          pcVar2[iVar3 >> 1] = uni[lVar1];
        } while (lVar4 < unilen);
      }
      pcVar2[(long)iVar5 + -1] = '\0';
    }
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}

