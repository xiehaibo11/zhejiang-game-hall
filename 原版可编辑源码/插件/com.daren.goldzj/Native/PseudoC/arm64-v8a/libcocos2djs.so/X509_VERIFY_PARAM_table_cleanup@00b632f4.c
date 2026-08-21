
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void X509_VERIFY_PARAM_table_cleanup(void)

{
  OPENSSL_sk_pop_free(DAT_01d3b218,X509_VERIFY_PARAM_free);
  DAT_01d3b218 = 0;
  return;
}

