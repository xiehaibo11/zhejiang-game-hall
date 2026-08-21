
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
                    /* catch() { ... } // from try @ 00adb508 with catch @ 00adb5e0 */
    line = 0x213;
  }
  else {
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar2 < 1) {
      iVar1 = 2;
      line = 0x218;
                    /* catch() { ... } // from try @ 00adb4f8 with catch @ 00adb600 */
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
          goto LAB_00adb64c;
        }
        pkey = PEM_read_bio_PrivateKey
                         (bp,(EVP_PKEY **)0x0,ctx->default_passwd_callback,
                          ctx->default_passwd_callback_userdata);
                    /* catch() { ... } // from try @ 00adb520 with catch @ 00adb5a8 */
        iVar1 = 9;
      }
      if (pkey != (EVP_PKEY *)0x0) {
        iVar1 = FUN_00adaaf8(ctx->mode,pkey);
        EVP_PKEY_free(pkey);
        goto LAB_00adb654;
      }
                    /* try { // try from 00adb61c to 00bdb65f has its CatchHandler @ 00adb61c
                       catch() { ... } // from try @ 00adb61c with catch @ 00adb61c
                       catch() { ... } // from try @ 00adb778 with catch @ 00adb61c */
      line = 0x228;
    }
  }
LAB_00adb64c:
  ERR_put_error(0x14,0xb0,iVar1,"ssl/ssl_rsa.c",line);
  iVar1 = 0;
LAB_00adb654:
  BIO_free(bp);
                    /* try { // try from 00adb660 to 00bdb66b has its CatchHandler @ 00adb854 */
  return iVar1;
}

