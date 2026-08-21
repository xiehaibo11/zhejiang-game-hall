
int i2d_RSA_OAEP_PARAMS(ASN1_VALUE *param_1,uchar **param_2)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)RSA_OAEP_PARAMS_it);
  return iVar1;
}

