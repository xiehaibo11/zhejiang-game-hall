
int RSA_padding_check_SSLv23(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  uint uVar1;
  int line;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (fl < 10) {
    iVar2 = 0x6f;
    line = 0x3f;
  }
  else if ((fl + 1 == rsa_len) && (*f == '\x02')) {
    uVar4 = 0;
    do {
      uVar3 = uVar4;
      if (f[uVar3 + 1] == '\0') {
        uVar4 = uVar3 & 0xffffffff;
        iVar2 = (int)uVar3;
        break;
      }
      uVar4 = uVar3 + 1;
      iVar2 = (int)uVar4;
    } while (iVar2 < fl + -1);
    if ((iVar2 == fl + -1) || ((int)uVar4 < 8)) {
      iVar2 = 0x71;
      line = 0x4f;
    }
    else if (((((f[uVar3 - 7] == '\x03') && (f[uVar3 - 6] == '\x03')) && (f[uVar3 - 5] == '\x03'))
             && ((f[uVar3 - 4] == '\x03' && (f[uVar3 - 3] == '\x03')))) &&
            ((f[uVar3 - 2] == '\x03' && ((f[uVar3 - 1] == '\x03' && (f[uVar3] == '\x03')))))) {
      iVar2 = 0x73;
      line = 0x57;
    }
    else {
      uVar1 = (fl + -2) - (int)uVar4;
      if ((int)uVar1 <= tlen) {
        memcpy(to,f + uVar3 + 2,(ulong)uVar1);
        return uVar1;
      }
      iVar2 = 0x6d;
      line = 0x5e;
    }
  }
  else {
    iVar2 = 0x6b;
    line = 0x43;
  }
  ERR_put_error(4,0x72,iVar2,"crypto/rsa/rsa_ssl.c",line);
  return -1;
}

