
void SSL_set_shutdown(SSL *ssl,int mode)

{
  ssl->shutdown = mode;
                    /* try { // try from 00aca22c to 00bca27f has its CatchHandler @ 00aca0b8 */
  return;
}

