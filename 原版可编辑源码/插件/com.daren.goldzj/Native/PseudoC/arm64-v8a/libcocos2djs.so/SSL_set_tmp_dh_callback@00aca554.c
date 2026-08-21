
void SSL_set_tmp_dh_callback(SSL *ssl,dh *dh)

{
                    /* WARNING: Could not recover jumptable at 0x00aca568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*ssl->method->ssl_version)(ssl,6,dh);
  return;
}

