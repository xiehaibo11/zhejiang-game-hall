
int SSL_set_session_ticket_ext_cb(SSL *s,tls_session_ticket_ext_cb_fn cb,void *arg)

{
  if (s != (SSL *)0x0) {
    *(tls_session_ticket_ext_cb_fn *)(s + 1) = cb;
    s[1].method = arg;
  }
  return (uint)(s != (SSL *)0x0);
}

