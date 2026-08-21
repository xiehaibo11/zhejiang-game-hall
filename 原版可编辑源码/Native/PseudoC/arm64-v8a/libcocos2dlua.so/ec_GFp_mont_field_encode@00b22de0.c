
undefined8 ec_GFp_mont_field_encode(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = BN_to_montgomery(param_2,param_3,*(long *)(param_1 + 0x78));
    return uVar1;
  }
  ERR_put_error(0x10,0x86,0x6f,"crypto/ec/ecp_mont.c",0xd5);
  return 0;
}

