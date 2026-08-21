
/* btAlignedAllocInternal(unsigned long, int) */

void btAlignedAllocInternal(ulong param_1,int param_2)

{
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
                    /* WARNING: Could not recover jumptable at 0x0119e3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01781830)(param_1,param_2);
  return;
}

