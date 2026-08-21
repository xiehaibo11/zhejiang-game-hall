
/* v8::internal::wasm::float64_to_int64_wrapper(unsigned long) */

undefined4 v8::internal::wasm::float64_to_int64_wrapper(ulong param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  dVar2 = *(double *)param_1;
  uVar1 = 0;
  if ((-9.223372036854776e+18 <= dVar2) && (dVar2 < 9.223372036854776e+18)) {
    *(long *)param_1 = (long)dVar2;
    uVar1 = 1;
  }
  return uVar1;
}

