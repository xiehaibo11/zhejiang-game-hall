
/* v8::internal::wasm::float32_to_int64_wrapper(unsigned long) */

undefined4 v8::internal::wasm::float32_to_int64_wrapper(ulong param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  uVar1 = 0;
  if ((-9.223372e+18 <= fVar2) && (fVar2 < 9.223372e+18)) {
    *(long *)param_1 = (long)fVar2;
    uVar1 = 1;
  }
  return uVar1;
}

