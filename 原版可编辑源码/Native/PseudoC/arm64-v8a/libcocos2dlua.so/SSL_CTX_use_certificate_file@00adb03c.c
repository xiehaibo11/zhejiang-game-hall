
int SSL_CTX_use_certificate_file(SSL_CTX *ctx,char *file,int type)

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
    iVar3 = 0x17d;
  }
  else {
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if (0 < (int)lVar2) {
      if (type == 1) {
        a = PEM_read_bio_X509(bp,(X509 **)0x0,ctx->default_passwd_callback,
                              ctx->default_passwd_callback_userdata);
        iVar1 = 9;
        if (a != (X509 *)0x0) goto LAB_00adb0ac;
LAB_00adb138:
        iVar3 = 0xad;
        line = 0x192;
      }
      else {
        if (type != 2) {
          iVar1 = 0x7c;
          iVar3 = 0x18d;
          goto LAB_00adb168;
        }
        a = d2i_X509_bio(bp,(X509 **)0x0);
        iVar1 = 0xd;
        if (a == (X509 *)0x0) goto LAB_00adb138;
LAB_00adb0ac:
        iVar1 = ssl_security_cert(0,ctx,a,0,1);
        if (iVar1 == 1) {
          iVar1 = FUN_00ada69c(ctx->mode,a);
          goto LAB_00adb174;
        }
        iVar3 = 0xab;
        line = 0x131;
      }
      ERR_put_error(0x14,iVar3,iVar1,"ssl/ssl_rsa.c",line);
      iVar1 = 0;
      goto LAB_00adb174;
    }
    iVar1 = 2;
    iVar3 = 0x182;
  }
LAB_00adb168:
  ERR_put_error(0x14,0xad,iVar1,"ssl/ssl_rsa.c",iVar3);
  iVar1 = 0;
  a = (X509 *)0x0;
LAB_00adb174:
  X509_free(a);
  BIO_free(bp);
  return iVar1;
}

