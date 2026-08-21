
/* v8::internal::wasm::float64_to_uint64_wrapper(unsigned long) */

undefined8 v8::internal::wasm::float64_to_uint64_wrapper(ulong param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = *(double *)param_1;
  uVar1 = 0;
  if ((-1.0 < dVar2) && (dVar2 < 1.8446744073709552e+19)) {
    uVar1 = 1;
    *(long *)param_1 = (long)dVar2;
  }
  return uVar1;
}

