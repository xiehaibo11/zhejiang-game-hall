
void PEM_dek_info(char *buf,char *type,int len,char *str)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  
  OPENSSL_strlcat(buf,"DEK-Info: ",0x400);
  OPENSSL_strlcat(buf,type,0x400);
  OPENSSL_strlcat(buf,&DAT_013ecf7a,0x400);
  sVar2 = strlen(buf);
  iVar1 = (int)sVar2;
  if (iVar1 + len * 2 < 0x400) {
    if (len < 1) {
      lVar4 = 0;
    }
    else {
      pcVar3 = buf + (long)iVar1 + 1;
      lVar4 = (long)len;
      do {
        lVar4 = lVar4 + -1;
        pcVar3[-1] = "0123456789ABCDEF"[(byte)*str >> 4];
        *pcVar3 = "0123456789ABCDEF"[(ulong)(byte)*str & 0xf];
        pcVar3 = pcVar3 + 2;
        str = str + 1;
      } while (lVar4 != 0);
      lVar4 = (long)len << 1;
    }
    (buf + lVar4 + iVar1)[0] = '\n';
    (buf + lVar4 + iVar1)[1] = '\0';
  }
  return;
}

