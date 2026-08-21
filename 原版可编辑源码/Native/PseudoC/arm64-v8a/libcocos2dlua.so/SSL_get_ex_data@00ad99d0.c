
void * SSL_get_ex_data(SSL *ssl,int idx)

{
  void *pvVar1;
  
                    /* try { // try from 00ad99d0 to 00bd9a17 has its CatchHandler @ 00ad99d0
                       catch() { ... } // from try @ 00ad99d0 with catch @ 00ad99d0
                       catch() { ... } // from try @ 00ad9a50 with catch @ 00ad99d0 */
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)&ssl->max_send_fragment,idx);
  return pvVar1;
}

