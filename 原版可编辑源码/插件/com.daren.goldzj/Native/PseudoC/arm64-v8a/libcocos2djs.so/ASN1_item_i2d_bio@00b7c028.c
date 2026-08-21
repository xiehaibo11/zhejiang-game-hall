
int ASN1_item_i2d_bio(ASN1_ITEM *it,BIO *out,void *x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  iVar1 = ASN1_item_i2d(x,&local_28,it);
  if (local_28 == (uchar *)0x0) {
    ERR_put_error(0xd,0xc0,0x41,"crypto/asn1/a_i2d_fp.c",0x5b);
    iVar1 = 0;
  }
  else {
    iVar2 = BIO_write(out,local_28,iVar1);
    if (iVar1 != iVar2) {
      iVar3 = 0;
      do {
        if (iVar2 < 1) {
          iVar1 = 0;
          goto LAB_00b7c0d4;
        }
        iVar3 = iVar2 + iVar3;
        iVar1 = iVar1 - iVar2;
        iVar2 = BIO_write(out,local_28 + iVar3,iVar1);
      } while (iVar1 != iVar2);
    }
    iVar1 = 1;
LAB_00b7c0d4:
    CRYPTO_free(local_28);
  }
  return iVar1;
}

