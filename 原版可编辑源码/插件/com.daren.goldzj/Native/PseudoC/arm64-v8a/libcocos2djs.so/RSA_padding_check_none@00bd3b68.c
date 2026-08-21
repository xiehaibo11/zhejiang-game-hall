
int RSA_padding_check_none(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  if (tlen < fl) {
    ERR_put_error(4,0x6f,0x6d,"crypto/rsa/rsa_none.c",0x24);
    tlen = -1;
  }
  else {
    memset(to,0,(long)(tlen - fl));
    memcpy(to + ((long)tlen - (long)fl),f,(long)fl);
  }
  return tlen;
}

