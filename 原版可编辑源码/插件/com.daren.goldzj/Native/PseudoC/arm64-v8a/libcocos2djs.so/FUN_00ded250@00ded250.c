
void FUN_00ded250(long param_1,long param_2)

{
  (*DAT_01d545e0)(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00ded294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_01d545e0)(param_1 + 0x40,param_2 + 0x80,1);
  return;
}

