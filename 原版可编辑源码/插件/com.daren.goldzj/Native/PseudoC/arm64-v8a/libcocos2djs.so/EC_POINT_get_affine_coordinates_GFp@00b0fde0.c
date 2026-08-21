
int EC_POINT_get_affine_coordinates_GFp(EC_GROUP *group,EC_POINT *p,BIGNUM *x,BIGNUM *y,BN_CTX *ctx)

{
  int iVar1;
  int line;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0x90);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar1 = 0x42;
    line = 0x2ea;
  }
  else {
    if (*(long *)group == *(long *)p) {
                    /* WARNING: Could not recover jumptable at 0x00b0fe48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    iVar1 = 0x65;
    line = 0x2ef;
  }
  ERR_put_error(0x10,0x74,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

