
int RSA_padding_check_PKCS1_type_1(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uchar *__src;
  int iVar4;
  long lVar5;
  
  if (rsa_len < 0xb) {
    return -1;
  }
  if (rsa_len == fl) {
    if (*f != '\0') {
      iVar3 = 0x8a;
      iVar4 = 0x43;
      goto LAB_00b4b090;
    }
    f = f + 1;
    fl = rsa_len + -1;
  }
  if ((fl + 1 != rsa_len) || (*f != '\x01')) {
    iVar3 = 0x6a;
    iVar4 = 0x4b;
    goto LAB_00b4b090;
  }
  if (fl < 2) {
    iVar3 = 0;
    __src = f + 1;
    if (fl == 1) goto LAB_00b4b0b8;
  }
  else {
    lVar1 = 0;
    do {
      lVar5 = lVar1;
      if (f[lVar5 + 1] != 0xff) {
        if (f[lVar5 + 1] != '\0') {
          iVar3 = 0x66;
          iVar4 = 0x58;
          goto LAB_00b4b090;
        }
        iVar4 = (int)lVar5;
        lVar1 = lVar5;
        break;
      }
      lVar1 = lVar5 + 1;
      iVar4 = (int)lVar1;
    } while (iVar4 < fl + -1);
    __src = f + lVar5 + 2;
    iVar3 = (int)lVar1;
    if (iVar4 == fl + -1) {
LAB_00b4b0b8:
      iVar3 = 0x71;
      iVar4 = 0x61;
      goto LAB_00b4b090;
    }
  }
  if (iVar3 < 8) {
    iVar3 = 0x67;
    iVar4 = 0x67;
  }
  else {
    uVar2 = (fl + -2) - iVar3;
    if ((int)uVar2 <= tlen) {
      memcpy(to,__src,(ulong)uVar2);
      return uVar2;
    }
    iVar3 = 0x6d;
    iVar4 = 0x6d;
  }
LAB_00b4b090:
  ERR_put_error(4,0x70,iVar3,"crypto/rsa/rsa_pk1.c",iVar4);
  return -1;
}

