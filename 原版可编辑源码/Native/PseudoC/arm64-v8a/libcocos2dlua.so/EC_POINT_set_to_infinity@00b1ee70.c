
int EC_POINT_set_to_infinity(EC_GROUP *group,EC_POINT *point)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int line;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0x70);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x280;
  }
  else {
    if (*(long *)group == *(long *)point) {
                    /* WARNING: Could not recover jumptable at 0x00b1eed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x284;
  }
  ERR_put_error(0x10,0x7f,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

