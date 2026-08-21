
void FUN_011496f8(long param_1,long param_2)

{
  (*DAT_017960b8)(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0114973c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_017960b8)(param_1 + 0x40,param_2 + 0x80,1);
  return;
}

