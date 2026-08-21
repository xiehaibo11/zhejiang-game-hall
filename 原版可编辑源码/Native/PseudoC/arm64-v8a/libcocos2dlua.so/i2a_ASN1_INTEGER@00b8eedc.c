
int i2a_ASN1_INTEGER(BIO *bp,ASN1_INTEGER *a)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char local_54;
  char local_53;
  
  if (a == (ASN1_INTEGER *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((a->type & 0x100) == 0) {
      uVar2 = 0;
      iVar1 = a->length;
    }
    else {
      uVar2 = 1;
      iVar1 = BIO_write(bp,"-",1);
      if (iVar1 != 1) {
        return -1;
      }
      iVar1 = a->length;
    }
    if (iVar1 == 0) {
      iVar1 = BIO_write(bp,&DAT_01472b58,2);
                    /* try { // try from 00b8ef2c to 00c8ef2f has its CatchHandler @ 00b8ef70 */
      uVar2 = uVar2 | 2;
      if (iVar1 != 2) {
        uVar2 = 0xffffffff;
      }
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8ef2c with catch @ 00b8ef70
                        */
      if (0 < iVar1) {
        lVar3 = 0;
        do {
          if ((lVar3 != 0) && ((int)lVar3 % 0x23 == 0)) {
            iVar1 = BIO_write(bp,&DAT_013f19c4,2);
            if (iVar1 != 2) {
              return -1;
            }
            uVar2 = uVar2 + 2;
          }
          local_54 = "0123456789ABCDEF"[a->data[lVar3] >> 4];
          local_53 = "0123456789ABCDEF"[(ulong)a->data[lVar3] & 0xf];
          iVar1 = BIO_write(bp,&local_54,2);
          if (iVar1 != 2) {
            return -1;
          }
          lVar3 = lVar3 + 1;
          uVar2 = uVar2 + 2;
        } while (lVar3 < a->length);
      }
    }
  }
  return uVar2;
}

