
undefined8 X509_CRL_check_suiteb(long param_1,EVP_PKEY *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  EC_KEY *key;
  EC_GROUP *group;
  undefined8 uVar3;
  
  if ((param_3 & 0x30000) == 0) {
LAB_00b69d14:
    uVar3 = 0;
  }
  else {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 8));
    if ((param_2 != (EVP_PKEY *)0x0) && (iVar2 = EVP_PKEY_id(param_2), iVar2 == 0x198)) {
      key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(param_2);
      group = EC_KEY_get0_group(key);
      if (group != (EC_GROUP *)0x0) {
        iVar2 = EC_GROUP_get_curve_name(group);
        if (iVar2 == 0x19f) {
          if ((iVar1 != 0x31a) && (iVar1 != -1)) {
            return 0x3b;
          }
          param_3 = param_3 >> 0x10;
        }
        else {
          if (iVar2 != 0x2cb) {
            return 0x3a;
          }
          if ((iVar1 != 0x31b) && (iVar1 != -1)) {
            return 0x3b;
          }
          param_3 = param_3 >> 0x11;
        }
        if ((param_3 & 1) == 0) {
          return 0x3c;
        }
        goto LAB_00b69d14;
      }
    }
    uVar3 = 0x39;
  }
  return uVar3;
}

