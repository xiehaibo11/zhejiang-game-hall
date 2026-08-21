
long SSL_get_verify_result(SSL *ssl)

{
  long lVar1;
  
                    /* try { // try from 00ad98dc to 00bd9923 has its CatchHandler @ 00ad98dc
                       catch() { ... } // from try @ 00ad98dc with catch @ 00ad98dc
                       catch() { ... } // from try @ 00ad9964 with catch @ 00ad98dc */
  lVar1._0_4_ = ssl->first_packet;
  lVar1._4_4_ = ssl->client_version;
  return lVar1;
}

