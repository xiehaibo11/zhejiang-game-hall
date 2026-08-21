
void * ASN1_item_unpack(ASN1_STRING *oct,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  uchar *local_18;
  
  local_18 = oct->data;
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,(long)oct->length,it);
  if (pAVar1 == (ASN1_VALUE *)0x0) {
    ERR_put_error(0xd,199,0x6e,"crypto/asn1/asn_pack.c",0x3c);
  }
                    /* try { // try from 00b8eca0 to 00c8ecd3 has its CatchHandler @ 00b8eca0
                       catch() { ... } // from try @ 00b8eca0 with catch @ 00b8eca0
                       catch() { ... } // from try @ 00b8ecd8 with catch @ 00b8eca0 */
  return pAVar1;
}

