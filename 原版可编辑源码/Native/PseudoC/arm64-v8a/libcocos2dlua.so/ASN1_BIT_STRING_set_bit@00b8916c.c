
int ASN1_BIT_STRING_set_bit(ASN1_BIT_STRING *a,int n,int value)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  uchar *puVar7;
  int iVar8;
  
  iVar2 = n + 7;
  if (-1 < n) {
    iVar2 = n;
  }
  bVar4 = (byte)(1 << (ulong)(~n & 7));
  bVar3 = bVar4;
  if (value == 0) {
    bVar3 = 0;
  }
  if (a == (ASN1_BIT_STRING *)0x0) {
    return 0;
  }
  iVar2 = iVar2 >> 3;
  a->flags = a->flags & 0xfffffffffffffff0;
                    /* try { // try from 00b891d0 to 00c891db has its CatchHandler @ 00b892c4 */
  if ((a->length <= iVar2) || (puVar7 = a->data, puVar7 == (uchar *)0x0)) {
    if (value == 0) {
      return 1;
    }
    iVar8 = (int)((long)iVar2 + 1);
                    /* try { // try from 00b891ec to 00c891f3 has its CatchHandler @ 00b892bc */
                    /* try { // try from 00b891f4 to 00c892db has its CatchHandler @ 00b89164 */
    puVar7 = (uchar *)CRYPTO_clear_realloc
                                (a->data,(long)a->length,(long)iVar8,"crypto/asn1/a_bitstr.c",0x9f);
    if (puVar7 == (uchar *)0x0) {
      ERR_put_error(0xd,0xb7,0x41,"crypto/asn1/a_bitstr.c",0xa1);
      return 0;
    }
    __n = ((long)iVar2 + 1) - (long)a->length;
    if (0 < (int)__n) {
      memset(puVar7 + a->length,0,__n);
    }
    a->data = puVar7;
    a->length = iVar8;
  }
  puVar7[iVar2] = (bVar4 ^ 0xff) & puVar7[iVar2] | bVar3;
  if (0 < a->length) {
    lVar6 = (long)a->length;
    do {
      lVar5 = lVar6 + -1;
      if (a->data[lVar5] != '\0') {
        return 1;
      }
      a->length = (int)lVar5;
      bVar1 = 1 < lVar6;
      lVar6 = lVar5;
    } while (bVar1);
  }
  return 1;
}

