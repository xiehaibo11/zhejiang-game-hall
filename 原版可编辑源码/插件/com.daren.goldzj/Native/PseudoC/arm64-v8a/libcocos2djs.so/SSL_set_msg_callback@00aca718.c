
void SSL_set_msg_callback(SSL *ssl,cb *cb)

{
  ssl->msg_callback_arg = cb;
  return;
}

