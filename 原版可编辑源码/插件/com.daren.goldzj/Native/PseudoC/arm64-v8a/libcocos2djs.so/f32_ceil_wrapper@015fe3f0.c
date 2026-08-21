
/* v8::internal::wasm::f32_ceil_wrapper(unsigned long) */

void v8::internal::wasm::f32_ceil_wrapper(ulong param_1)

{
  *(int *)param_1 = (int)*(float *)param_1;
  return;
}

