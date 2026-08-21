
int EC_POINT_is_at_infinity(EC_GROUP *group,EC_POINT *p)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int line;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 200);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x336;
  }
  else {
    if (*(long *)group == *(long *)p) {
                    /* WARNING: Could not recover jumptable at 0x00b1f508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x33a;
  }
  ERR_put_error(0x10,0x76,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

