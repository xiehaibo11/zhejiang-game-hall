
undefined8 EC_GROUP_get_curve_GF2m(long *param_1)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0f59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))();
    return uVar1;
  }
  ERR_put_error(0x10,0xac,0x42,"crypto/ec/ec_lib.c",0x1bd);
  return 0;
}

