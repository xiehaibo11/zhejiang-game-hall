
int ASN1_BIT_STRING_check(ASN1_BIT_STRING *a,uchar *flags,int flags_len)

{
  long lVar1;
  byte bVar2;
  
  if (a == (ASN1_BIT_STRING *)0x0) {
    return 1;
  }
  if (a->data != (uchar *)0x0) {
    if (0 < a->length) {
      lVar1 = 0;
      do {
        if (lVar1 < flags_len) {
          bVar2 = ~flags[lVar1];
        }
        else {
          bVar2 = 0xff;
        }
        bVar2 = bVar2 & a->data[lVar1];
      } while ((bVar2 == 0) && (lVar1 = lVar1 + 1, lVar1 < a->length));
      return (int)(bVar2 == 0);
    }
    return 1;
  }
  return 1;
}

