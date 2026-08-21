
undefined8 tls_construct_server_certificate(undefined8 param_1)

{
  long lVar1;
  int line;
  
                    /* try { // try from 00ae5e54 to 00be5ec7 has its CatchHandler @ 00ae5e54
                       catch() { ... } // from try @ 00ae5e54 with catch @ 00ae5e54
                       catch() { ... } // from try @ 00ae5ef0 with catch @ 00ae5e54 */
  lVar1 = ssl_get_server_send_pkey();
  if (lVar1 == 0) {
    line = 0xb9b;
  }
  else {
    lVar1 = ssl3_output_cert_chain(param_1,lVar1);
    if (lVar1 != 0) {
      return 1;
    }
    line = 0xba1;
  }
  ERR_put_error(0x14,0x176,0x44,"ssl/statem/statem_srvr.c",line);
  ossl_statem_set_error(param_1);
                    /* try { // try from 00ae5ec8 to 00be5eef has its CatchHandler @ 00ae5f40 */
  return 0;
}

