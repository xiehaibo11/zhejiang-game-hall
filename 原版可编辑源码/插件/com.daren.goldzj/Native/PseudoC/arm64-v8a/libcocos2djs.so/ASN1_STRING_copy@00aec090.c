
int ASN1_STRING_copy(ASN1_STRING *dst,ASN1_STRING *str)

{
  int iVar1;
  uchar *__dest;
  ulong uVar3;
  uchar *__s;
  uchar *addr;
  size_t sVar2;
  
  if (str == (ASN1_STRING *)0x0) {
    return 0;
  }
  dst->type = str->type;
  iVar1 = str->length;
  __s = str->data;
  if (iVar1 < 0) {
    if (__s == (uchar *)0x0) {
      return 0;
    }
    sVar2 = strlen((char *)__s);
    iVar1 = (int)sVar2;
  }
  __dest = dst->data;
  addr = __dest;
  if (iVar1 < dst->length) {
    if (__dest != (uchar *)0x0) goto LAB_00aec120;
    addr = (uchar *)0x0;
                    /* try { // try from 00aec0ec to 00bec0f3 has its CatchHandler @ 00aec27c */
  }
  __dest = CRYPTO_realloc(addr,iVar1 + 1,"crypto/asn1/asn1_lib.c",0x115);
  dst->data = __dest;
  if (__dest == (uchar *)0x0) {
    ERR_put_error(0xd,0xba,0x41,"crypto/asn1/asn1_lib.c",0x117);
    dst->data = addr;
    return 0;
  }
LAB_00aec120:
  dst->length = iVar1;
  if (__s != (uchar *)0x0) {
    memcpy(__dest,__s,(long)iVar1);
                    /* try { // try from 00aec138 to 00bec143 has its CatchHandler @ 00aec214 */
    dst->data[iVar1] = '\0';
  }
                    /* try { // try from 00aec144 to 00bec317 has its CatchHandler @ 00aebec4 */
  uVar3 = dst->flags & 0x80;
  dst->flags = uVar3;
  dst->flags = str->flags & 0xffffffffffffff7fU | uVar3;
  return 1;
}

