
void SSL_set_read_ahead(SSL *s,int yes)

{
  *(int *)&s[1].compress = yes;
  return;
}

