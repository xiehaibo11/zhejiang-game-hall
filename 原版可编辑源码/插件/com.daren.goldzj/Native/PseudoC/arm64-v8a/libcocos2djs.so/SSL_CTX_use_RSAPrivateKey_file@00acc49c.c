
int SSL_CTX_use_RSAPrivateKey_file(SSL_CTX *ctx,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  RSA *rsa;
  int line;
  
  type_00 = BIO_s_file();
  bp = BIO_new(type_00);
  if (bp == (BIO *)0x0) {
    iVar1 = 7;
    line = 0x1d0;
  }
  else {
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar2 < 1) {
      iVar1 = 2;
      line = 0x1d5;
    }
    else {
      if (type == 1) {
        rsa = PEM_read_bio_RSAPrivateKey
                        (bp,(RSA **)0x0,ctx->default_passwd_callback,
                         ctx->default_passwd_callback_userdata);
        iVar1 = 9;
      }
      else {
        if (type != 2) {
          iVar1 = 0x7c;
          line = 0x1e1;
          goto LAB_00acc5ac;
        }
        rsa = d2i_RSAPrivateKey_bio(bp,(RSA **)0x0);
        iVar1 = 0xd;
      }
      if (rsa != (RSA *)0x0) {
        iVar1 = SSL_CTX_use_RSAPrivateKey(ctx,rsa);
        RSA_free(rsa);
        goto LAB_00acc5b4;
      }
      line = 0x1e5;
    }
  }
LAB_00acc5ac:
  ERR_put_error(0x14,0xb3,iVar1,"ssl/ssl_rsa.c",line);
  iVar1 = 0;
LAB_00acc5b4:
  BIO_free(bp);
  return iVar1;
}

