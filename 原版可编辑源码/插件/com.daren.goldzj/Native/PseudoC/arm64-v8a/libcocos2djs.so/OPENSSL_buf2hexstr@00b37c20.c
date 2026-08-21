
char * OPENSSL_buf2hexstr(byte *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    pcVar3 = (char *)CRYPTO_zalloc(1,"crypto/o_str.c",0xcb);
    return pcVar3;
  }
  lVar2 = param_2 * 3;
  pcVar3 = CRYPTO_malloc((int)lVar2,"crypto/o_str.c",0xce);
  if (pcVar3 == (char *)0x0) {
    ERR_put_error(0xf,0x75,0x41,"crypto/o_str.c",0xcf);
    pcVar3 = (char *)0x0;
  }
  else {
    pcVar4 = pcVar3;
    if (0 < param_2) {
      do {
        param_2 = param_2 + -1;
        *pcVar4 = "0123456789ABCDEF"[*param_1 >> 4];
        cVar1 = "0123456789ABCDEF"[(ulong)*param_1 & 0xf];
        pcVar4[2] = ':';
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 3;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      pcVar4 = pcVar3 + lVar2;
    }
    pcVar4[-1] = '\0';
  }
  return pcVar3;
}

