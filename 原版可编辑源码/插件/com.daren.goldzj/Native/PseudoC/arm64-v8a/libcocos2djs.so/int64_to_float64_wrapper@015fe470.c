
/* v8::internal::wasm::int64_to_float64_wrapper(unsigned long) */

void v8::internal::wasm::int64_to_float64_wrapper(ulong param_1)

{
  *(double *)param_1 = (double)*(long *)param_1;
  return;
}

