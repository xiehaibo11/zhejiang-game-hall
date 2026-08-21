
int SSL_set_rfd(SSL *s,int fd)

{
  int iVar1;
  BIO *b;
  long lVar2;
  BIO_METHOD *type;
  
                    /* try { // try from 00ac7774 to 00bc77d3 has its CatchHandler @ 00ac7774
                       catch() { ... } // from try @ 00ac7774 with catch @ 00ac7774
                       catch() { ... } // from try @ 00ac77e0 with catch @ 00ac7774 */
  if (s->bbio == (BIO *)0x0) {
    b = s->wbio;
  }
  else {
    b = BIO_next(s->bbio);
  }
  if (((b == (BIO *)0x0) || (iVar1 = BIO_method_type(b), iVar1 != 0x505)) ||
     (lVar2 = BIO_ctrl(b,0x69,0,(void *)0x0), (int)lVar2 != fd)) {
    type = BIO_s_socket();
    b = BIO_new(type);
                    /* try { // try from 00ac77d4 to 00bc77df has its CatchHandler @ 00ac7854 */
    if (b == (BIO *)0x0) {
      ERR_put_error(0x14,0xc2,7,"ssl/ssl_lib.c",0x4b1);
      return 0;
    }
                    /* try { // try from 00ac77e0 to 00bc7867 has its CatchHandler @ 00ac7774 */
    BIO_int_ctrl(b,0x68,0,fd);
  }
  else {
    BIO_up_ref(b);
  }
  BIO_free_all(s->rbio);
  s->rbio = b;
  return 1;
}

