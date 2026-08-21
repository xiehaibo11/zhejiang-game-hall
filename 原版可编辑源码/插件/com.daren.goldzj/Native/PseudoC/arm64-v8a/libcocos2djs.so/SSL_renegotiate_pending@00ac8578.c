
int SSL_renegotiate_pending(SSL *s)

{
  return (int)(s[1].init_off != 0);
}

