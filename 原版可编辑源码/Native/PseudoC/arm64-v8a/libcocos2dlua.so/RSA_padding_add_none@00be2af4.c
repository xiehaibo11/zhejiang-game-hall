
int RSA_padding_add_none(uchar *to,int tlen,uchar *f,int fl)

{
  int reason;
  int line;
  
  if (tlen < fl) {
    reason = 0x6e;
    line = 0x12;
  }
  else {
    if (tlen <= fl) {
      memcpy(to,f,(ulong)(uint)fl);
      return 1;
    }
    reason = 0x7a;
    line = 0x17;
  }
  ERR_put_error(4,0x6b,reason,"crypto/rsa/rsa_none.c",line);
  return 0;
}

