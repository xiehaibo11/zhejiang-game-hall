
int ASN1_STRING_set(ASN1_STRING *str,void *data,int len)

{
  size_t sVar1;
  uchar *__dest;
  uchar *addr;
  
  if (len < 0) {
    if (data == (void *)0x0) {
      return 0;
    }
    sVar1 = strlen(data);
    len = (int)sVar1;
  }
  __dest = str->data;
  addr = __dest;
  if (len < str->length) {
    if (__dest != (uchar *)0x0) goto LAB_00aec210;
    addr = (uchar *)0x0;
  }
  __dest = CRYPTO_realloc(addr,len + 1,"crypto/asn1/asn1_lib.c",0x115);
  str->data = __dest;
  if (__dest == (uchar *)0x0) {
    ERR_put_error(0xd,0xba,0x41,"crypto/asn1/asn1_lib.c",0x117);
    str->data = addr;
    return 0;
  }
LAB_00aec210:
  str->length = len;
                    /* catch() { ... } // from try @ 00aec138 with catch @ 00aec214 */
  if (data != (void *)0x0) {
    memcpy(__dest,data,(long)len);
    str->data[len] = '\0';
  }
  return 1;
}

