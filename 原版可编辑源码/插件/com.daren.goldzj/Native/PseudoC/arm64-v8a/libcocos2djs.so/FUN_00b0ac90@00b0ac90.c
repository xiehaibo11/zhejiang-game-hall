
undefined8 FUN_00b0ac90(undefined4 *param_1,undefined8 *param_2,EC_KEY *param_3)

{
  int iVar1;
  EC_GROUP *group;
  ASN1_OBJECT *pAVar2;
  ASN1_STRING *a;
  undefined8 uVar3;
  int line;
  undefined4 uVar4;
  
  if ((param_3 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_3), group == (EC_GROUP *)0x0))
  {
    iVar1 = 0x7c;
    line = 0x1f;
LAB_00b0ad00:
    ERR_put_error(0x10,0xdf,iVar1,"crypto/ec/ec_ameth.c",line);
    uVar3 = 0;
  }
  else {
    iVar1 = EC_GROUP_get_asn1_flag(group);
    if ((iVar1 == 0) || (iVar1 = EC_GROUP_get_curve_name(group), iVar1 == 0)) {
      a = ASN1_STRING_new();
      if (a == (ASN1_STRING *)0x0) {
        return 0;
      }
      iVar1 = i2d_ECParameters(param_3,&a->data);
      a->length = iVar1;
      if (iVar1 < 1) {
        ASN1_STRING_free(a);
        iVar1 = 0x10;
        line = 0x31;
        goto LAB_00b0ad00;
      }
      uVar4 = 0x10;
      *param_2 = a;
    }
    else {
      pAVar2 = OBJ_nid2obj(iVar1);
      *param_2 = pAVar2;
      uVar4 = 6;
    }
    uVar3 = 1;
    *param_1 = uVar4;
  }
  return uVar3;
}

