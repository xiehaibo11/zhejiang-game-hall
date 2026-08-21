
/* dtFree(void*) */

void dtFree(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x011858a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_01781828)();
    return;
  }
  return;
}

