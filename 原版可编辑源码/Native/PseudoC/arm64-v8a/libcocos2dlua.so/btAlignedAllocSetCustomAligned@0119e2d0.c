
/* btAlignedAllocSetCustomAligned(void* (*)(unsigned long, int), void (*)(void*)) */

void btAlignedAllocSetCustomAligned(_func_void_ptr_ulong_int *param_1,_func_void_void_ptr *param_2)

{
  if (param_1 == (_func_void_ptr_ulong_int *)0x0) {
    param_1 = FUN_0119e300;
  }
  if (param_2 == (_func_void_void_ptr *)0x0) {
    param_2 = FUN_0119e360;
  }
  PTR_FUN_01781830 = param_1;
  PTR_FUN_01781838 = param_2;
  return;
}

