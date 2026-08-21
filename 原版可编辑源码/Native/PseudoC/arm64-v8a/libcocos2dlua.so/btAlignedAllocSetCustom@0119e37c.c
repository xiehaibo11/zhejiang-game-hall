
/* btAlignedAllocSetCustom(void* (*)(unsigned long), void (*)(void*)) */

void btAlignedAllocSetCustom(_func_void_ptr_ulong *param_1,_func_void_void_ptr *param_2)

{
  if (param_1 == (_func_void_ptr_ulong *)0x0) {
    param_1 = malloc;
  }
  if (param_2 == (_func_void_void_ptr *)0x0) {
    param_2 = free;
  }
  PTR_malloc_01781840 = param_1;
  PTR_free_01781848 = param_2;
  return;
}

