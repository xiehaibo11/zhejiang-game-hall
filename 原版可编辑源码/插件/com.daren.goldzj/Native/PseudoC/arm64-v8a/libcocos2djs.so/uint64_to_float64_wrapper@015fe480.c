
/* v8::internal::wasm::uint64_to_float64_wrapper(unsigned long) */

void v8::internal::wasm::uint64_to_float64_wrapper(ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_ucvtf(*(undefined8 *)param_1);
  *(undefined8 *)param_1 = uVar1;
  return;
}

