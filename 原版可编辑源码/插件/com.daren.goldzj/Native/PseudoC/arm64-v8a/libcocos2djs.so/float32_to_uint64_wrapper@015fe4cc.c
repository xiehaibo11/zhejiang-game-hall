
/* v8::internal::wasm::float32_to_uint64_wrapper(unsigned long) */

undefined8 v8::internal::wasm::float32_to_uint64_wrapper(ulong param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  uVar1 = 0;
  if ((-1.0 < fVar2) && (fVar2 < 1.8446744e+19)) {
    uVar1 = 1;
    *(long *)param_1 = (long)fVar2;
  }
  return uVar1;
}

