
/* v8::internal::wasm::uint64_to_float32_wrapper(unsigned long) */

void v8::internal::wasm::uint64_to_float32_wrapper(ulong param_1)

{
  *(float *)param_1 = (float)*(ulong *)param_1;
  return;
}

