
X509 * SSL_get_certificate(SSL *ssl)

{
  if (ssl->verify_callback != (_func_3151 *)0x0) {
                    /* try { // try from 00ad95c4 to 00bd960f has its CatchHandler @ 00ad95c4
                       catch() { ... } // from try @ 00ad95c4 with catch @ 00ad95c4
                       catch() { ... } // from try @ 00ad9698 with catch @ 00ad95c4 */
    return (X509 *)**(undefined8 **)ssl->verify_callback;
  }
  return (X509 *)0x0;
}

