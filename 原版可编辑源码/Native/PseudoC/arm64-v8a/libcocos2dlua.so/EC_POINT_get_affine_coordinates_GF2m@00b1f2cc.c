
undefined8 EC_POINT_get_affine_coordinates_GF2m(long *param_1,long *param_2)

{
  undefined8 uVar1;
  int reason;
  int line;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x90);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    reason = 0x42;
    line = 0x2fc;
  }
  else {
    if (*param_1 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00b1f334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    reason = 0x65;
    line = 0x301;
  }
  ERR_put_error(0x10,0xb7,reason,"crypto/ec/ec_lib.c",line);
  return 0;
}

