
int SSL_use_PrivateKey_file(SSL *ssl,char *file,int type)

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
    line = 0xf6;
  }
  else {
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar2 < 1) {
      iVar1 = 2;
      line = 0xfb;
    }
    else {
      if (type == 2) {
        pkey = d2i_PrivateKey_bio(bp,(EVP_PKEY **)0x0);
        iVar1 = 0xd;
      }
      else {
        if (type != 1) {
          iVar1 = 0x7c;
          line = 0x108;
          goto LAB_00acc050;
        }
        pkey = PEM_read_bio_PrivateKey
                         (bp,(EVP_PKEY **)0x0,*(undefined1 **)(ssl->mode + 0xa8),
                          *(void **)(ssl->mode + 0xb0));
        iVar1 = 9;
      }
      if (pkey != (EVP_PKEY *)0x0) {
        iVar1 = FUN_00acbc44(ssl->verify_callback,pkey);
        EVP_PKEY_free(pkey);
        goto LAB_00acc058;
      }
      line = 0x10c;
                    /* try { // try from 00acc034 to 00bcc1af has its CatchHandler @ 00acc034
                       catch() { ... } // from try @ 00acc034 with catch @ 00acc034
                       catch() { ... } // from try @ 00acc1b4 with catch @ 00acc034
                       catch() { ... } // from try @ 00acc26c with catch @ 00acc034 */
    }
  }
LAB_00acc050:
  ERR_put_error(0x14,0xcb,iVar1,"ssl/ssl_rsa.c",line);
  iVar1 = 0;
LAB_00acc058:
  BIO_free(bp);
  return iVar1;
}

