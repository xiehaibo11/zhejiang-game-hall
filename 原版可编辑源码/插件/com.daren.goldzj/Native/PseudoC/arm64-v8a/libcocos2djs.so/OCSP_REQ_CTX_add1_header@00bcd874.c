
int OCSP_REQ_CTX_add1_header(OCSP_REQ_CTX *rctx,char *name,char *value)

{
  int iVar1;
  
  if ((((name == (char *)0x0) || (iVar1 = BIO_puts(*(BIO **)(rctx + 0x20),name), iVar1 < 1)) ||
      ((value != (char *)0x0 &&
       ((iVar1 = BIO_write(*(BIO **)(rctx + 0x20),": ",2), iVar1 != 2 ||
        (iVar1 = BIO_puts(*(BIO **)(rctx + 0x20),value), iVar1 < 1)))))) ||
     (iVar1 = BIO_write(*(BIO **)(rctx + 0x20),&DAT_018bc985,2), iVar1 != 2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    *(undefined4 *)rctx = 0x1009;
  }
  return iVar1;
}

