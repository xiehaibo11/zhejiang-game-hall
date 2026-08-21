
int X509_load_crl_file(X509_LOOKUP *ctx,char *file,int type)

{
  int iVar1;
  int iVar2;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar3;
  X509_CRL *x;
  ulong uVar4;
  
  if (file == (char *)0x0) {
    return 1;
  }
  type_00 = BIO_s_file();
  bp = BIO_new(type_00);
                    /* try { // try from 00b588f0 to 00c588ff has its CatchHandler @ 00b58b40 */
  if ((bp == (BIO *)0x0) || (lVar3 = BIO_ctrl(bp,0x6c,3,file), (int)lVar3 < 1)) {
    iVar2 = 2;
    iVar1 = 0x90;
    goto LAB_00b58988;
  }
  if (type == 2) {
    x = d2i_X509_CRL_bio(bp,(X509_CRL **)0x0);
    if (x == (X509_CRL *)0x0) {
      ERR_put_error(0xb,0x70,0xd,"crypto/x509/by_file.c",0xac);
      iVar2 = 0;
    }
    else {
      iVar2 = X509_STORE_add_crl(ctx->store_ctx,x);
    }
    goto LAB_00b58994;
  }
  if (type == 1) {
    x = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar2 = 0;
    while (x != (X509_CRL *)0x0) {
      iVar1 = X509_STORE_add_crl(ctx->store_ctx,x);
      if (iVar1 == 0) {
        iVar2 = 0;
        goto LAB_00b58994;
      }
      iVar2 = iVar2 + 1;
      X509_CRL_free(x);
      x = PEM_read_bio_X509_CRL(bp,(X509_CRL **)0x0,(undefined1 *)0x0,(void *)0x0);
    }
    uVar4 = ERR_peek_last_error();
                    /* try { // try from 00b58a10 to 00c58a1f has its CatchHandler @ 00b58b58 */
    if ((iVar2 < 1) || ((uVar4 & 0xfff) != 0x6c)) {
      iVar2 = 9;
      iVar1 = 0x9d;
      goto LAB_00b58988;
    }
    ERR_clear_error();
                    /* try { // try from 00b58a20 to 00c58a2f has its CatchHandler @ 00b58b54 */
  }
  else {
    iVar2 = 100;
    iVar1 = 0xb4;
LAB_00b58988:
    ERR_put_error(0xb,0x70,iVar2,"crypto/x509/by_file.c",iVar1);
    iVar2 = 0;
  }
  x = (X509_CRL *)0x0;
LAB_00b58994:
  X509_CRL_free(x);
  BIO_free(bp);
                    /* try { // try from 00b589b0 to 00c589b7 has its CatchHandler @ 00b58b44 */
                    /* try { // try from 00b589b8 to 00c58a0f has its CatchHandler @ 00b587dc */
  return iVar2;
}

