
/* v8::internal::wasm::memory_fill_wrapper(unsigned long, unsigned int, unsigned int) */

void v8::internal::wasm::memory_fill_wrapper(ulong param_1,uint param_2,uint param_3)

{
  if (param_3 != 0) {
    memset((void *)param_1,param_2,(ulong)param_3);
  }
  return;
}

