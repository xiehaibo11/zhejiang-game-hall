
int i2d_ECPKParameters(EC_GROUP *param_1,uchar **out)

{
  int iVar1;
  ASN1_VALUE *val;
  
  val = (ASN1_VALUE *)EC_GROUP_get_ecpkparameters(param_1,0);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0x10,0xbf,0x78,"crypto/ec/ec_asn1.c",0x385);
    iVar1 = 0;
  }
  else {
    iVar1 = ASN1_item_i2d(val,out,(ASN1_ITEM *)ECPKPARAMETERS_it);
    if (iVar1 == 0) {
      ERR_put_error(0x10,0xbf,0x79,"crypto/ec/ec_asn1.c",0x389);
    }
    ASN1_item_free(val,(ASN1_ITEM *)ECPKPARAMETERS_it);
  }
  return iVar1;
}

