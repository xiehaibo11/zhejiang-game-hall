
undefined8 tls_construct_server_certificate(undefined8 param_1)

{
  long lVar1;
  int line;
  
                    /* try { // try from 00ad6f94 to 00bd715f has its CatchHandler @ 00ad6f94
                       catch() { ... } // from try @ 00ad6f94 with catch @ 00ad6f94
                       catch() { ... } // from try @ 00ad7168 with catch @ 00ad6f94
                       catch() { ... } // from try @ 00ad71a8 with catch @ 00ad6f94
                       catch() { ... } // from try @ 00ad7200 with catch @ 00ad6f94 */
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
  return 0;
}

