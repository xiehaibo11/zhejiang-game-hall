
int SSL_use_RSAPrivateKey_file(SSL *ssl,char *file,int type)

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
    line = 0xb0;
  }
  else {
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar2 < 1) {
      iVar1 = 2;
      line = 0xb5;
    }
    else {
      if (type == 1) {
        rsa = PEM_read_bio_RSAPrivateKey
                        (bp,(RSA **)0x0,*(undefined1 **)(ssl->mode + 0xa8),
                         *(void **)(ssl->mode + 0xb0));
                    /* try { // try from 00acbe24 to 00bcbe27 has its CatchHandler @ 00acbe9c */
                    /* try { // try from 00acbe28 to 00bcbebf has its CatchHandler @ 00acbda8 */
        iVar1 = 9;
      }
      else {
        if (type != 2) {
          iVar1 = 0x7c;
          line = 0xc2;
          goto LAB_00acbe60;
        }
                    /* try { // try from 00acbda8 to 00bcbe23 has its CatchHandler @ 00acbda8
                       catch() { ... } // from try @ 00acbda8 with catch @ 00acbda8
                       catch() { ... } // from try @ 00acbe28 with catch @ 00acbda8 */
        rsa = d2i_RSAPrivateKey_bio(bp,(RSA **)0x0);
        iVar1 = 0xd;
      }
      if (rsa != (RSA *)0x0) {
        iVar1 = SSL_use_RSAPrivateKey(ssl,rsa);
        RSA_free(rsa);
        goto LAB_00acbe68;
      }
      line = 0xc6;
    }
  }
LAB_00acbe60:
  ERR_put_error(0x14,0xce,iVar1,"ssl/ssl_rsa.c",line);
  iVar1 = 0;
LAB_00acbe68:
  BIO_free(bp);
  return iVar1;
}

