
int SSL_set_wfd(SSL *s,int fd)

{
  BIO *pBVar1;
  int iVar2;
  long lVar3;
  BIO_METHOD *type;
  BIO *b;
  BIO *pBVar4;
  
  pBVar4 = s->rbio;
  if (((pBVar4 == (BIO *)0x0) || (iVar2 = BIO_method_type(pBVar4), iVar2 != 0x505)) ||
     (lVar3 = BIO_ctrl(pBVar4,0x69,0,(void *)0x0), (int)lVar3 != fd)) {
    type = BIO_s_socket();
    pBVar4 = BIO_new(type);
    if (pBVar4 == (BIO *)0x0) {
      ERR_put_error(0x14,0xc4,7,"ssl/ssl_lib.c",0x49c);
      return 0;
    }
                    /* try { // try from 00ad6bcc to 00bd6bcf has its CatchHandler @ 00ad6c94 */
                    /* try { // try from 00ad6bd0 to 00bd6c97 has its CatchHandler @ 00ad6a60 */
    BIO_int_ctrl(pBVar4,0x68,0,fd);
    b = s->wbio;
    pBVar1 = s->bbio;
  }
  else {
    BIO_up_ref(pBVar4);
    b = s->wbio;
    pBVar1 = s->bbio;
  }
  if (pBVar1 != (BIO *)0x0) {
    b = BIO_pop(b);
    s->wbio = b;
  }
  BIO_free_all(b);
  s->wbio = pBVar4;
  if (s->bbio != (BIO *)0x0) {
    pBVar4 = BIO_push(s->bbio,pBVar4);
    s->wbio = pBVar4;
  }
  return 1;
}

