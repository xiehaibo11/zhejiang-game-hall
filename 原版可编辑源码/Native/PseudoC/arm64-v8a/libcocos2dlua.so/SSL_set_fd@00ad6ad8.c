
int SSL_set_fd(SSL *s,int fd)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_socket();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0x14,0xc0,7,"ssl/ssl_lib.c",0x489);
                    /* try { // try from 00ad6b48 to 00bd6b4f has its CatchHandler @ 00ad6c74 */
  }
  else {
                    /* try { // try from 00ad6b10 to 00bd6b13 has its CatchHandler @ 00ad6c7c */
    BIO_int_ctrl(bp,0x68,0,fd);
    SSL_set_bio(s,bp,bp);
  }
  return (uint)(bp != (BIO *)0x0);
}

