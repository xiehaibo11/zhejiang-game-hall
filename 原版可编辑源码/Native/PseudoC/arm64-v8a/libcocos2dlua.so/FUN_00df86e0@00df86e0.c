
void FUN_00df86e0(long param_1)

{
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
                    /* try { // try from 00df86f8 to 00ef8703 has its CatchHandler @ 00df9020 */
                    /* WARNING: Could not recover jumptable at 0x00df86fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x90) + 0x30))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d64e4();
}

