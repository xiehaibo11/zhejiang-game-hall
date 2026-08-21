
void * png_malloc_array(long param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  
  if ((param_2 < 1) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array alloc");
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = 0xffffffffffffffff / param_3;
  }
  if (((ulong)(long)param_2 <= uVar1) && (__size = (long)param_2 * param_3, __size != 0)) {
    if ((param_1 != 0) && (*(code **)(param_1 + 0x460) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00d67ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar2 = (void *)(**(code **)(param_1 + 0x460))(param_1,__size);
      return pvVar2;
    }
    pvVar2 = malloc(__size);
    return pvVar2;
  }
  return (void *)0x0;
}

