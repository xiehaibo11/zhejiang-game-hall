
int i2a_ASN1_STRING(BIO *bp,ASN1_STRING *a,int type)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char local_54;
  char local_53;
  
  if (a != (ASN1_STRING *)0x0) {
    if (a->length == 0) {
      iVar2 = BIO_write(bp,"0",1);
      if (iVar2 != 1) {
        return -1;
      }
      return 1;
    }
    if (0 < a->length) {
      lVar3 = 0;
      iVar2 = 0;
      while( true ) {
        if ((lVar3 != 0) && ((int)lVar3 % 0x23 == 0)) {
          iVar1 = BIO_write(bp,&DAT_018c34f8,2);
          if (iVar1 != 2) {
            return -1;
          }
          iVar2 = iVar2 + 2;
        }
        local_54 = "0123456789ABCDEF"[a->data[lVar3] >> 4];
        local_53 = "0123456789ABCDEF"[(ulong)a->data[lVar3] & 0xf];
        iVar1 = BIO_write(bp,&local_54,2);
        if (iVar1 != 2) break;
        lVar3 = lVar3 + 1;
        iVar2 = iVar2 + 2;
        if (a->length <= lVar3) {
          return iVar2;
        }
      }
      return -1;
    }
  }
  return 0;
}

