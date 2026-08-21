
int ASN1_item_i2d(ASN1_VALUE *val,uchar **out,ASN1_ITEM *it)

{
  int num;
  uchar *puVar1;
  uchar *local_40;
  ASN1_VALUE *local_38;
  
  local_38 = val;
                    /* try { // try from 00aef108 to 00bef10f has its CatchHandler @ 00af053c */
  if ((out == (uchar **)0x0) || (*out != (uchar *)0x0)) {
    num = ASN1_item_ex_i2d(&local_38,out,it,-1,0);
  }
  else {
    num = ASN1_item_ex_i2d(&local_38,(uchar **)0x0,it,-1,0);
    if (0 < num) {
      puVar1 = CRYPTO_malloc(num,"crypto/asn1/tasn_enc.c",0x3f);
      if (puVar1 == (uchar *)0x0) {
        num = -1;
      }
      else {
        local_40 = puVar1;
        ASN1_item_ex_i2d(&local_38,&local_40,it,-1,0);
        *out = puVar1;
      }
    }
  }
  return num;
}

