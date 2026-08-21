
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
                    /* try { // try from 00acc1b0 to 00bcc1b3 has its CatchHandler @ 00acc26c */
  if (bp == (BIO *)0x0) {
    iVar1 = 7;
    iVar3 = 0x17d;
  }
  else {
                    /* try { // try from 00acc1b4 to 00bcc25f has its CatchHandler @ 00acc034 */
    lVar2 = BIO_ctrl(bp,0x6c,3,file);
    if (0 < (int)lVar2) {
      if (type == 1) {
                    /* catch() { ... } // from try @ 00acc1b0 with catch @ 00acc26c
                       catch() { ... } // from try @ 00acc260 with catch @ 00acc26c
                       try { // try from 00acc26c to 00bcc283 has its CatchHandler @ 00acc034 */
        a = PEM_read_bio_X509(bp,(X509 **)0x0,ctx->default_passwd_callback,
                              ctx->default_passwd_callback_userdata);
        iVar1 = 9;
        if (a != (X509 *)0x0) goto LAB_00acc1f8;
LAB_00acc284:
        iVar3 = 0xad;
        line = 0x192;
      }
      else {
        if (type != 2) {
          iVar1 = 0x7c;
          iVar3 = 0x18d;
          goto LAB_00acc2b4;
        }
        a = d2i_X509_bio(bp,(X509 **)0x0);
        iVar1 = 0xd;
        if (a == (X509 *)0x0) goto LAB_00acc284;
LAB_00acc1f8:
        iVar1 = ssl_security_cert(0,ctx,a,0,1);
        if (iVar1 == 1) {
          iVar1 = FUN_00acb7e8(ctx->mode,a);
          goto LAB_00acc2c0;
        }
        iVar3 = 0xab;
        line = 0x131;
      }
      ERR_put_error(0x14,iVar3,iVar1,"ssl/ssl_rsa.c",line);
      iVar1 = 0;
      goto LAB_00acc2c0;
    }
    iVar1 = 2;
                    /* try { // try from 00acc260 to 00bcc26b has its CatchHandler @ 00acc26c */
    iVar3 = 0x182;
  }
LAB_00acc2b4:
  ERR_put_error(0x14,0xad,iVar1,"ssl/ssl_rsa.c",iVar3);
  iVar1 = 0;
  a = (X509 *)0x0;
LAB_00acc2c0:
  X509_free(a);
  BIO_free(bp);
  return iVar1;
}

