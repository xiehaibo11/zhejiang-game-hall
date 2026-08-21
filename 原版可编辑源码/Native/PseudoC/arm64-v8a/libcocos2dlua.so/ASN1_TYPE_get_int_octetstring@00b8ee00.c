
int ASN1_TYPE_get_int_octetstring(ASN1_TYPE *a,long *num,uchar *data,int max_len)

{
  int iVar1;
  int iVar2;
  ASN1_VALUE *val;
  void *__src;
  
                    /* try { // try from 00b8ee14 to 00c8ee17 has its CatchHandler @ 00b8ee88 */
  if ((a->type == 0x10) && ((a->value).ptr != (char *)0x0)) {
    val = (ASN1_VALUE *)ASN1_TYPE_unpack_sequence(&DAT_016c3880,a);
    if (val != (ASN1_VALUE *)0x0) {
      if (num != (long *)0x0) {
        *num = *(long *)val;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8ede4 with catch @ 00b8ee58
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8ed60 with catch @ 00b8ee5c
                        */
      iVar2 = ASN1_STRING_length(*(ASN1_STRING **)(val + 8));
      if (data != (uchar *)0x0) {
        iVar1 = iVar2;
        if (max_len <= iVar2) {
          iVar1 = max_len;
        }
        __src = (void *)ASN1_STRING_get0_data(*(long *)(val + 8));
        memcpy(data,__src,(long)iVar1);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8ee14 with catch @ 00b8ee88
                        */
      if (iVar2 != -1) goto LAB_00b8eeb8;
    }
  }
  else {
    val = (ASN1_VALUE *)0x0;
  }
  ERR_put_error(0xd,0x86,0x6d,"crypto/asn1/evp_asn1.c",0x6f);
  iVar2 = -1;
LAB_00b8eeb8:
  ASN1_item_free(val,(ASN1_ITEM *)&DAT_016c3880);
  return iVar2;
}

