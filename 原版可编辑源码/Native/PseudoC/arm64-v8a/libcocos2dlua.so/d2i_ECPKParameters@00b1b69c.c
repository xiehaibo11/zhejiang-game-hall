
EC_GROUP * d2i_ECPKParameters(EC_GROUP **param_1,uchar **in,long len)

{
  ASN1_VALUE *val;
  EC_GROUP *pEVar1;
  uchar *local_38;
  
  local_38 = *in;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_38,len,(ASN1_ITEM *)ECPKPARAMETERS_it);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0x10,0x91,0x75,"crypto/ec/ec_asn1.c",0x36b);
    ASN1_item_free((ASN1_VALUE *)0x0,(ASN1_ITEM *)ECPKPARAMETERS_it);
    pEVar1 = (EC_GROUP *)0x0;
  }
  else {
    pEVar1 = (EC_GROUP *)EC_GROUP_new_from_ecpkparameters(val);
    if (pEVar1 == (EC_GROUP *)0x0) {
      ERR_put_error(0x10,0x91,0x7f,"crypto/ec/ec_asn1.c",0x371);
      ASN1_item_free(val,(ASN1_ITEM *)ECPKPARAMETERS_it);
    }
    else {
      if (param_1 != (EC_GROUP **)0x0) {
        EC_GROUP_clear_free(*param_1);
        *param_1 = pEVar1;
      }
      ASN1_item_free(val,(ASN1_ITEM *)ECPKPARAMETERS_it);
      *in = local_38;
    }
  }
  return pEVar1;
}

