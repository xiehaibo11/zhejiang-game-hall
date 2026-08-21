
int EC_POINT_invert(EC_GROUP *group,EC_POINT *a,BN_CTX *ctx)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int line;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xc0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x328;
  }
  else {
    if (*(long *)group == *(long *)a) {
                    /* WARNING: Could not recover jumptable at 0x00b1001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x32c;
  }
  ERR_put_error(0x10,0xd2,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

