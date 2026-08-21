
/* v8::internal::wasm::f64_floor_wrapper(unsigned long) */

void v8::internal::wasm::f64_floor_wrapper(ulong param_1)

{
  *(long *)param_1 = (long)*(double *)param_1;
  return;
}

