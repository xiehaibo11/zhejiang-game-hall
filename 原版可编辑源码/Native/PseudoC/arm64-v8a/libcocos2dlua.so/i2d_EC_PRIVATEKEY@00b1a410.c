
int i2d_EC_PRIVATEKEY(ASN1_VALUE *param_1,uchar **param_2)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)&DAT_016aff88);
  return iVar1;
}

