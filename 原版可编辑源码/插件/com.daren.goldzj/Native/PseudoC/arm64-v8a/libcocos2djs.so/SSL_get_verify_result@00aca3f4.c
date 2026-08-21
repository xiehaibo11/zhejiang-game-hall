
long SSL_get_verify_result(SSL *ssl)

{
  long lVar1;
  
  lVar1._0_4_ = ssl->first_packet;
  lVar1._4_4_ = ssl->client_version;
  return lVar1;
}

