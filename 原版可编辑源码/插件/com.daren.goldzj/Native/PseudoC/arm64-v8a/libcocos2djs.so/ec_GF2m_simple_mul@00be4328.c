
uint ec_GF2m_simple_mul(EC_GROUP *param_1,EC_POINT *param_2,long param_3,ulong param_4,long param_5,
                       long param_6,BN_CTX *param_7)

{
  int iVar1;
  EC_POINT *point;
  EC_POINT *point_00;
  BN_CTX *c;
  uint uVar2;
  ulong uVar3;
  
  if (param_7 == (BN_CTX *)0x0) {
    c = BN_CTX_new();
    param_7 = c;
    if (c == (BN_CTX *)0x0) {
      return 0;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  if (((param_4 < 3) && (param_3 == 0 || param_4 < 2)) &&
     ((param_4 != 0 || (iVar1 = EC_GROUP_have_precompute_mult(param_1), iVar1 == 0)))) {
    point = EC_POINT_new(param_1);
    if (point != (EC_POINT *)0x0) {
      point_00 = EC_POINT_new(param_1);
      if (((point_00 == (EC_POINT *)0x0) ||
          (iVar1 = EC_POINT_set_to_infinity(param_1,point_00), iVar1 == 0)) ||
         ((param_3 != 0 &&
          ((iVar1 = FUN_00be455c(param_1,point,param_3,*(undefined8 *)(param_1 + 8),param_7),
           iVar1 == 0 ||
           (((iVar1 = BN_is_negative(param_3), iVar1 != 0 &&
             (iVar1 = (**(code **)(*(long *)param_1 + 0xc0))(param_1,point,param_7), iVar1 == 0)) ||
            (iVar1 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,point_00,point_00,point,param_7)
            , iVar1 == 0)))))))) {
LAB_00be44d4:
        uVar2 = 0;
      }
      else {
        if (param_4 != 0) {
          uVar3 = 0;
          do {
            iVar1 = FUN_00be455c(param_1,point,*(undefined8 *)(param_6 + uVar3 * 8),
                                 *(undefined8 *)(param_5 + uVar3 * 8),param_7);
            if (((iVar1 == 0) ||
                ((iVar1 = BN_is_negative(*(undefined8 *)(param_6 + uVar3 * 8)), iVar1 != 0 &&
                 (iVar1 = (**(code **)(*(long *)param_1 + 0xc0))(param_1,point,param_7), iVar1 == 0)
                 ))) || (iVar1 = (**(code **)(*(long *)param_1 + 0xb0))
                                           (param_1,point_00,point_00,point,param_7), iVar1 == 0))
            goto LAB_00be44d4;
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_4);
        }
        iVar1 = EC_POINT_copy(param_2,point_00);
        uVar2 = (uint)(iVar1 != 0);
      }
      goto LAB_00be4514;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = ec_wNAF_mul(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    point = (EC_POINT *)0x0;
  }
  point_00 = (EC_POINT *)0x0;
LAB_00be4514:
  EC_POINT_free(point);
  EC_POINT_free(point_00);
  BN_CTX_free(c);
  return uVar2;
}

