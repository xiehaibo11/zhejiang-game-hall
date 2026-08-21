
void SSL_set_info_callback(SSL *ssl,cb *cb)

{
  *(cb **)&(ssl->ex_data).dummy = cb;
  return;
}

