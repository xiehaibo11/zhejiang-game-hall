
int RSA_padding_check_PKCS1_type_2(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  byte *pbVar1;
  uint uVar2;
  int reason;
  int line;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *ptr;
  
  if ((fl | tlen) < 0) {
    return -1;
  }
  ptr = (byte *)0x0;
  if ((rsa_len < fl) || (rsa_len < 0xb)) {
LAB_00b4b364:
    CRYPTO_free(ptr);
  }
  else {
    ptr = (byte *)CRYPTO_zalloc((long)rsa_len,"crypto/rsa/rsa_pk1.c",0xb2);
    if (ptr == (byte *)0x0) {
      reason = 0x41;
      line = 0xb4;
      goto LAB_00b4b3ac;
    }
    memcpy(ptr + ((long)rsa_len - (long)fl),f,(long)fl);
    uVar3 = 0;
    if (2 < rsa_len) {
      uVar4 = 0;
      uVar6 = 2;
      do {
        pbVar1 = ptr + uVar6;
        uVar5 = (uint)uVar6;
        uVar6 = uVar6 + 1;
        uVar2 = (int)(*pbVar1 - 1) >> 0x1f;
        uVar3 = (uVar4 | uVar2 ^ 0xffffffff) & uVar3 | uVar5 & (uVar4 ^ 0xffffffff) & uVar2;
        uVar4 = uVar2 | uVar4;
      } while ((uint)rsa_len != uVar6);
    }
    uVar4 = rsa_len - (uVar3 + 1);
    if (((int)((ptr[1] ^ 2) - 1 & *ptr - 1) >> 0x1f &
         ((int)(uVar3 - 10 & (uVar3 ^ 0xffffffff)) >> 0x1f ^ 0xffffffffU) &
        ((int)((tlen - uVar4 ^ uVar4 | uVar4 ^ tlen) ^ tlen) >> 0x1f ^ 0xffffffffU)) == 0)
    goto LAB_00b4b364;
    memcpy(to,ptr + (int)(uVar3 + 1),(long)(int)uVar4);
    CRYPTO_free(ptr);
    if (uVar4 != 0xffffffff) {
      return uVar4;
    }
  }
  reason = 0x9f;
  line = 0xf3;
LAB_00b4b3ac:
  ERR_put_error(4,0x71,reason,"crypto/rsa/rsa_pk1.c",line);
  return -1;
}

