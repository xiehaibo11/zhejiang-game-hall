
int SSL_get_quiet_shutdown(SSL *ssl)

{
                    /* try { // try from 00aca220 to 00bca22b has its CatchHandler @ 00aca258 */
  return ssl->quiet_shutdown;
}

