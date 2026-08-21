
int EC_POINT_copy(EC_POINT *dst,EC_POINT *src)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int line;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)dst + 0x68);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    iVar1 = 0x42;
    line = 600;
  }
  else {
    if (*(long *)dst == *(long *)src) {
      if (dst != src) {
                    /* WARNING: Could not recover jumptable at 0x00b1e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*UNRECOVERED_JUMPTABLE)();
        return iVar1;
      }
      return 1;
    }
    iVar1 = 0x65;
    line = 0x25c;
  }
  ERR_put_error(0x10,0x72,iVar1,"crypto/ec/ec_lib.c",line);
  return 0;
}

