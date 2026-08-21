
int SSL_use_certificate_ASN1(SSL *ssl,uchar *d,int len)

{
  int iVar1;
  X509 *a;
  uchar *local_28;
  
  local_28 = d;
  a = d2i_X509((X509 **)0x0,&local_28,(long)len);
  if (a == (X509 *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00acbb88 with catch @ 00acbb18
                       catch(type#1 @ 00000000) { ... } // from try @ 00acbbb8 with catch @ 00acbb18
                       catch(type#1 @ 00000000) { ... } // from try @ 00acbbe8 with catch @ 00acbb18
                       catch(type#1 @ 00000000) { ... } // from try @ 00acbc10 with catch @ 00acbb18
                       catch(type#1 @ 00000000) { ... } // from try @ 00acbc3c with catch @ 00acbb18
                        */
    ERR_put_error(0x14,199,0xd,"ssl/ssl_rsa.c",0x54);
    iVar1 = 0;
  }
  else {
    iVar1 = ssl_security_cert(ssl,0,a,0,1);
    if (iVar1 == 1) {
      iVar1 = FUN_00acb7e8(ssl->verify_callback,a);
    }
    else {
      ERR_put_error(0x14,0xc6,iVar1,"ssl/ssl_rsa.c",0x1d);
      iVar1 = 0;
    }
    X509_free(a);
  }
  return iVar1;
}

