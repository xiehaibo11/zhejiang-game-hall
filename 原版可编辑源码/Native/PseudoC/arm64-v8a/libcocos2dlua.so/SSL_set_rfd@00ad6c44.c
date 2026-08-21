
int SSL_set_rfd(SSL *s,int fd)

{
  int iVar1;
  BIO *b;
  long lVar2;
  BIO_METHOD *type;
  
  if (s->bbio == (BIO *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad6b48 with catch @ 00ad6c74
                        */
    b = s->wbio;
  }
  else {
    b = BIO_next(s->bbio);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad6b10 with catch @ 00ad6c7c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad6bcc with catch @ 00ad6c94
                        */
  if (((b == (BIO *)0x0) || (iVar1 = BIO_method_type(b), iVar1 != 0x505)) ||
     (lVar2 = BIO_ctrl(b,0x69,0,(void *)0x0), (int)lVar2 != fd)) {
    type = BIO_s_socket();
    b = BIO_new(type);
    if (b == (BIO *)0x0) {
      ERR_put_error(0x14,0xc2,7,"ssl/ssl_lib.c",0x4b1);
      return 0;
    }
    BIO_int_ctrl(b,0x68,0,fd);
  }
  else {
    BIO_up_ref(b);
  }
  BIO_free_all(s->rbio);
  s->rbio = b;
  return 1;
}

