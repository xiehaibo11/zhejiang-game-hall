
int SSL_use_certificate_file(SSL *ssl,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  X509 *a;
  int iVar3;
  int line;
  
  type_00 = BIO_s_file();
  bp = BIO_new(type_00);
  if (bp == (BIO *)0x0) {
    iVar1 = 7;
    iVar3 = 0x2d;
  }
  else {
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if (0 < (int)lVar2) {
      if (type == 1) {
        a = PEM_read_bio_X509(bp,(X509 **)0x0,*(undefined1 **)(ssl->mode + 0xa8),
                              *(void **)(ssl->mode + 0xb0));
        iVar1 = 9;
        if (a != (X509 *)0x0) goto LAB_00acb99c;
LAB_00acba2c:
        iVar3 = 200;
        line = 0x42;
      }
      else {
        if (type != 2) {
          iVar1 = 0x7c;
          iVar3 = 0x3d;
          goto LAB_00acba5c;
        }
        a = d2i_X509_bio(bp,(X509 **)0x0);
        iVar1 = 0xd;
        if (a == (X509 *)0x0) goto LAB_00acba2c;
LAB_00acb99c:
        iVar1 = ssl_security_cert(ssl,0,a,0,1);
        if (iVar1 == 1) {
          iVar1 = FUN_00acb7e8(ssl->verify_callback,a);
          goto LAB_00acba68;
        }
        iVar3 = 0xc6;
        line = 0x1d;
      }
      ERR_put_error(0x14,iVar3,iVar1,"ssl/ssl_rsa.c",line);
      iVar1 = 0;
      goto LAB_00acba68;
    }
    iVar1 = 2;
    iVar3 = 0x32;
  }
LAB_00acba5c:
  ERR_put_error(0x14,200,iVar1,"ssl/ssl_rsa.c",iVar3);
  iVar1 = 0;
  a = (X509 *)0x0;
LAB_00acba68:
  X509_free(a);
  BIO_free(bp);
  return iVar1;
}

