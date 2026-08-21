
DH * PEM_read_bio_DHparams(BIO *bp,DH **x,undefined1 *cb,void *u)

{
  int iVar1;
  DH *pDVar2;
  long local_40;
  uchar *local_38;
  uchar *local_30;
  char *local_28;
  
  local_30 = (uchar *)0x0;
  local_28 = (char *)0x0;
  local_38 = (uchar *)0x0;
  iVar1 = PEM_bytes_read_bio(&local_38,&local_40,&local_28,"DH PARAMETERS",bp,cb,u);
  if (iVar1 == 0) {
    pDVar2 = (DH *)0x0;
  }
  else {
    local_30 = local_38;
    iVar1 = strcmp(local_28,"X9.42 DH PARAMETERS");
    if (iVar1 == 0) {
      pDVar2 = (DH *)d2i_DHxparams(x);
    }
    else {
      pDVar2 = d2i_DHparams(x,&local_30,local_40);
    }
    if (pDVar2 == (DH *)0x0) {
      ERR_put_error(9,0x8d,0xd,"crypto/pem/pem_pkey.c",0xdc);
    }
    CRYPTO_free(local_28);
    CRYPTO_free(local_38);
  }
  return pDVar2;
}

