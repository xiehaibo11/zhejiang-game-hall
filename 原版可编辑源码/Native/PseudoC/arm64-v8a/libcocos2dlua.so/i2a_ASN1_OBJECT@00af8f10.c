
int i2a_ASN1_OBJECT(BIO *bp,ASN1_OBJECT *a)

{
  int iVar1;
  int iVar2;
  char *buf;
  char acStack_90 [80];
  
  if ((a == (ASN1_OBJECT *)0x0) || (a->data == (uchar *)0x0)) {
    iVar1 = BIO_write(bp,"NULL",4);
  }
  else {
    iVar1 = OBJ_obj2txt(acStack_90,0x50,a,0);
    if (iVar1 < 0x50) {
      if (iVar1 < 1) {
        iVar2 = BIO_write(bp,"<INVALID>",9);
        iVar1 = BIO_dump(bp,(char *)a->data,a->length);
        iVar1 = iVar1 + iVar2;
      }
      else {
        BIO_write(bp,acStack_90,iVar1);
      }
    }
    else {
      buf = CRYPTO_malloc(iVar1 + 1,"crypto/asn1/a_object.c",0xb6);
      if (buf == (char *)0x0) {
        iVar1 = -1;
      }
      else {
        OBJ_obj2txt(buf,iVar1 + 1,a,0);
        BIO_write(bp,buf,iVar1);
        if (buf != acStack_90) {
          CRYPTO_free(buf);
        }
      }
    }
  }
  return iVar1;
}

