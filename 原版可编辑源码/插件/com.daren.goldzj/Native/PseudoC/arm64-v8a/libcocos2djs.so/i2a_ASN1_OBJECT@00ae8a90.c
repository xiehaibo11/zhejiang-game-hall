
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
                    /* try { // try from 00ae8b78 to 00be8b9b has its CatchHandler @ 00ae8b08 */
      if (iVar1 < 1) {
                    /* try { // try from 00ae8b9c to 00be8ba7 has its CatchHandler @ 00ae8c6c */
                    /* try { // try from 00ae8ba8 to 00be8bcf has its CatchHandler @ 00ae8b08 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae8b78 with catch @ 00ae8b08
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8ba8 with catch @ 00ae8b08
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8bd8 with catch @ 00ae8b08
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8c00 with catch @ 00ae8b08
                       catch(type#1 @ 00000000) { ... } // from try @ 00ae8c2c with catch @ 00ae8b08
                        */
        OBJ_obj2txt(buf,iVar1 + 1,a,0);
        BIO_write(bp,buf,iVar1);
        if (buf != acStack_90) {
          CRYPTO_free(buf);
        }
      }
    }
  }
                    /* try { // try from 00ae8b70 to 00be8b77 has its CatchHandler @ 00ae8c6c */
  return iVar1;
}

