
stack_st_X509_NAME * SSL_get_client_CA_list(SSL *s)

{
  if (s->server != 0) {
    if ((stack_st_X509_NAME *)s->tlsext_debug_cb != (stack_st_X509_NAME *)0x0) {
      return (stack_st_X509_NAME *)s->tlsext_debug_cb;
    }
    return *(stack_st_X509_NAME **)(s->mode + 0x100);
  }
  if ((s->version & 0xffffff00U) != 0x300) {
    return (stack_st_X509_NAME *)0x0;
  }
  if (*(long *)&s->read_ahead != 0) {
    return *(stack_st_X509_NAME **)(*(long *)&s->read_ahead + 0x250);
  }
  return (stack_st_X509_NAME *)0x0;
}

