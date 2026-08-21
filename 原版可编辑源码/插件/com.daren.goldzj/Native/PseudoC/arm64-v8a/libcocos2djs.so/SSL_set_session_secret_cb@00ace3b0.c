
int SSL_set_session_secret_cb(SSL *s,tls_session_secret_cb_fn tls_session_secret_cb,void *arg)

{
  if (s != (SSL *)0x0) {
    s[1].rbio = (BIO *)tls_session_secret_cb;
    s[1].wbio = arg;
  }
  return (uint)(s != (SSL *)0x0);
}

