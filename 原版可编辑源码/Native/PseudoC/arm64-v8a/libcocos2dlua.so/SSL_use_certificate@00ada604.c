
int SSL_use_certificate(SSL *ssl,X509 *x)

{
  int iVar1;
  int line;
  
  if (x == (X509 *)0x0) {
    iVar1 = 0x43;
    line = 0x18;
  }
  else {
    iVar1 = ssl_security_cert(ssl,0,x,0,1);
    if (iVar1 == 1) {
      iVar1 = FUN_00ada69c(ssl->verify_callback,x);
      return iVar1;
    }
    line = 0x1d;
                    /* try { // try from 00ada684 to 00bda68b has its CatchHandler @ 00ada720 */
  }
  ERR_put_error(0x14,0xc6,iVar1,"ssl/ssl_rsa.c",line);
                    /* try { // try from 00ada68c to 00bda6af has its CatchHandler @ 00ada568 */
  return 0;
}

