
void SSL_CTX_set_next_proto_select_cb(SSL_CTX *s,cb *cb,void *arg)

{
  *(cb **)&s[1].stats.sess_accept_renegotiate = cb;
  *(void **)&s[1].stats.sess_miss = arg;
  return;
}

