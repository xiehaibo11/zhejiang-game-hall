
void SSL_set_msg_callback(SSL *ssl,cb *cb)

{
  ssl->msg_callback_arg = cb;
                    /* try { // try from 00ad9c04 to 00bd9c4b has its CatchHandler @ 00ad9c04
                       catch() { ... } // from try @ 00ad9c04 with catch @ 00ad9c04
                       catch() { ... } // from try @ 00ad9c84 with catch @ 00ad9c04 */
  return;
}

