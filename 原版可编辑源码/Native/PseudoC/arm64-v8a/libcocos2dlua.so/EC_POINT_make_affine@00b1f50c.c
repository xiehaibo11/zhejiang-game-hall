
int EC_POINT_make_affine(EC_GROUP *group,EC_POINT *point,BN_CTX *ctx)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int line;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0xe0);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x366;
  }
  else {
    if (*(long *)group == *(long *)point) {
                    /* WARNING: Could not recover jumptable at 0x00b1f574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x36a;
  }
  ERR_put_error(0x10,0x78,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

