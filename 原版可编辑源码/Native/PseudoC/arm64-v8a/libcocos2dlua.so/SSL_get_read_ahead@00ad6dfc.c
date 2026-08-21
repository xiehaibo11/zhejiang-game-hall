
int SSL_get_read_ahead(SSL *s)

{
  return *(int *)&s[1].compress;
}

