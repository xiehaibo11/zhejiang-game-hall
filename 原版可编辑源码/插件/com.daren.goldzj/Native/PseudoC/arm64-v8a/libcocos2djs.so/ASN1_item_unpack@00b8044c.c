
void * ASN1_item_unpack(ASN1_STRING *oct,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  uchar *local_18;
  
  local_18 = oct->data;
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,(long)oct->length,it);
  if (pAVar1 == (ASN1_VALUE *)0x0) {
    ERR_put_error(0xd,199,0x6e,"crypto/asn1/asn_pack.c",0x3c);
  }
  return pAVar1;
}

