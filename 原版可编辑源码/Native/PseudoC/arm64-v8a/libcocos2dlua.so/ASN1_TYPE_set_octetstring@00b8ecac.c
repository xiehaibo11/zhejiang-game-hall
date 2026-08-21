
int ASN1_TYPE_set_octetstring(ASN1_TYPE *a,uchar *data,int len)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  str = ASN1_OCTET_STRING_new();
  iVar1 = 0;
  if (str != (ASN1_OCTET_STRING *)0x0) {
                    /* try { // try from 00b8ecd4 to 00c8ecd7 has its CatchHandler @ 00b8ecf4 */
                    /* try { // try from 00b8ecd8 to 00c8ed07 has its CatchHandler @ 00b8eca0 */
    iVar1 = ASN1_OCTET_STRING_set(str,data,len);
    if (iVar1 == 0) {
      ASN1_OCTET_STRING_free(str);
      iVar1 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 00b8ecd4 with catch @ 00b8ecf4 */
      ASN1_TYPE_set(a,4,str);
      iVar1 = 1;
    }
  }
  return iVar1;
}

