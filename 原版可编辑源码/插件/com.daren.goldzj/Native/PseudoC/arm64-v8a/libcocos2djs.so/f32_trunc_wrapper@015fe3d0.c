
/* v8::internal::wasm::f32_trunc_wrapper(unsigned long) */

void v8::internal::wasm::f32_trunc_wrapper(ulong param_1)

{
  *(int *)param_1 = (int)*(float *)param_1;
  return;
}

