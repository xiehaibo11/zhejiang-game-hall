
X509 * SSL_get_certificate(SSL *ssl)

{
  if (ssl->verify_callback != (_func_3151 *)0x0) {
    return (X509 *)**(undefined8 **)ssl->verify_callback;
  }
  return (X509 *)0x0;
}

