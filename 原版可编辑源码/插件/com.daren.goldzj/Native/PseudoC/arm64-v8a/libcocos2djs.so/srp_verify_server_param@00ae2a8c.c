
undefined8 srp_verify_server_param(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = BN_ucmp(*(BIGNUM **)(param_1 + 0x348),*(BIGNUM **)(param_1 + 0x340));
  if (((iVar1 < 0) &&
      (iVar1 = BN_ucmp(*(BIGNUM **)(param_1 + 0x358),*(BIGNUM **)(param_1 + 0x340)), iVar1 < 0)) &&
     (iVar1 = BN_is_zero(*(undefined8 *)(param_1 + 0x358)), iVar1 == 0)) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x340));
    if (*(int *)(param_1 + 0x388) <= iVar1) {
      if (*(code **)(param_1 + 0x328) == (code *)0x0) {
        lVar2 = SRP_check_known_gN_param
                          (*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_1 + 0x340));
        if (lVar2 != 0) {
          return 1;
        }
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x328))(param_1,*(undefined8 *)(param_1 + 0x318));
        if (0 < iVar1) {
          return 1;
        }
      }
    }
    uVar3 = 0x47;
  }
  else {
    uVar3 = 0x2f;
  }
  *param_2 = uVar3;
  return 0;
}

