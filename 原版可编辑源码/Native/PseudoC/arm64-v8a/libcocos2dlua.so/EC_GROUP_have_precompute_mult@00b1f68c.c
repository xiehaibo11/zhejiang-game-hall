
int EC_GROUP_have_precompute_mult(EC_GROUP *group)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(*(long *)group + 0xf0) == 0) {
    iVar1 = ec_wNAF_have_precompute_mult();
    return iVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)group + 0x100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b1f6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  return 0;
}

