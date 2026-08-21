
BIO * BIO_new_socket(int sock,int close_flag)

{
  BIO *bp;
  
  bp = BIO_new((BIO_METHOD *)&DAT_016aeef8);
  if (bp != (BIO *)0x0) {
    BIO_int_ctrl(bp,0x68,(long)close_flag,sock);
  }
  return bp;
}

