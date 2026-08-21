
int RSA_padding_check_X931(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  uint uVar1;
  long lVar2;
  uchar *__src;
  int line;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if ((rsa_len == fl) && ((*f & 0xfe) == 0x6a)) {
    if (*f == 0x6b) {
      if (rsa_len < 4) {
LAB_00b5bee8:
        iVar3 = 0x8a;
        line = 0x50;
        goto LAB_00b5be74;
      }
      uVar1 = rsa_len - 3;
      lVar2 = 0;
      do {
        lVar4 = lVar2;
        if (f[lVar4 + 1] != 0xbb) {
          if (f[lVar4 + 1] != 0xba) {
            iVar3 = 0x8a;
            line = 0x48;
            goto LAB_00b5be74;
          }
          if ((int)lVar4 == 0) goto LAB_00b5bee8;
          uVar5 = (ulong)uVar1 - lVar4;
          __src = f + lVar4 + 2;
          goto LAB_00b5be94;
        }
        iVar3 = (int)(lVar4 + 1);
        lVar2 = lVar4 + 1;
      } while (iVar3 < (int)uVar1);
      __src = f + lVar4 + 2;
      uVar5 = (ulong)(uVar1 - iVar3);
    }
    else {
      __src = f + 1;
      uVar5 = (ulong)(rsa_len - 2);
    }
LAB_00b5be94:
    if (__src[(int)uVar5] == 0xcc) {
      memcpy(to,__src,uVar5 & 0xffffffff);
      return (int)uVar5;
    }
    iVar3 = 0x8b;
    line = 0x58;
  }
  else {
    iVar3 = 0x89;
    line = 0x3d;
  }
LAB_00b5be74:
  ERR_put_error(4,0x80,iVar3,"crypto/rsa/rsa_x931.c",line);
  return -1;
}

