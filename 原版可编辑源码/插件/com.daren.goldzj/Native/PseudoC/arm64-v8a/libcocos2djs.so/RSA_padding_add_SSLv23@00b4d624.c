
int RSA_padding_add_SSLv23(uchar *to,int tlen,uchar *f,int fl)

{
  int num;
  int iVar1;
  int iVar2;
  uchar *buf;
  
  num = (tlen + -0xb) - fl;
  if (tlen + -0xb < fl) {
    ERR_put_error(4,0x6e,0x6e,"crypto/rsa/rsa_ssl.c",0x18);
  }
  else {
    buf = to + 2;
    to[0] = '\0';
    to[1] = '\x02';
    iVar1 = RAND_bytes(buf,num);
    if (0 < iVar1) {
      if (0 < num) {
        iVar1 = 0;
        do {
          while (*buf == '\0') {
            iVar2 = RAND_bytes(buf,1);
            if (iVar2 < 1) {
              return 0;
            }
          }
          iVar1 = iVar1 + 1;
          buf = buf + 1;
        } while (iVar1 < num);
      }
      builtin_memcpy(buf,"\x03\x03\x03\x03\x03\x03\x03\x03",9);
      memcpy(buf + 9,f,(ulong)(uint)fl);
      return 1;
    }
  }
  return 0;
}

