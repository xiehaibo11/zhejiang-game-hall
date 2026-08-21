
void SSL_set_tmp_dh_callback(SSL *ssl,dh *dh)

{
                    /* try { // try from 00ad9a3c to 00bd9a4f has its CatchHandler @ 00ad9a9c */
                    /* WARNING: Could not recover jumptable at 0x00ad9a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00ad9a50 to 00bd9abb has its CatchHandler @ 00ad99d0 */
  (*ssl->method->ssl_version)(ssl,6,dh);
  return;
}

