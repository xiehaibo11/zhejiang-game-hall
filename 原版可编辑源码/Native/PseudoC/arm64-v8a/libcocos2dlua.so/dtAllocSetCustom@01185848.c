
/* dtAllocSetCustom(void* (*)(int, dtAllocHint), void (*)(void*)) */

void dtAllocSetCustom(_func_void_ptr_int_dtAllocHint *param_1,_func_void_void_ptr *param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = FUN_0118587c;
  pcVar2 = free;
  if (param_1 != (_func_void_ptr_int_dtAllocHint *)0x0) {
    pcVar1 = param_1;
  }
  PTR_FUN_01781820 = pcVar1;
  if (param_2 != (_func_void_void_ptr *)0x0) {
    pcVar2 = param_2;
  }
  PTR_free_01781828 = pcVar2;
  return;
}

