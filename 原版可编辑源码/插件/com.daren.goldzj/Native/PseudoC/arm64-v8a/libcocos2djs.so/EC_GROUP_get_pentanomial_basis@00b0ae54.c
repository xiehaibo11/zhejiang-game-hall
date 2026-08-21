
undefined8
EC_GROUP_get_pentanomial_basis
          (EC_GROUP *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  EC_METHOD *meth;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (EC_GROUP *)0x0) {
    meth = EC_GROUP_method_of(param_1);
    iVar1 = EC_METHOD_get_field_type(meth);
    if ((((iVar1 == 0x197) && (*(int *)(param_1 + 0x48) != 0)) && (*(int *)(param_1 + 0x4c) != 0))
       && (((*(int *)(param_1 + 0x50) != 0 && (*(int *)(param_1 + 0x54) != 0)) &&
           (*(int *)(param_1 + 0x58) == 0)))) {
      if (param_2 != (int *)0x0) {
        *param_2 = *(int *)(param_1 + 0x54);
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + 0x50);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x4c);
      }
      uVar2 = 1;
    }
    else {
      ERR_put_error(0x10,0xc1,0x42,"crypto/ec/ec_asn1.c",0x46);
      uVar2 = 0;
    }
  }
  return uVar2;
}

