
SSL_SESSION * SSL_get_session(SSL *ssl)

{
                    /* try { // try from 00adbfe8 to 00bdc077 has its CatchHandler @ 00adbfe8
                       catch() { ... } // from try @ 00adbfe8 with catch @ 00adbfe8
                       catch() { ... } // from try @ 00adc0a8 with catch @ 00adbfe8 */
  return (SSL_SESSION *)ssl->ctx;
}

