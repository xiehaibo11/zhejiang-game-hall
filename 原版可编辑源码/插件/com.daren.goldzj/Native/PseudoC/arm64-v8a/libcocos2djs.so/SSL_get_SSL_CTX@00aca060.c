
SSL_CTX * SSL_get_SSL_CTX(SSL *ssl)

{
                    /* catch() { ... } // from try @ 00ac9f48 with catch @ 00aca060 */
  return (SSL_CTX *)ssl->mode;
}

