
void SSL_CTX_set_next_protos_advertised_cb(SSL_CTX *s,cb *cb,void *arg)

{
  *(cb **)&s[1].stats = cb;
  *(void **)&s[1].stats.sess_connect_good = arg;
  return;
}

