
ASN1_BIT_STRING * c2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a,uchar **pp,long length)

{
  byte bVar1;
  uchar *__dest;
  ASN1_BIT_STRING *a_00;
  byte *__src;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = (int)length + -1;
  if (length < 1) {
    a_00 = (ASN1_STRING *)0x0;
    iVar2 = 0x98;
  }
  else {
    if (((a == (ASN1_BIT_STRING **)0x0) || (a_00 = *a, a_00 == (ASN1_BIT_STRING *)0x0)) &&
       (a_00 = ASN1_BIT_STRING_new(), a_00 == (ASN1_BIT_STRING *)0x0)) {
      return (ASN1_BIT_STRING *)0x0;
    }
    pbVar3 = *pp;
    __src = pbVar3 + 1;
    bVar1 = *pbVar3;
    if (bVar1 < 8) {
      a_00->flags = a_00->flags & 0xfffffffffffffff0U | (ulong)(bVar1 | 8);
      if (length < 2) {
        __dest = (uchar *)0x0;
      }
      else {
        __dest = CRYPTO_malloc(iVar2,"crypto/asn1/a_bitstr.c",0x6f);
        if (__dest == (uchar *)0x0) {
                    /* try { // try from 00b89164 to 00c891cf has its CatchHandler @ 00b89164
                       catch() { ... } // from try @ 00b89164 with catch @ 00b89164
                       catch() { ... } // from try @ 00b891f4 with catch @ 00b89164 */
          iVar2 = 0x41;
          goto LAB_00b8906c;
        }
        memcpy(__dest,__src,(long)iVar2);
        __src = pbVar3 + length;
        __dest[length + -2] = (byte)(0xff << (ulong)(bVar1 & 0x1f)) & __dest[length + -2];
      }
      a_00->length = iVar2;
      CRYPTO_free(a_00->data);
      a_00->data = __dest;
      a_00->type = 3;
      if (a != (ASN1_BIT_STRING **)0x0) {
        *a = a_00;
      }
      *pp = __src;
      return a_00;
    }
    iVar2 = 0xdc;
  }
LAB_00b8906c:
  ERR_put_error(0xd,0xbd,iVar2,"crypto/asn1/a_bitstr.c",0x83);
  if ((a == (ASN1_BIT_STRING **)0x0) || (*a != a_00)) {
    ASN1_BIT_STRING_free(a_00);
  }
  return (ASN1_BIT_STRING *)0x0;
}

