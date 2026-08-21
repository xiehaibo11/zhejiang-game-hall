
void * PEM_ASN1_read_bio(undefined1 *d2i,char *name,BIO *bp,void **x,undefined1 *cb,void *u)

{
  int iVar1;
  void *pvVar2;
  long local_38;
  uchar *local_30;
  uchar *local_28;
  
  local_30 = (uchar *)0x0;
  local_28 = (uchar *)0x0;
  iVar1 = PEM_bytes_read_bio(&local_30,&local_38,(char **)0x0,name,bp,cb,u);
  if (iVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    local_28 = local_30;
    pvVar2 = (void *)(*(code *)d2i)(x,&local_28,local_38);
    if (pvVar2 == (void *)0x0) {
      ERR_put_error(9,0x67,0xd,"crypto/pem/pem_oth.c",0x21);
    }
    CRYPTO_free(local_30);
  }
  return pvVar2;
}

