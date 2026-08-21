
/* btAlignedFreeInternal(void*) */

void btAlignedFreeInternal(void *param_1)

{
  if (param_1 != (void *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x0119e3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_01781838)();
    return;
  }
  return;
}

