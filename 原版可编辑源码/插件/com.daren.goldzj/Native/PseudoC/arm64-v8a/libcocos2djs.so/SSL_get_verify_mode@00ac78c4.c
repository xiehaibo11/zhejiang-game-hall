
int SSL_get_verify_mode(SSL *s)

{
  return (int)s->verify_result;
}

