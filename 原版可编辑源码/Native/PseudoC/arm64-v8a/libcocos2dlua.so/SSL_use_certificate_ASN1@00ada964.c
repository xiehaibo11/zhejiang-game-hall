
int SSL_use_certificate_ASN1(SSL *ssl,uchar *d,int len)

{
  int iVar1;
  X509 *a;
  uchar *local_28;
  
  local_28 = d;
  a = d2i_X509((X509 **)0x0,&local_28,(long)len);
  if (a == (X509 *)0x0) {
    ERR_put_error(0x14,199,0xd,"ssl/ssl_rsa.c",0x54);
    iVar1 = 0;
  }
  else {
    iVar1 = ssl_security_cert(ssl,0,a,0,1);
                    /* try { // try from 00ada9ac to 00bda9f7 has its CatchHandler @ 00ada9ac
                       catch() { ... } // from try @ 00ada9ac with catch @ 00ada9ac
                       catch() { ... } // from try @ 00adaa48 with catch @ 00ada9ac */
    if (iVar1 == 1) {
      iVar1 = FUN_00ada69c(ssl->verify_callback,a);
    }
    else {
                    /* try { // try from 00ada9f8 to 00bdaa0f has its CatchHandler @ 00adaadc */
      ERR_put_error(0x14,0xc6,iVar1,"ssl/ssl_rsa.c",0x1d);
      iVar1 = 0;
    }
                    /* try { // try from 00adaa14 to 00bdaa23 has its CatchHandler @ 00adaad8 */
    X509_free(a);
  }
  return iVar1;
}

