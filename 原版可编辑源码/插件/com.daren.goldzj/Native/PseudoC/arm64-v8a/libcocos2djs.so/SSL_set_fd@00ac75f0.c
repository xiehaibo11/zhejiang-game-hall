
int SSL_set_fd(SSL *s,int fd)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_socket();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
                    /* catch() { ... } // from try @ 00ac7628 with catch @ 00ac764c */
    ERR_put_error(0x14,0xc0,7,"ssl/ssl_lib.c",0x489);
  }
  else {
                    /* try { // try from 00ac7628 to 00bc762f has its CatchHandler @ 00ac764c */
    BIO_int_ctrl(bp,0x68,0,fd);
                    /* try { // try from 00ac7630 to 00bc7667 has its CatchHandler @ 00ac7584 */
    SSL_set_bio(s,bp,bp);
  }
  return (uint)(bp != (BIO *)0x0);
}

