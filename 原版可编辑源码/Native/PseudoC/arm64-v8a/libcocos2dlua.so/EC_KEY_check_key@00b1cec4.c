
int EC_KEY_check_key(EC_KEY *key)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int line;
  
  if (((key == (EC_KEY *)0x0) || (*(long **)(key + 0x18) == (long *)0x0)) ||
     (*(long *)(key + 0x20) == 0)) {
    iVar1 = 0x43;
    line = 0x102;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(key + 0x18) + 0x158);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b1cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)();
      return iVar1;
    }
    iVar1 = 0x42;
    line = 0x107;
  }
  ERR_put_error(0x10,0xb1,iVar1,"crypto/ec/ec_key.c",line);
  return 0;
}

