
void FUN_011f8e50(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011f8e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x30))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

