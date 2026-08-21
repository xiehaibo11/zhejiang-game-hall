
int SSL_CTX_use_PrivateKey_file(SSL_CTX *ctx,char *file,int type)

{
  int iVar1;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar2;
  EVP_PKEY *pkey;
  int line;
  
  type_00 = BIO_s_file();
  bp = BIO_new(type_00);
  if (bp == (BIO *)0x0) {
    iVar1 = 7;
    line = 0x213;
  }
  else {
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar2 < 1) {
      iVar1 = 2;
      line = 0x218;
    }
    else {
      if (type == 2) {
        pkey = d2i_PrivateKey_bio(bp,(EVP_PKEY **)0x0);
        iVar1 = 0xd;
      }
      else {
        if (type != 1) {
          iVar1 = 0x7c;
          line = 0x224;
          goto LAB_00acc798;
        }
        pkey = PEM_read_bio_PrivateKey
                         (bp,(EVP_PKEY **)0x0,ctx->default_passwd_callback,
                          ctx->default_passwd_callback_userdata);
        iVar1 = 9;
      }
      if (pkey != (EVP_PKEY *)0x0) {
        iVar1 = FUN_00acbc44(ctx->mode,pkey);
        EVP_PKEY_free(pkey);
        goto LAB_00acc7a0;
      }
      line = 0x228;
    }
  }
LAB_00acc798:
  ERR_put_error(0x14,0xb0,iVar1,"ssl/ssl_rsa.c",line);
  iVar1 = 0;
LAB_00acc7a0:
  BIO_free(bp);
  return iVar1;
}

