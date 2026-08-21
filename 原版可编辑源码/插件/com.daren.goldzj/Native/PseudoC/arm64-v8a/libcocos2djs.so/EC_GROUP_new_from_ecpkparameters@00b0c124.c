
EC_GROUP * EC_GROUP_new_from_ecpkparameters(int *param_1)

{
  int iVar1;
  EC_GROUP *pEVar2;
  int line;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0x7c;
    line = 0x344;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 2) {
      return (EC_GROUP *)0x0;
    }
    if (iVar1 == 1) {
      pEVar2 = (EC_GROUP *)EC_GROUP_new_from_ecparameters(*(undefined8 *)(param_1 + 2));
      if (pEVar2 == (EC_GROUP *)0x0) {
        ERR_put_error(0x10,0x108,0x10,"crypto/ec/ec_asn1.c",0x354);
        return (EC_GROUP *)0x0;
      }
      EC_GROUP_set_asn1_flag(pEVar2,0);
      return pEVar2;
    }
    if (iVar1 == 0) {
      iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 2));
      pEVar2 = EC_GROUP_new_by_curve_name(iVar1);
      if (pEVar2 == (EC_GROUP *)0x0) {
        ERR_put_error(0x10,0x108,0x77,"crypto/ec/ec_asn1.c",0x34c);
        return (EC_GROUP *)0x0;
      }
      EC_GROUP_set_asn1_flag(pEVar2,1);
      return pEVar2;
    }
    iVar1 = 0x73;
    line = 0x35b;
  }
  ERR_put_error(0x10,0x108,iVar1,"crypto/ec/ec_asn1.c",line);
  return (EC_GROUP *)0x0;
}

