
void png_free(long param_1,void *param_2)

{
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    if (*(code **)(param_1 + 0x468) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x010c3e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x468))();
      return;
    }
    free(param_2);
    return;
  }
  return;
}

