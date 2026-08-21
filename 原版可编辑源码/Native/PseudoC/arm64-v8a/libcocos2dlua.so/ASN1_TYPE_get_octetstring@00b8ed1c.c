
int ASN1_TYPE_get_octetstring(ASN1_TYPE *a,uchar *data,int max_len)

{
  int iVar1;
  int iVar2;
  void *__src;
  
  if ((a->type == 4) && ((a->value).ptr != (char *)0x0)) {
    __src = (void *)ASN1_STRING_get0_data();
    iVar2 = ASN1_STRING_length((a->value).asn1_string);
                    /* try { // try from 00b8ed60 to 00c8ed63 has its CatchHandler @ 00b8ee5c */
    iVar1 = iVar2;
    if (max_len <= iVar2) {
      iVar1 = max_len;
    }
    memcpy(data,__src,(long)iVar1);
  }
  else {
    ERR_put_error(0xd,0x87,0x6d,"crypto/asn1/evp_asn1.c",0x24);
    iVar2 = -1;
  }
  return iVar2;
}

