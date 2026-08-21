
int SSL_get_quiet_shutdown(SSL *ssl)

{
                    /* catch() { ... } // from try @ 00ad9688 with catch @ 00ad9708 */
  return ssl->quiet_shutdown;
}

