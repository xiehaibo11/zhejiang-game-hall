
int X509_load_cert_file(X509_LOOKUP *ctx,char *file,int type)

{
  int iVar1;
  int iVar2;
  BIO_METHOD *type_00;
  BIO *bp;
  long lVar3;
  X509 *x;
  ulong uVar4;
  
  if (file == (char *)0x0) {
    return 1;
  }
  type_00 = BIO_s_file();
  bp = BIO_new(type_00);
  if ((bp == (BIO *)0x0) || (lVar3 = BIO_ctrl(bp,0x6c,3,file), (int)lVar3 < 1)) {
    iVar2 = 2;
    iVar1 = 0x57;
    goto LAB_00b66c54;
  }
  if (type == 2) {
    x = d2i_X509_bio(bp,(X509 **)0x0);
    if (x == (X509 *)0x0) {
      ERR_put_error(0xb,0x6f,0xd,"crypto/x509/by_file.c",0x73);
      iVar2 = 0;
    }
    else {
      iVar2 = X509_STORE_add_cert(ctx->store_ctx,x);
    }
    goto LAB_00b66c60;
  }
  if (type == 1) {
    x = PEM_read_bio_X509_AUX(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    iVar2 = 0;
    while (x != (X509 *)0x0) {
      iVar1 = X509_STORE_add_cert(ctx->store_ctx,x);
      if (iVar1 == 0) {
        iVar2 = 0;
        goto LAB_00b66c60;
      }
      iVar2 = iVar2 + 1;
      X509_free(x);
      x = PEM_read_bio_X509_AUX(bp,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    }
    uVar4 = ERR_peek_last_error();
    if ((iVar2 < 1) || ((uVar4 & 0xfff) != 0x6c)) {
      iVar2 = 9;
      iVar1 = 100;
      goto LAB_00b66c54;
    }
    ERR_clear_error();
  }
  else {
    iVar2 = 100;
    iVar1 = 0x7b;
LAB_00b66c54:
    ERR_put_error(0xb,0x6f,iVar2,"crypto/x509/by_file.c",iVar1);
    iVar2 = 0;
  }
  x = (X509 *)0x0;
LAB_00b66c60:
  X509_free(x);
  BIO_free(bp);
  return iVar2;
}

