
int SSL_use_certificate(SSL *ssl,X509 *x)

{
  int iVar1;
  int line;
  
                    /* try { // try from 00acb758 to 00bcb88b has its CatchHandler @ 00acb758
                       catch() { ... } // from try @ 00acb758 with catch @ 00acb758
                       catch() { ... } // from try @ 00acb894 with catch @ 00acb758 */
  if (x == (X509 *)0x0) {
    iVar1 = 0x43;
    line = 0x18;
  }
  else {
    iVar1 = ssl_security_cert(ssl,0,x,0,1);
    if (iVar1 == 1) {
      iVar1 = FUN_00acb7e8(ssl->verify_callback,x);
      return iVar1;
    }
    line = 0x1d;
  }
  ERR_put_error(0x14,0xc6,iVar1,"ssl/ssl_rsa.c",line);
  return 0;
}

