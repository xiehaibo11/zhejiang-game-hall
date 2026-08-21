
void * png_malloc_base(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_1 != 0) && (*(code **)(param_1 + 0x460) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x010c3f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)(param_1 + 0x460))();
    return pvVar1;
  }
  pvVar1 = malloc(param_2);
  return pvVar1;
}

