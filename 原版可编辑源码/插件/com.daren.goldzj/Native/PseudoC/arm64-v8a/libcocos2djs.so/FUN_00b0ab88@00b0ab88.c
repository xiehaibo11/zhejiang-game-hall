
EC_KEY * FUN_00b0ab88(int param_1,ASN1_OBJECT *param_2)

{
  int iVar1;
  EC_KEY *pEVar2;
  EC_GROUP *group;
  int line;
  char **local_28;
  
  if (param_1 == 6) {
    pEVar2 = EC_KEY_new();
    if (pEVar2 != (EC_KEY *)0x0) {
      iVar1 = OBJ_obj2nid(param_2);
      group = EC_GROUP_new_by_curve_name(iVar1);
      if (group != (EC_GROUP *)0x0) {
        EC_GROUP_set_asn1_flag(group,1);
        iVar1 = EC_KEY_set_group(pEVar2,group);
        if (iVar1 != 0) {
          EC_GROUP_free(group);
          return pEVar2;
        }
      }
      goto LAB_00b0ac70;
    }
    iVar1 = 0x41;
    line = 0x71;
  }
  else {
    if (param_1 != 0x10) {
      ERR_put_error(0x10,0xdc,0x8e,"crypto/ec/ec_ameth.c",0x7c);
      pEVar2 = (EC_KEY *)0x0;
      goto LAB_00b0ac70;
    }
    local_28 = param_2->ln;
    pEVar2 = d2i_ECParameters((EC_KEY **)0x0,(uchar **)&local_28,(long)*(int *)&param_2->sn);
    if (pEVar2 != (EC_KEY *)0x0) {
      return pEVar2;
    }
    iVar1 = 0x8e;
    line = 0x66;
    pEVar2 = (EC_KEY *)0x0;
  }
  ERR_put_error(0x10,0xdc,iVar1,"crypto/ec/ec_ameth.c",line);
LAB_00b0ac70:
  EC_KEY_free(pEVar2);
  return (EC_KEY *)0x0;
}

