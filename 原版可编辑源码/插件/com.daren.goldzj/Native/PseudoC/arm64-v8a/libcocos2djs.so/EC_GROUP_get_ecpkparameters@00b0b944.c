
ASN1_VALUE * EC_GROUP_get_ecpkparameters(EC_GROUP *param_1,ASN1_VALUE *param_2)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  
  if (param_2 == (ASN1_VALUE *)0x0) {
    param_2 = ASN1_item_new((ASN1_ITEM *)ECPKPARAMETERS_it);
    if (param_2 == (ASN1_VALUE *)0x0) {
      ERR_put_error(0x10,0x106,0x41,"crypto/ec/ec_asn1.c",0x22f);
      return (ASN1_VALUE *)0x0;
    }
  }
  else if (*(int *)param_2 == 1) {
    if (*(ASN1_VALUE **)(param_2 + 8) != (ASN1_VALUE *)0x0) {
      ASN1_item_free(*(ASN1_VALUE **)(param_2 + 8),(ASN1_ITEM *)ECPARAMETERS_it);
    }
  }
  else if (*(int *)param_2 == 0) {
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_2 + 8));
  }
  iVar1 = EC_GROUP_get_asn1_flag(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)param_2 = 1;
    pAVar2 = (ASN1_OBJECT *)EC_GROUP_get_ecparameters(param_1,0);
    *(ASN1_OBJECT **)(param_2 + 8) = pAVar2;
  }
  else {
    iVar1 = EC_GROUP_get_curve_name(param_1);
    if (iVar1 == 0) goto LAB_00b0ba08;
    *(undefined4 *)param_2 = 0;
    pAVar2 = OBJ_nid2obj(iVar1);
    *(ASN1_OBJECT **)(param_2 + 8) = pAVar2;
  }
  if (pAVar2 != (ASN1_OBJECT *)0x0) {
    return param_2;
  }
LAB_00b0ba08:
  ASN1_item_free(param_2,(ASN1_ITEM *)ECPKPARAMETERS_it);
  return (ASN1_VALUE *)0x0;
}

